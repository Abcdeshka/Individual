#pragma once
#pragma once
#include "MyForm.h"
#include "Task0.h"
#include <vector>
namespace Task2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Task2 {
    Ref0::MyClass f;


    //ЭТА ФУНКЦИЯ НЕ ИСПОЛЬЗУЕТСЯ
    public: void Rectangling(Collections::Generic::List<String^> arr) {
        //размеры массива и собирание его в прямоугольный
        int len = 0;
        Collections::Generic::List<int> sums;
        //макс длина строки
        for (int i = 0; i < arr.Count; i++) {
            if (arr[i]->Split(' ')->Length > len) len = arr[i]->Split(' ')->Length;
        }
        // f
        for each (String ^ str in arr) {
            Collections::Generic::List<String^> row;
            for each (String ^ s in str->Split(' ')) {
                row.Add(s);
            }
            while (len > row.Count)
            {
                row.Add("0");
            }
            int sum = 0;
            //собирает сумму каждой строки
            for each (String ^ d in row) {
                sum += Convert::ToInt16(d);
            }
            sums.Add(sum);
        }
        
    }

	public: void Sol2(Windows::Forms::RichTextBox^ txtSums, Windows::Forms::TextBox^ txtOut2, Windows::Forms::RichTextBox^ txtIn2) { //Обработка массива 2
        String^ text = txtIn2->Text;
        if (text == "") return;
        Collections::Generic::List<String^> arr;
        // чистит по строкам
        while (text != "") {
            String^ curr = "";
            int index = text->IndexOf('\n');
            
            if (index == 0) {
                text = text->Remove(0, text->IndexOf('\n') + 1);
            }
            else {
                if (index == -1) {
                    curr = text;
                    text = text + "\n";
                }
                else {
                    curr = text->Remove(index, text->Length - index);
                }
                curr = f.formatString(curr);
                if (curr != "" && curr!=nullptr) {
                    if (curr[0] == ' ') curr = curr->Remove(0, 1);
                    if (curr[curr->Length - 1] == ' ') curr = curr->Remove(curr->Length - 1, 1);
                    arr.Add(curr);
                }
                
                text = text->Remove(0, text->IndexOf('\n') + 1);
            }
        }
        txtIn2->Text = "";
        //размеры массива и собирание его в прямоугольный
        int col = arr.Count;
        int len = 0;
        Collections::Generic::List<int> sums;
        for (int i = 0; i < arr.Count; i++){
            if (arr[i]->Split(' ')->Length > len) len = arr[i]->Split(' ')->Length;
        }
        for each (String ^ str in arr) {
            Collections::Generic::List<String^> row;
            for each (String ^ s in str->Split(' ')) {
                txtIn2->Text += txtIn2->Text->Format("{0,8}", s);
                row.Add(s);
            }
            while (len>row.Count)
            {
                txtIn2->Text += txtIn2->Text->Format("{0,8}", 0);
                row.Add("0");
            }
            int sum = 0;
            txtIn2->Text += "\n";
            //собирает сумму каждой строки
            for each (String ^ d in row) {
                sum += Convert::ToInt32(d);
            }
            sums.Add(sum);
        }
        //ниже находится мин и макс суммы и индексы строк 
        int maxsum = -2147483646;
        int minsum = 2147483647;
        int mini = 0;
        int maxi = 0;
        for (int i = 0; i < sums.Count; i++) {
            if (sums[i] > maxsum) {
                maxsum = sums[i];
                maxi = i;
            }
            if (sums[i] < minsum) {
                minsum = sums[i];
                mini = i;
        }
        }
        array<String^>^ rowstring = txtIn2->Text->Split('\n');
        txtOut2->Text = "";
        txtSums->Text = "";
        if (maxsum != -32766 && minsum != 32766) {
            txtOut2->Text += "Наименьшая сумма "+ Convert::ToString(minsum)+" в "+Convert::ToString(mini+1) + "-й строке:\r\n" + rowstring[mini] + "\r\n";
            txtOut2->Text += "Наибольшая сумма " + Convert::ToString(maxsum) + " в "+Convert::ToString(maxi+1) + "-й строке:\r\n" + rowstring[maxi] + "\r\n";
            for (int i = 0; i < sums.Count; i++) {
                if (i == mini) {
                    txtSums->Text += Convert::ToString(sums[i]) + "\n";
                    
                }
                else if (i == maxi) {
                    txtSums->Text += Convert::ToString(sums[i]) + "\n";
                    
                }
                else txtSums->Text += Convert::ToString(sums[i]) + "\n";
            }
            txtSums->Select(txtSums->Text->IndexOf(Convert::ToString(minsum)), Convert::ToString(minsum)->Length);
            txtSums->SelectionColor = Color::Red;
            txtSums->Select(txtSums->Text->IndexOf(Convert::ToString(maxsum)), Convert::ToString(maxsum)->Length);
            txtSums->SelectionColor = Color::Blue;
            txtIn2->Select(txtIn2->Text->IndexOf(rowstring[mini]), rowstring[mini]->Length);
            txtIn2->SelectionColor = Color::Red;
            txtIn2->Select(txtIn2->Text->IndexOf(rowstring[maxi]), rowstring[maxi]->Length);
            txtIn2->SelectionColor = Color::Blue;
        
        }
	}

	public: static void Gen2(Windows::Forms::RichTextBox^ txtSums, Windows::Forms::TextBox^ txtX2, Windows::Forms::TextBox^ txtY2, Windows::Forms::RichTextBox^ txtIn2, Windows::Forms::TextBox^ txtMin2, Windows::Forms::TextBox^ txtMax2, Windows::Forms::TextBox^ txtOut2) {
        txtIn2->Text = "";
        txtOut2->Text = "";
        txtSums->Text = "";
        try {
            const int m = Convert::ToInt16(txtX2->Text);
		    const int n = Convert::ToInt16(txtY2->Text);
		    int min = Convert::ToInt32(txtMin2->Text);
		    int max = Convert::ToInt32(txtMax2->Text);
		    array<int, 2>^ A = gcnew array<int, 2>(m, n);
		    Random^ rnd = gcnew Random();
            if (max <= min) {
                int temp;
                temp = min;
                min = max;
                max = temp;
            }
            
			for (int i = 0; i < m; i++) {

				for (int j = 0; j < n; j++)
				{
					A[i, j] = rnd->Next(min, max + 1);
					txtIn2->Text += txtIn2->Text->Format("{0,8}", A[i, j]);
				}
				if (i != m - 1) {
					txtIn2->Text += "\r\n";
				}
			}
		    }
        catch (FormatException^ e) {
            MessageBox::Show("Не все параметры заполнены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
	}
	};

}