//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGen.exe
//   Version: 1.0.0
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Extension Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UAP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGen - Invoke the following command with a valid 
//   Introspection XML file:
//     AllJoynCodeGen -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace allseen { namespace LSF {

public interface class ILampStateService
{
public:
    // Implement this function to handle calls to the TransitionLampState method.
    Windows::Foundation::IAsyncOperation<LampStateTransitionLampStateResult^>^ TransitionLampStateAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ uint64 interface_timestamp, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interface_newState, _In_ uint32 interface_transitionPeriod);

    // Implement this function to handle calls to the ApplyPulseEffect method.
    Windows::Foundation::IAsyncOperation<LampStateApplyPulseEffectResult^>^ ApplyPulseEffectAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interface_fromState, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interface_toState, _In_ uint32 interface_period, _In_ uint32 interface_duration, _In_ uint32 interface_numPulses, _In_ uint64 interface_timestamp);

    // Implement this function to handle requests for the value of the Version property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<LampStateGetVersionResult^>^ GetVersionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests for the value of the OnOff property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<LampStateGetOnOffResult^>^ GetOnOffAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the OnOff property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<int>^ SetOnOffAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, bool value);

    // Implement this function to handle requests for the value of the Hue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<LampStateGetHueResult^>^ GetHueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Hue property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<int>^ SetHueAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, uint32 value);

    // Implement this function to handle requests for the value of the Saturation property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<LampStateGetSaturationResult^>^ GetSaturationAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Saturation property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<int>^ SetSaturationAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, uint32 value);

    // Implement this function to handle requests for the value of the ColorTemp property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<LampStateGetColorTempResult^>^ GetColorTempAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the ColorTemp property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<int>^ SetColorTempAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, uint32 value);

    // Implement this function to handle requests for the value of the Brightness property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<LampStateGetBrightnessResult^>^ GetBrightnessAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    // Implement this function to handle requests to set the Brightness property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<int>^ SetBrightnessAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, uint32 value);

};

} } } 
