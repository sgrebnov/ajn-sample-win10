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
#include "pch.h"

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace org::allseen::LSF;

// Note: Unlike an Interface implementation, which provides a single handler for each member, the event
// model allows for 0 or more listeners to be registered. The EventAdapter implementation deals with this
// difference by implementing a last-writer-wins policy. The lack of any return value (i.e., 0 listeners)
// is handled by returning a null result.

// Methods
// Property Reads
IAsyncOperation<LampDetailsGetVersionResult^>^ LampDetailsServiceEventAdapter::GetVersionAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetVersionRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetVersionRequested(this, args);
    });
    return LampDetailsGetVersionRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetMakeResult^>^ LampDetailsServiceEventAdapter::GetMakeAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetMakeRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetMakeRequested(this, args);
    });
    return LampDetailsGetMakeRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetModelResult^>^ LampDetailsServiceEventAdapter::GetModelAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetModelRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetModelRequested(this, args);
    });
    return LampDetailsGetModelRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetTypeResult^>^ LampDetailsServiceEventAdapter::GetTypeAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetTypeRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetTypeRequested(this, args);
    });
    return LampDetailsGetTypeRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetLampTypeResult^>^ LampDetailsServiceEventAdapter::GetLampTypeAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetLampTypeRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetLampTypeRequested(this, args);
    });
    return LampDetailsGetLampTypeRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetLampBaseTypeResult^>^ LampDetailsServiceEventAdapter::GetLampBaseTypeAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetLampBaseTypeRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetLampBaseTypeRequested(this, args);
    });
    return LampDetailsGetLampBaseTypeRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetLampBeamAngleResult^>^ LampDetailsServiceEventAdapter::GetLampBeamAngleAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetLampBeamAngleRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetLampBeamAngleRequested(this, args);
    });
    return LampDetailsGetLampBeamAngleRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetDimmableResult^>^ LampDetailsServiceEventAdapter::GetDimmableAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetDimmableRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetDimmableRequested(this, args);
    });
    return LampDetailsGetDimmableRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetColorResult^>^ LampDetailsServiceEventAdapter::GetColorAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetColorRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetColorRequested(this, args);
    });
    return LampDetailsGetColorRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetVariableColorTempResult^>^ LampDetailsServiceEventAdapter::GetVariableColorTempAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetVariableColorTempRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetVariableColorTempRequested(this, args);
    });
    return LampDetailsGetVariableColorTempRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetHasEffectsResult^>^ LampDetailsServiceEventAdapter::GetHasEffectsAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetHasEffectsRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetHasEffectsRequested(this, args);
    });
    return LampDetailsGetHasEffectsRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetMinVoltageResult^>^ LampDetailsServiceEventAdapter::GetMinVoltageAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetMinVoltageRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetMinVoltageRequested(this, args);
    });
    return LampDetailsGetMinVoltageRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetMaxVoltageResult^>^ LampDetailsServiceEventAdapter::GetMaxVoltageAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetMaxVoltageRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetMaxVoltageRequested(this, args);
    });
    return LampDetailsGetMaxVoltageRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetWattageResult^>^ LampDetailsServiceEventAdapter::GetWattageAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetWattageRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetWattageRequested(this, args);
    });
    return LampDetailsGetWattageRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetIncandescentEquivalentResult^>^ LampDetailsServiceEventAdapter::GetIncandescentEquivalentAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetIncandescentEquivalentRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetIncandescentEquivalentRequested(this, args);
    });
    return LampDetailsGetIncandescentEquivalentRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetMaxLumensResult^>^ LampDetailsServiceEventAdapter::GetMaxLumensAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetMaxLumensRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetMaxLumensRequested(this, args);
    });
    return LampDetailsGetMaxLumensRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetMinTemperatureResult^>^ LampDetailsServiceEventAdapter::GetMinTemperatureAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetMinTemperatureRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetMinTemperatureRequested(this, args);
    });
    return LampDetailsGetMinTemperatureRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetMaxTemperatureResult^>^ LampDetailsServiceEventAdapter::GetMaxTemperatureAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetMaxTemperatureRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetMaxTemperatureRequested(this, args);
    });
    return LampDetailsGetMaxTemperatureRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetColorRenderingIndexResult^>^ LampDetailsServiceEventAdapter::GetColorRenderingIndexAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetColorRenderingIndexRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetColorRenderingIndexRequested(this, args);
    });
    return LampDetailsGetColorRenderingIndexRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<LampDetailsGetLampIDResult^>^ LampDetailsServiceEventAdapter::GetLampIDAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LampDetailsGetLampIDRequestedEventArgs(info);
    AllJoynHelpers::DispatchEvent([=]() {
        GetLampIDRequested(this, args);
    });
    return LampDetailsGetLampIDRequestedEventArgs::GetResultAsync(args);
}

// Property Writes
