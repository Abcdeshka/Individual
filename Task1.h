#pragma once
#include "MyForm.h"
#include "Task0.h"

namespace Task1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	public ref class Task1 {
    Ref0::MyClass f;
	Collections::Generic::List<Double> Arr;

	public: void Gen1(bool OutChanged, bool InChanged, Windows::Forms::TextBox^ txtLen, Windows::Forms::RichTextBox^ txtIn, Windows::Forms::TextBox^ txtOut, Windows::Forms::TextBox^ txtMin, Windows::Forms::TextBox^ txtMax){
		InChanged = true;
		txtOut->Text = "";
		OutChanged = false;
		txtIn->Text = L"";
		if ((txtLen->Text == "") || (txtMin->Text == "") || (txtMax->Text == "")) {
			MessageBox::Show("Отсутствуют параметры для генерации массива", "\nОшибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {

			try {
				int N = Convert::ToInt32(txtLen->Text);
				if (N <= 0) {
					MessageBox::Show("Количество элементов в массиве должно быть положительным", "\nОшибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
				else {
					int amin = Convert::ToInt32(txtMin->Text);
					int bmax = Convert::ToInt32(txtMax->Text);
					array<int>^ arr = gcnew array<int>(N);
					Random^ rnd = gcnew Random();
					if (bmax >= amin) {
						for (int i = 0; i < N; i++) { arr[i] = rnd->Next(amin, bmax + 1); }
						for (int i = 0; i < N; i++) { txtIn->Text += Convert::ToString(arr[i]) + " "; }
					}
					else {
						MessageBox::Show("Максимальное значение для диапазона должно быть больше минимального", "\nОшибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				}
			}
			catch (FormatException^ er) {
				MessageBox::Show("Неверные параметры для генерации массива", "\nОшибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
	}

	public: void Sol1(bool OutChanged, bool InChanged, Windows::Forms::RichTextBox^ txtIn, Windows::Forms::TextBox^ txtOut) {
		txtOut->Text = L"";
		OutChanged = false;
		Arr.Clear();
		if (txtIn->Text == "") {
			MessageBox::Show("Исходный массив не задан.", "\nОшибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {
            System::String^ st = f.formatString(txtIn->Text);;
			txtIn->Text = st;
			array<String^>^ str;
			str = txtIn->Text->Split(' ', 1);
			String^ n;
			for each (n in str) {
				if (n == "") { continue; }
				Arr.Add(Convert::ToDouble(n));
			}
			OutChanged = true;
            int a, b =0;
            String^ maxString="";
			Pila(txtOut,a,b,maxString);
            txtIn->Text += " ";
            txtIn->Select(txtIn->Text->IndexOf(maxString), maxString->Length);
            txtIn->SelectionColor = Color::Red;

		}
	}

	void Pila(Windows::Forms::TextBox^ txtOut, int &start, int &end, String^ &maxString) {
		txtOut->Text = "Длина максимальной пилообразной последовательности чисел: ";
		int maxlen = 1;
		int curlen = 1;
		int starti = 0;
		bool flagside = (Arr[0] < Arr[1]);
		for (int i = 1; i < Arr.Count; i++) {
			if (flagside == true) {
				if (Arr[i] > Arr[i - 1]) {
					curlen = curlen + 1;
					flagside = false;
				}
				else {
					if (maxlen < curlen) { maxlen = curlen; start = starti; end = i; }
					curlen = 1;
					starti = i;
				}
			}
			else {
				if (Arr[i] < Arr[i - 1]) {
					curlen = curlen + 1;
					flagside = true;
				}
				else {
					if (maxlen < curlen) { maxlen = curlen; start = starti; end = i; }
					curlen = 1;
					starti = i;
				}
			}
		}
		if (maxlen < curlen) { maxlen = curlen; start = starti; end = Arr.Count - 1; }
		txtOut->Text = txtOut->Text + Convert::ToString(maxlen) + " ";
		txtOut->Text = txtOut->Text + "\r\nНачальный и конечный индексы пилообразной последовательности: " + Convert::ToString(start) + " " + Convert::ToString(end);
		txtOut->Text = txtOut->Text + "\r\nНаибольший промежуток пилообразной последовательности: ";
        
		for (int j = start; j < end + 1; j++) {
			maxString+=Arr[j] + " ";
		}
        if (maxString[maxString->Length - 1] == ' ') maxString->Remove(maxString->Length - 1, 1);
        txtOut->Text = txtOut->Text + maxString;
	}



	};
}