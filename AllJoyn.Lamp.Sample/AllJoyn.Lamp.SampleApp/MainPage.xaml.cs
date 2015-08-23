using System;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;

using org.allseen.LSF;
using System.Diagnostics;
using Windows.Devices.AllJoyn;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace AllJoyn.Lamp.Sample.App
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        LampStateConsumer _lampState;

        public MainPage()
        {
            this.InitializeComponent();

            FindLamp();
        }

        public void FindLamp()
        {
            Debug.WriteLine("Starting consumer ...");

            AllJoynBusAttachment busAttachment = new AllJoynBusAttachment();
            LampStateWatcher watcher = new LampStateWatcher(busAttachment);
            watcher.Added += LampFound;
            watcher.Start();
        }

        private async void LampFound(LampStateWatcher sender, AllJoynServiceInfo args)
        {
            Debug.WriteLine("Attempt to join session..");

            var joinResult = await LampStateConsumer.JoinSessionAsync(args, sender);

            if (joinResult.Status == AllJoynStatus.Ok)
            {
                _lampState = joinResult.Consumer;
                Debug.WriteLine("Consumer has been susccessfully initialized");
                await _lampState.SetOnOffAsync(true);
            }
            else
            {
                Debug.WriteLine("Join session has failed");
            }
        }

        private async void Brightness_ValueChanged(object sender, RangeBaseValueChangedEventArgs e)
        {
            var value = Convert.ToUInt32(UInt32.MaxValue * (e.NewValue / 100.0));
            await _lampState.SetBrightnessAsync(value);
        }

        private async void Hue_ValueChanged(object sender, RangeBaseValueChangedEventArgs e)
        {
            var value = Convert.ToUInt32(UInt32.MaxValue * (e.NewValue / 360.0));
            await _lampState.SetHueAsync(value);
        }

        private async void Saturation_ValueChanged(object sender, RangeBaseValueChangedEventArgs e)
        {
            var value = Convert.ToUInt32(UInt32.MaxValue * (e.NewValue / 100.0));
            await _lampState.SetSaturationAsync(value);
        }

        private async void PowerSwitch_Toggled(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            await _lampState.SetOnOffAsync(PowerSwitch.IsOn);
        }
    }
}
