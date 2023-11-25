#pragma once
namespace Ref0 {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;
    public ref class MyClass
    {
    public:
        MyClass();
        ~MyClass();
    public: System::String^ formatString(String^ str) {
        String^ str2;
        int flag = 0;
        for (int i = 0; i < str->Length - 1; i++) {
            if (str[i] == '-' && Char::IsNumber(str[i + 1])) {
                str2 += (wchar_t)' ';
                str2 += str[i];
            }
            else if (!Char::IsNumber(str[i]) && Char::IsNumber(str[i + 1])) {
                str2 += (wchar_t)' ';
            }
            else if (Char::IsNumber(str[i])) {
                str2 += str[i];
            }
        }
        if (str->Length != 0) {
            if (Char::IsNumber(str[str->Length - 1])) { str2 += str[str->Length - 1]; }
        }
        return str2;
    }
    private:

    };

    MyClass::MyClass()
    {
    }

    MyClass::~MyClass()
    {
    }
}
