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

public ref class AllJoynMessageArgStructure sealed : Windows::Foundation::Collections::IVector<Platform::Object^>
{
public:
    AllJoynMessageArgStructure()
    {
        m_vector = ref new Platform::Collections::Vector<Platform::Object^>();
    }

    virtual Windows::Foundation::Collections::IIterator<Platform::Object^>^ First()
    {
        return m_vector->First();
    }

    virtual Platform::Object^ GetAt(unsigned int index)
    {
        return m_vector->GetAt(index);
    }

    virtual property unsigned int Size {
        virtual unsigned int get()
        {
            return m_vector->Size;
        }
    }

    virtual bool IndexOf(Platform::Object^ value, unsigned int * index)
    {
        return m_vector->IndexOf(value, index);
    }

    virtual unsigned int GetMany(unsigned int startIndex, Platform::WriteOnlyArray<Platform::Object^>^ dest)
    {
        return m_vector->GetMany(startIndex, dest);
    }

    virtual Windows::Foundation::Collections::IVectorView<Platform::Object^>^ GetView()
    {
        return m_vector->GetView();
    }

    virtual void SetAt(unsigned int index, Platform::Object^ item)
    {
        return m_vector->SetAt(index, item);
    }

    virtual void InsertAt(unsigned int index, Platform::Object^ item)
    {
        return m_vector->InsertAt(index, item);
    }

    virtual void Append(Platform::Object^ item)
    {
        return m_vector->Append(item);
    }

    virtual void RemoveAt(unsigned int index)
    {
        return m_vector->RemoveAt(index);
    }

    virtual void RemoveAtEnd()
    {
        return m_vector->RemoveAtEnd();
    }

    virtual void Clear()
    {
        return m_vector->Clear();
    }

    virtual void ReplaceAll(const Platform::Array<Platform::Object^>^ arr)
    {
        return m_vector->ReplaceAll(arr);
    }

private:
    Platform::Collections::Vector<Platform::Object^>^ m_vector;
};
} } } 

partial ref class TypeConversionHelpers
{
internal:
};
