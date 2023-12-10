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
    //Make string to array
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
    // min and max values of array
    public: void keypressMinMax(System::Windows::Forms::KeyPressEventArgs^ e, System::Windows::Forms::TextBox^ txt) {
        char key = e->KeyChar;
        if (!Char::IsDigit(e->KeyChar) && key != 8 && key != '-') {
            e->Handled = true;

        }
        else {
            try {
                if (key == '-') {
                    double a = System::Double::Parse(txt->Text);
                    a *= -1;
                    txt->Text = Convert::ToString(a);
                    e->Handled = true;
                    txt->SelectionStart = txt->Text->Length;
                }
            }
            catch (System::FormatException^ r) {
                if (txt->Text->Length == 1) {
                    e->Handled = true;
                }
            }

        }
    }
    };
    
    MyClass::MyClass()
    {
    }

    MyClass::~MyClass()
    {
    }
}
