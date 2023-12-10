#pragma once
#include "MyForm.h"
#include "Task0.h"
#include <vector>
namespace Task4 {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class Task4 {
    array<String^>^ Skobki;
    int index_oshibki;
    private: bool ValidSkobki(String^ a) {
        int count_skobok = 0;
        for (int i = 0; i < a->Length; i++) {
            if (a[i] == '(') {
                index_oshibki = i;
                count_skobok += 1;
            }
            if (a[i] == ')') {
                count_skobok -= 1;
            }
            if (count_skobok < 0) {
                index_oshibki = i;
                return false;
            }
        }
        return (count_skobok == 0);
    }
    
    private: bool ValidInside(String^ a, Windows::Forms::RichTextBox^ txtIn4) {
        if (a == "") return 1;
        bool right = true;
        if (a[0] == '+' || a[0] == '*' || a[0] == '/') {
            right = false;
            txtIn4->Select(0, 1);
            txtIn4->SelectionColor = Color::Red;
        }
        else if (a[a->Length - 1] == '+' || a[a->Length - 1] == '-' || a[a->Length - 1] == '*' || a[a->Length - 1] == '/') {
            right = false;
            txtIn4->Select(a->Length-1, 1);
            txtIn4->SelectionColor = Color::Red;
        }
        else {
            for (int i = 0; (i < a->Length); i++) {
                //два знака подряд
                if ((a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/') && (a[i + 1] == '+' || a[i + 1] == '*' || a[i + 1] == '/' || a[i+1] == '-')) {
                    txtIn4->Select(i, 2);
                    txtIn4->SelectionColor = Color::Red;
                    right = false;
                }
                //знак перед скобкой нельзя
                if ((a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/' || a[i] == '(') && (a[i + 1] == ')' )) {
                    txtIn4->Select(i, 2);
                    txtIn4->SelectionColor = Color::Red;
                    right = false;
                }
                //знак перед скобкой нельзя
                if ((a[i] == '(' ) && (a[i + 1] == '+' || a[i + 1] == '*' || a[i + 1] == '/'  || a[i+1] == ')')) {
                    txtIn4->Select(i, 2);
                    txtIn4->SelectionColor = Color::Red;
                    right = false;
                }
                //знак перед скобкой нужен
                if ((a[i] == '(') && (i != 0)) {
                    if ((a[i - 1] != '+' && a[i - 1] != '*' && a[i - 1] != '/' && a[i - 1] != '-' && a[i - 1] != '(')) {
                        txtIn4->Select(i, 1);
                        txtIn4->SelectionColor = Color::Red;
                        right = false;
                    }
                }
                //знак перед скобкой нужен
                if ((a[i] == ')') && (i != a->Length-1)) {
                    if ((a[i + 1] != '+' && a[i + 1] != '*' && a[i + 1] != '/' && a[i + 1] != '-' && a[i + 1] != ')')) {
                        txtIn4->Select(i, 1);
                        txtIn4->SelectionColor = Color::Red;
                        right = false;
                    }
                }
                //два нуля
                if ((a[i] == '0') && (i != a->Length-1) && (i != 0)) {
                    if (((a[i - 1] == '+' || a[i - 1] == '*' || a[i - 1] == '/' || a[i - 1] == '-' || a[i - 1] == '(')) && (a[i + 1] != '+' && a[i + 1] != '*' && a[i + 1] != '/' && a[i + 1] != '-' && a[i + 1] != ')')) {
                        txtIn4->Select(i, 1);
                        txtIn4->SelectionColor = Color::Red;
                        right = false;
                    }
                }
                //для переменных
                if (((a[i] >= 65 && a[i]<=90) || (a[i] >= 97 && a[i]<=122)) && (i != a->Length - 1)) {
                    if (Char::IsDigit(a[i+1])) {
                        txtIn4->Select(i, 1);
                        txtIn4->SelectionColor = Color::Red;
                        right = false;
                    }
                }

                //запрет деления на ноль
                if ((a[i] == '/') && (a[i + 1] == '0')) {
                    txtIn4->Select(i, 2);
                    txtIn4->SelectionColor = Color::Red;
                    right = false;
                }
            }
        }
        return right;
    }

    public: void Sol4(Windows::Forms::RichTextBox^ txtOut4, Windows::Forms::RichTextBox^ txtIn4) {
        index_oshibki = -1;
        txtIn4->Select(0, txtIn4->Text->Length);
        txtIn4->SelectionColor = Color::Black;
        String^ a = txtIn4->Text;
        bool rightness = true;
        bool inside = ValidInside(a, txtIn4);
        bool skobki = ValidSkobki(a);
        rightness = (inside && skobki);
        if (!ValidSkobki(a)) {
            txtIn4->Select(index_oshibki, 1);
            txtIn4->SelectionColor = Color::Red;
        }
        else {
            index_oshibki = -1;
        }
        if (rightness) {
            txtOut4->Text = "Выражение верно\n";
        }
        else {
            if (index_oshibki != -1) {
                txtIn4->Select(index_oshibki, 1);
                txtIn4->SelectionColor = Color::Red;
            }
            
            txtOut4->Text = "Выражение неверно\n";
        }
            
       

    }
    };
}