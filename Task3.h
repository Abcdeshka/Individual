#pragma once
#include "MyForm.h"
#include "Task0.h"
#include <vector>
namespace Task3 {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class Task3 {

    public: void Sol3(Windows::Forms::RichTextBox^ txtOut3, Windows::Forms::TextBox^ txtIn3) {
        try {
            txtOut3->Text = "";
            unsigned long long n = Convert::ToUInt64(txtIn3->Text);
            Collections::Generic::List<int> Simple;
            int countDegree = 0;
            int i = 2;
            txtOut3->Text = "Простые множители данного числа:\n"+ Convert::ToString(n) + " = ";
            while (i * i <= n) {
                while (n % i == 0) {
                    n /= i;
                    countDegree++;
                }
                if (countDegree >= 1) {
                    txtOut3->Text += Convert::ToString(i);
                    if (countDegree > 1) txtOut3->Text += "^" + Convert::ToString(countDegree);
                    txtOut3->Text +=" * ";
                }
                countDegree = 0;
                i++;
            }
            if (n > 1) {
                txtOut3->Text += Convert::ToString(n) + " * ";
            }
            txtOut3->Text=txtOut3->Text->Remove(txtOut3->Text->Length - 3);
        }
        catch (Exception^ e){
            MessageBox::Show("Неверно введено число, оно должно быть натуральным", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        //Если с массивом
        /*while(i * i <= n) {
            while (n % i == 0) {
                n /= i;
                Simple.Add(i);
            }
            i++;
        }
        if (n > 1) {
            Simple.Add(n);
        }
        if (Simple.Count != 0) {
            txtOut3->Text = "Простые множители данного числа:\n";
            for each (int number in Simple) {
                txtOut3->Text += Convert::ToString(number) + "\n";
            }
        }*/
        
        }
    };
}