#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "Task1.h"
#include "Task2.h"
#include "Task0.h"
#include "Task3.h"
#include "Task4.h"


namespace Individual {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    /// <summary>
    /// Сводка для MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
        }

    protected:
        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TabControl^ tabControl1;
    protected:
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ txtEndMas;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ txtOutFile;
    private: System::Windows::Forms::Button^ btnSaveFile;
    private: System::Windows::Forms::Button^ btnSol;
    private: System::Windows::Forms::Label^ label5;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ btnGen;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::TextBox^ txtMax;
    private: System::Windows::Forms::TextBox^ txtMin;
    private: System::Windows::Forms::TextBox^ txtCount;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ txtBoxFile;


    private: System::Windows::Forms::Button^ btn_File;

    private: System::Windows::Forms::TextBox^ txtOut2;

    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TextBox^ textBoxFileOut2;

    private: System::Windows::Forms::Button^ btnSave2;
    private: System::Windows::Forms::Button^ btnSol2;
    private: System::Windows::Forms::Label^ label12;

    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Button^ btnGen2;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::TextBox^ txtX2;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TextBox^ txtMax2;
    private: System::Windows::Forms::TextBox^ txtMin2;
    private: System::Windows::Forms::TextBox^ txtY2;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ TextBoxFile2;

    private: System::Windows::Forms::Button^ btnFile2;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;

    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::RichTextBox^ txtIn2;
    private: System::Windows::Forms::RichTextBox^ txtSums;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::RichTextBox^ txtOut3;
    private: System::Windows::Forms::TextBox^ txtIn3;
    private: System::Windows::Forms::Button^ btnSol3;
    private: System::Windows::Forms::RichTextBox^ txtIn;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TextBox^ txtFileOut3;

    private: System::Windows::Forms::Button^ btnSave3;

    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::TextBox^ txtFile3;

    private: System::Windows::Forms::Button^ btnFile3;

    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::TextBox^ txtFileOut4;

    private: System::Windows::Forms::Button^ btnSave4;

    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::TextBox^ txtFile4;

    private: System::Windows::Forms::Button^ btnFile4;

    private: System::Windows::Forms::Button^ btnSol4;
    private: System::Windows::Forms::RichTextBox^ txtOut4;
    private: System::Windows::Forms::RichTextBox^ txtIn4;








    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->txtIn = (gcnew System::Windows::Forms::RichTextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->txtEndMas = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->txtOutFile = (gcnew System::Windows::Forms::TextBox());
            this->btnSaveFile = (gcnew System::Windows::Forms::Button());
            this->btnSol = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->btnGen = (gcnew System::Windows::Forms::Button());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->txtMax = (gcnew System::Windows::Forms::TextBox());
            this->txtMin = (gcnew System::Windows::Forms::TextBox());
            this->txtCount = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->txtBoxFile = (gcnew System::Windows::Forms::TextBox());
            this->btn_File = (gcnew System::Windows::Forms::Button());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->txtSums = (gcnew System::Windows::Forms::RichTextBox());
            this->txtIn2 = (gcnew System::Windows::Forms::RichTextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->txtOut2 = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBoxFileOut2 = (gcnew System::Windows::Forms::TextBox());
            this->btnSave2 = (gcnew System::Windows::Forms::Button());
            this->btnSol2 = (gcnew System::Windows::Forms::Button());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->btnGen2 = (gcnew System::Windows::Forms::Button());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->txtX2 = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->txtMax2 = (gcnew System::Windows::Forms::TextBox());
            this->txtMin2 = (gcnew System::Windows::Forms::TextBox());
            this->txtY2 = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->TextBoxFile2 = (gcnew System::Windows::Forms::TextBox());
            this->btnFile2 = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->txtFileOut3 = (gcnew System::Windows::Forms::TextBox());
            this->btnSave3 = (gcnew System::Windows::Forms::Button());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->txtFile3 = (gcnew System::Windows::Forms::TextBox());
            this->btnFile3 = (gcnew System::Windows::Forms::Button());
            this->btnSol3 = (gcnew System::Windows::Forms::Button());
            this->txtOut3 = (gcnew System::Windows::Forms::RichTextBox());
            this->txtIn3 = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->txtIn4 = (gcnew System::Windows::Forms::RichTextBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->txtFileOut4 = (gcnew System::Windows::Forms::TextBox());
            this->btnSave4 = (gcnew System::Windows::Forms::Button());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->txtFile4 = (gcnew System::Windows::Forms::TextBox());
            this->btnFile4 = (gcnew System::Windows::Forms::Button());
            this->btnSol4 = (gcnew System::Windows::Forms::Button());
            this->txtOut4 = (gcnew System::Windows::Forms::RichTextBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->groupBox1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(982, 853);
            this->tabControl1->TabIndex = 0;
            this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->txtIn);
            this->tabPage1->Controls->Add(this->label8);
            this->tabPage1->Controls->Add(this->label7);
            this->tabPage1->Controls->Add(this->txtEndMas);
            this->tabPage1->Controls->Add(this->button2);
            this->tabPage1->Controls->Add(this->label6);
            this->tabPage1->Controls->Add(this->txtOutFile);
            this->tabPage1->Controls->Add(this->btnSaveFile);
            this->tabPage1->Controls->Add(this->btnSol);
            this->tabPage1->Controls->Add(this->label5);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->btnGen);
            this->tabPage1->Controls->Add(this->groupBox1);
            this->tabPage1->Controls->Add(this->txtBoxFile);
            this->tabPage1->Controls->Add(this->btn_File);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(974, 824);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Задание1";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // txtIn
            // 
            this->txtIn->Location = System::Drawing::Point(41, 343);
            this->txtIn->Name = L"txtIn";
            this->txtIn->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
            this->txtIn->Size = System::Drawing::Size(629, 170);
            this->txtIn->TabIndex = 64;
            this->txtIn->Text = L"";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(70, 15);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(773, 58);
            this->label8->TabIndex = 63;
            this->label8->Text = L"Найти длину самой длинной «пилообразной» (зубьями вверх)\r\n последовательности под"
                L"ряд идущих чисел";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label7->Location = System::Drawing::Point(42, 530);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(153, 18);
            this->label7->TabIndex = 62;
            this->label7->Text = L"Результат операции:";
            // 
            // txtEndMas
            // 
            this->txtEndMas->ImeMode = System::Windows::Forms::ImeMode::Disable;
            this->txtEndMas->Location = System::Drawing::Point(41, 558);
            this->txtEndMas->Margin = System::Windows::Forms::Padding(4);
            this->txtEndMas->Multiline = true;
            this->txtEndMas->Name = L"txtEndMas";
            this->txtEndMas->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->txtEndMas->Size = System::Drawing::Size(625, 184);
            this->txtEndMas->TabIndex = 61;
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->button2->Location = System::Drawing::Point(810, 714);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(100, 28);
            this->button2->TabIndex = 60;
            this->button2->Text = L"Закрыть";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(689, 598);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(154, 16);
            this->label6->TabIndex = 59;
            this->label6->Text = L"Имя выходного файла:";
            // 
            // txtOutFile
            // 
            this->txtOutFile->Enabled = false;
            this->txtOutFile->Location = System::Drawing::Point(693, 618);
            this->txtOutFile->Margin = System::Windows::Forms::Padding(4);
            this->txtOutFile->Name = L"txtOutFile";
            this->txtOutFile->Size = System::Drawing::Size(219, 22);
            this->txtOutFile->TabIndex = 58;
            // 
            // btnSaveFile
            // 
            this->btnSaveFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnSaveFile->Location = System::Drawing::Point(693, 650);
            this->btnSaveFile->Margin = System::Windows::Forms::Padding(4);
            this->btnSaveFile->Name = L"btnSaveFile";
            this->btnSaveFile->Size = System::Drawing::Size(220, 28);
            this->btnSaveFile->TabIndex = 57;
            this->btnSaveFile->Text = L"Сохранить";
            this->btnSaveFile->UseVisualStyleBackColor = true;
            this->btnSaveFile->Click += gcnew System::EventHandler(this, &MyForm::btnSaveFile_Click);
            // 
            // btnSol
            // 
            this->btnSol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnSol->Location = System::Drawing::Point(693, 554);
            this->btnSol->Margin = System::Windows::Forms::Padding(4);
            this->btnSol->Name = L"btnSol";
            this->btnSol->Size = System::Drawing::Size(220, 28);
            this->btnSol->TabIndex = 49;
            this->btnSol->Text = L"Выполнить";
            this->btnSol->UseVisualStyleBackColor = true;
            this->btnSol->Click += gcnew System::EventHandler(this, &MyForm::btnSol_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label5->Location = System::Drawing::Point(41, 322);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(138, 18);
            this->label5->TabIndex = 56;
            this->label5->Text = L"Исходный массив:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(689, 137);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(145, 16);
            this->label4->TabIndex = 54;
            this->label4->Text = L"Имя входного файла:";
            // 
            // btnGen
            // 
            this->btnGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnGen->Location = System::Drawing::Point(689, 96);
            this->btnGen->Margin = System::Windows::Forms::Padding(4);
            this->btnGen->Name = L"btnGen";
            this->btnGen->Size = System::Drawing::Size(221, 31);
            this->btnGen->TabIndex = 53;
            this->btnGen->Text = L"Генерация массива";
            this->btnGen->UseCompatibleTextRendering = true;
            this->btnGen->UseVisualStyleBackColor = true;
            this->btnGen->Click += gcnew System::EventHandler(this, &MyForm::btnGen_Click);
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->txtMax);
            this->groupBox1->Controls->Add(this->txtMin);
            this->groupBox1->Controls->Add(this->txtCount);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->label3);
            this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
            this->groupBox1->Location = System::Drawing::Point(41, 96);
            this->groupBox1->Margin = System::Windows::Forms::Padding(4);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Padding = System::Windows::Forms::Padding(4);
            this->groupBox1->Size = System::Drawing::Size(568, 206);
            this->groupBox1->TabIndex = 52;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Исходные данные";
            // 
            // txtMax
            // 
            this->txtMax->Location = System::Drawing::Point(337, 139);
            this->txtMax->Margin = System::Windows::Forms::Padding(4);
            this->txtMax->Name = L"txtMax";
            this->txtMax->Size = System::Drawing::Size(193, 26);
            this->txtMax->TabIndex = 8;
            this->txtMax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txtMax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtMax_KeyPress);
            // 
            // txtMin
            // 
            this->txtMin->Location = System::Drawing::Point(337, 91);
            this->txtMin->Margin = System::Windows::Forms::Padding(4);
            this->txtMin->Name = L"txtMin";
            this->txtMin->Size = System::Drawing::Size(193, 26);
            this->txtMin->TabIndex = 7;
            this->txtMin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txtMin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtMin_KeyPress);
            // 
            // txtCount
            // 
            this->txtCount->Location = System::Drawing::Point(337, 44);
            this->txtCount->Margin = System::Windows::Forms::Padding(4);
            this->txtCount->Name = L"txtCount";
            this->txtCount->Size = System::Drawing::Size(193, 26);
            this->txtCount->TabIndex = 6;
            this->txtCount->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txtCount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtCount_KeyPress);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
            this->label1->Location = System::Drawing::Point(16, 48);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(239, 18);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Количество элементов массива:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
            this->label2->Location = System::Drawing::Point(16, 95);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(256, 18);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Минимальное значение диапазона:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
            this->label3->Location = System::Drawing::Point(16, 143);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(264, 18);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Максимальное значение диапазона:";
            // 
            // txtBoxFile
            // 
            this->txtBoxFile->Enabled = false;
            this->txtBoxFile->Location = System::Drawing::Point(689, 157);
            this->txtBoxFile->Margin = System::Windows::Forms::Padding(4);
            this->txtBoxFile->Name = L"txtBoxFile";
            this->txtBoxFile->Size = System::Drawing::Size(223, 22);
            this->txtBoxFile->TabIndex = 51;
            // 
            // btn_File
            // 
            this->btn_File->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btn_File->Location = System::Drawing::Point(689, 189);
            this->btn_File->Margin = System::Windows::Forms::Padding(4);
            this->btn_File->Name = L"btn_File";
            this->btn_File->Size = System::Drawing::Size(224, 32);
            this->btn_File->TabIndex = 50;
            this->btn_File->Text = L"Открыть";
            this->btn_File->UseVisualStyleBackColor = true;
            this->btn_File->Click += gcnew System::EventHandler(this, &MyForm::btn_File_Click);
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->txtSums);
            this->tabPage2->Controls->Add(this->txtIn2);
            this->tabPage2->Controls->Add(this->label18);
            this->tabPage2->Controls->Add(this->label10);
            this->tabPage2->Controls->Add(this->txtOut2);
            this->tabPage2->Controls->Add(this->label11);
            this->tabPage2->Controls->Add(this->textBoxFileOut2);
            this->tabPage2->Controls->Add(this->btnSave2);
            this->tabPage2->Controls->Add(this->btnSol2);
            this->tabPage2->Controls->Add(this->label12);
            this->tabPage2->Controls->Add(this->label13);
            this->tabPage2->Controls->Add(this->btnGen2);
            this->tabPage2->Controls->Add(this->groupBox2);
            this->tabPage2->Controls->Add(this->TextBoxFile2);
            this->tabPage2->Controls->Add(this->btnFile2);
            this->tabPage2->Controls->Add(this->label9);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(974, 824);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Задание2";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // txtSums
            // 
            this->txtSums->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtSums->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtSums->Location = System::Drawing::Point(837, 364);
            this->txtSums->Name = L"txtSums";
            this->txtSums->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
            this->txtSums->Size = System::Drawing::Size(111, 425);
            this->txtSums->TabIndex = 80;
            this->txtSums->Text = L"";
            this->txtSums->TextChanged += gcnew System::EventHandler(this, &MyForm::txtSums_TextChanged);
            // 
            // txtIn2
            // 
            this->txtIn2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtIn2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtIn2->Location = System::Drawing::Point(9, 364);
            this->txtIn2->Name = L"txtIn2";
            this->txtIn2->Size = System::Drawing::Size(822, 428);
            this->txtIn2->TabIndex = 79;
            this->txtIn2->Text = L"";
            this->txtIn2->WordWrap = false;
            this->txtIn2->TextChanged += gcnew System::EventHandler(this, &MyForm::txtIn2_TextChanged);
            this->txtIn2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtIn2_KeyPress);
            // 
            // label18
            // 
            this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->Location = System::Drawing::Point(815, 339);
            this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(139, 22);
            this->label18->TabIndex = 78;
            this->label18->Text = L"Суммы строк:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(778, 78);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(172, 18);
            this->label10->TabIndex = 76;
            this->label10->Text = L"Результат операции:";
            // 
            // txtOut2
            // 
            this->txtOut2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtOut2->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtOut2->ImeMode = System::Windows::Forms::ImeMode::Disable;
            this->txtOut2->Location = System::Drawing::Point(765, 98);
            this->txtOut2->Margin = System::Windows::Forms::Padding(4);
            this->txtOut2->MinimumSize = System::Drawing::Size(4, 219);
            this->txtOut2->Multiline = true;
            this->txtOut2->Name = L"txtOut2";
            this->txtOut2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
            this->txtOut2->Size = System::Drawing::Size(189, 219);
            this->txtOut2->TabIndex = 75;
            this->txtOut2->WordWrap = false;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(515, 230);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(154, 16);
            this->label11->TabIndex = 73;
            this->label11->Text = L"Имя выходного файла:";
            // 
            // textBoxFileOut2
            // 
            this->textBoxFileOut2->Enabled = false;
            this->textBoxFileOut2->Location = System::Drawing::Point(517, 250);
            this->textBoxFileOut2->Margin = System::Windows::Forms::Padding(4);
            this->textBoxFileOut2->Name = L"textBoxFileOut2";
            this->textBoxFileOut2->Size = System::Drawing::Size(219, 22);
            this->textBoxFileOut2->TabIndex = 72;
            // 
            // btnSave2
            // 
            this->btnSave2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnSave2->Location = System::Drawing::Point(518, 280);
            this->btnSave2->Margin = System::Windows::Forms::Padding(4);
            this->btnSave2->Name = L"btnSave2";
            this->btnSave2->Size = System::Drawing::Size(220, 28);
            this->btnSave2->TabIndex = 71;
            this->btnSave2->Text = L"Сохранить";
            this->btnSave2->UseVisualStyleBackColor = true;
            this->btnSave2->Click += gcnew System::EventHandler(this, &MyForm::btnSave2_Click);
            // 
            // btnSol2
            // 
            this->btnSol2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnSol2->Location = System::Drawing::Point(518, 198);
            this->btnSol2->Margin = System::Windows::Forms::Padding(4);
            this->btnSol2->Name = L"btnSol2";
            this->btnSol2->Size = System::Drawing::Size(220, 28);
            this->btnSol2->TabIndex = 63;
            this->btnSol2->Text = L"Выполнить";
            this->btnSol2->UseVisualStyleBackColor = true;
            this->btnSol2->Click += gcnew System::EventHandler(this, &MyForm::btnSol2_Click);
            // 
            // label12
            // 
            this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(24, 336);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(182, 22);
            this->label12->TabIndex = 70;
            this->label12->Text = L"Исходный массив:";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(515, 106);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(145, 16);
            this->label13->TabIndex = 68;
            this->label13->Text = L"Имя входного файла:";
            // 
            // btnGen2
            // 
            this->btnGen2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnGen2->Location = System::Drawing::Point(515, 65);
            this->btnGen2->Margin = System::Windows::Forms::Padding(4);
            this->btnGen2->Name = L"btnGen2";
            this->btnGen2->Size = System::Drawing::Size(221, 31);
            this->btnGen2->TabIndex = 67;
            this->btnGen2->Text = L"Генерация массива";
            this->btnGen2->UseCompatibleTextRendering = true;
            this->btnGen2->UseVisualStyleBackColor = true;
            this->btnGen2->Click += gcnew System::EventHandler(this, &MyForm::btnGen2_Click);
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->txtX2);
            this->groupBox2->Controls->Add(this->label17);
            this->groupBox2->Controls->Add(this->txtMax2);
            this->groupBox2->Controls->Add(this->txtMin2);
            this->groupBox2->Controls->Add(this->txtY2);
            this->groupBox2->Controls->Add(this->label14);
            this->groupBox2->Controls->Add(this->label15);
            this->groupBox2->Controls->Add(this->label16);
            this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->groupBox2->ForeColor = System::Drawing::SystemColors::Highlight;
            this->groupBox2->Location = System::Drawing::Point(9, 82);
            this->groupBox2->Margin = System::Windows::Forms::Padding(4);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Padding = System::Windows::Forms::Padding(4);
            this->groupBox2->Size = System::Drawing::Size(498, 233);
            this->groupBox2->TabIndex = 66;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Исходные данные";
            // 
            // txtX2
            // 
            this->txtX2->Location = System::Drawing::Point(290, 19);
            this->txtX2->Margin = System::Windows::Forms::Padding(4);
            this->txtX2->Name = L"txtX2";
            this->txtX2->Size = System::Drawing::Size(193, 26);
            this->txtX2->TabIndex = 10;
            this->txtX2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txtX2->TextChanged += gcnew System::EventHandler(this, &MyForm::txtX2_TextChanged);
            this->txtX2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtX2_KeyPress);
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label17->ForeColor = System::Drawing::SystemColors::Desktop;
            this->label17->Location = System::Drawing::Point(16, 23);
            this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(203, 18);
            this->label17->TabIndex = 9;
            this->label17->Text = L"Количество строк массива:";
            // 
            // txtMax2
            // 
            this->txtMax2->Location = System::Drawing::Point(290, 172);
            this->txtMax2->Margin = System::Windows::Forms::Padding(4);
            this->txtMax2->Name = L"txtMax2";
            this->txtMax2->Size = System::Drawing::Size(193, 26);
            this->txtMax2->TabIndex = 8;
            this->txtMax2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txtMax2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtMax2_KeyPress);
            // 
            // txtMin2
            // 
            this->txtMin2->Location = System::Drawing::Point(290, 124);
            this->txtMin2->Margin = System::Windows::Forms::Padding(4);
            this->txtMin2->Name = L"txtMin2";
            this->txtMin2->Size = System::Drawing::Size(193, 26);
            this->txtMin2->TabIndex = 7;
            this->txtMin2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txtMin2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtMin2_KeyPress);
            // 
            // txtY2
            // 
            this->txtY2->Location = System::Drawing::Point(290, 72);
            this->txtY2->Margin = System::Windows::Forms::Padding(4);
            this->txtY2->Name = L"txtY2";
            this->txtY2->Size = System::Drawing::Size(193, 26);
            this->txtY2->TabIndex = 6;
            this->txtY2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txtY2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtY2_KeyPress);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label14->ForeColor = System::Drawing::SystemColors::Desktop;
            this->label14->Location = System::Drawing::Point(16, 76);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(230, 18);
            this->label14->TabIndex = 3;
            this->label14->Text = L"Количество столбцов массива:";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label15->ForeColor = System::Drawing::SystemColors::Desktop;
            this->label15->Location = System::Drawing::Point(16, 128);
            this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(256, 18);
            this->label15->TabIndex = 4;
            this->label15->Text = L"Минимальное значение диапазона:";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->label16->ForeColor = System::Drawing::SystemColors::Desktop;
            this->label16->Location = System::Drawing::Point(16, 176);
            this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(264, 18);
            this->label16->TabIndex = 5;
            this->label16->Text = L"Максимальное значение диапазона:";
            // 
            // TextBoxFile2
            // 
            this->TextBoxFile2->Enabled = false;
            this->TextBoxFile2->Location = System::Drawing::Point(515, 126);
            this->TextBoxFile2->Margin = System::Windows::Forms::Padding(4);
            this->TextBoxFile2->Name = L"TextBoxFile2";
            this->TextBoxFile2->Size = System::Drawing::Size(223, 22);
            this->TextBoxFile2->TabIndex = 65;
            // 
            // btnFile2
            // 
            this->btnFile2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnFile2->Location = System::Drawing::Point(515, 158);
            this->btnFile2->Margin = System::Windows::Forms::Padding(4);
            this->btnFile2->Name = L"btnFile2";
            this->btnFile2->Size = System::Drawing::Size(224, 32);
            this->btnFile2->TabIndex = 64;
            this->btnFile2->Text = L"Открыть";
            this->btnFile2->UseVisualStyleBackColor = true;
            this->btnFile2->Click += gcnew System::EventHandler(this, &MyForm::btnFile2_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(95, 3);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(677, 75);
            this->label9->TabIndex = 62;
            this->label9->Text = L"Дана прямоугольная матрица. Найти строку с наибольшей и \r\nнаименьшей суммой элеме"
                L"нтов. Вывести на печать найденные \r\nстроки и суммы их элементов.";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->label23);
            this->tabPage3->Controls->Add(this->label22);
            this->tabPage3->Controls->Add(this->label20);
            this->tabPage3->Controls->Add(this->txtFileOut3);
            this->tabPage3->Controls->Add(this->btnSave3);
            this->tabPage3->Controls->Add(this->label21);
            this->tabPage3->Controls->Add(this->txtFile3);
            this->tabPage3->Controls->Add(this->btnFile3);
            this->tabPage3->Controls->Add(this->btnSol3);
            this->tabPage3->Controls->Add(this->txtOut3);
            this->tabPage3->Controls->Add(this->txtIn3);
            this->tabPage3->Controls->Add(this->label19);
            this->tabPage3->Location = System::Drawing::Point(4, 25);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(974, 824);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"Задание3";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(47, 162);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(72, 16);
            this->label23->TabIndex = 82;
            this->label23->Text = L"Реультат:";
            this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(47, 109);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(108, 16);
            this->label22->TabIndex = 81;
            this->label22->Text = L"Введите число:";
            // 
            // label20
            // 
            this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(729, 230);
            this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(154, 16);
            this->label20->TabIndex = 80;
            this->label20->Text = L"Имя выходного файла:";
            // 
            // txtFileOut3
            // 
            this->txtFileOut3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->txtFileOut3->Enabled = false;
            this->txtFileOut3->Location = System::Drawing::Point(731, 250);
            this->txtFileOut3->Margin = System::Windows::Forms::Padding(4);
            this->txtFileOut3->Name = L"txtFileOut3";
            this->txtFileOut3->Size = System::Drawing::Size(219, 22);
            this->txtFileOut3->TabIndex = 79;
            // 
            // btnSave3
            // 
            this->btnSave3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btnSave3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnSave3->Location = System::Drawing::Point(732, 280);
            this->btnSave3->Margin = System::Windows::Forms::Padding(4);
            this->btnSave3->Name = L"btnSave3";
            this->btnSave3->Size = System::Drawing::Size(220, 28);
            this->btnSave3->TabIndex = 78;
            this->btnSave3->Text = L"Сохранить";
            this->btnSave3->UseVisualStyleBackColor = true;
            this->btnSave3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label21
            // 
            this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(729, 106);
            this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(145, 16);
            this->label21->TabIndex = 77;
            this->label21->Text = L"Имя входного файла:";
            // 
            // txtFile3
            // 
            this->txtFile3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->txtFile3->Enabled = false;
            this->txtFile3->Location = System::Drawing::Point(729, 126);
            this->txtFile3->Margin = System::Windows::Forms::Padding(4);
            this->txtFile3->Name = L"txtFile3";
            this->txtFile3->Size = System::Drawing::Size(223, 22);
            this->txtFile3->TabIndex = 76;
            // 
            // btnFile3
            // 
            this->btnFile3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btnFile3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnFile3->Location = System::Drawing::Point(729, 158);
            this->btnFile3->Margin = System::Windows::Forms::Padding(4);
            this->btnFile3->Name = L"btnFile3";
            this->btnFile3->Size = System::Drawing::Size(224, 32);
            this->btnFile3->TabIndex = 75;
            this->btnFile3->Text = L"Открыть";
            this->btnFile3->UseVisualStyleBackColor = true;
            this->btnFile3->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // btnSol3
            // 
            this->btnSol3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btnSol3->Location = System::Drawing::Point(733, 193);
            this->btnSol3->Name = L"btnSol3";
            this->btnSol3->Size = System::Drawing::Size(220, 34);
            this->btnSol3->TabIndex = 3;
            this->btnSol3->Text = L"Выполнить";
            this->btnSol3->UseVisualStyleBackColor = true;
            this->btnSol3->Click += gcnew System::EventHandler(this, &MyForm::btnSol3_Click);
            // 
            // txtOut3
            // 
            this->txtOut3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtOut3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtOut3->Location = System::Drawing::Point(41, 181);
            this->txtOut3->Name = L"txtOut3";
            this->txtOut3->Size = System::Drawing::Size(681, 635);
            this->txtOut3->TabIndex = 2;
            this->txtOut3->Text = L"";
            this->txtOut3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtOut3_KeyPress);
            // 
            // txtIn3
            // 
            this->txtIn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtIn3->Location = System::Drawing::Point(41, 126);
            this->txtIn3->Name = L"txtIn3";
            this->txtIn3->Size = System::Drawing::Size(324, 27);
            this->txtIn3->TabIndex = 1;
            this->txtIn3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtIn3_KeyPress);
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->Location = System::Drawing::Point(36, 27);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(674, 50);
            this->label19->TabIndex = 0;
            this->label19->Text = L"Составить программу разложения данного натурального числа \r\nна простые множители."
                L" Например, 200 = 2^3 * 5^2";
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->txtIn4);
            this->tabPage4->Controls->Add(this->label25);
            this->tabPage4->Controls->Add(this->label26);
            this->tabPage4->Controls->Add(this->label27);
            this->tabPage4->Controls->Add(this->txtFileOut4);
            this->tabPage4->Controls->Add(this->btnSave4);
            this->tabPage4->Controls->Add(this->label28);
            this->tabPage4->Controls->Add(this->txtFile4);
            this->tabPage4->Controls->Add(this->btnFile4);
            this->tabPage4->Controls->Add(this->btnSol4);
            this->tabPage4->Controls->Add(this->txtOut4);
            this->tabPage4->Controls->Add(this->label24);
            this->tabPage4->Location = System::Drawing::Point(4, 25);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(974, 824);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"Задание4";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // txtIn4
            // 
            this->txtIn4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtIn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtIn4->Location = System::Drawing::Point(31, 97);
            this->txtIn4->Name = L"txtIn4";
            this->txtIn4->Size = System::Drawing::Size(681, 312);
            this->txtIn4->TabIndex = 94;
            this->txtIn4->Text = L"";
            this->txtIn4->TextChanged += gcnew System::EventHandler(this, &MyForm::txtIn4_TextChanged);
            this->txtIn4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtIn4_KeyPress);
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(37, 426);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(72, 16);
            this->label25->TabIndex = 93;
            this->label25->Text = L"Реультат:";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Location = System::Drawing::Point(37, 78);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(114, 16);
            this->label26->TabIndex = 92;
            this->label26->Text = L"Введите строку:";
            this->label26->Click += gcnew System::EventHandler(this, &MyForm::label26_Click);
            // 
            // label27
            // 
            this->label27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->label27->AutoSize = true;
            this->label27->Location = System::Drawing::Point(719, 199);
            this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(154, 16);
            this->label27->TabIndex = 91;
            this->label27->Text = L"Имя выходного файла:";
            // 
            // txtFileOut4
            // 
            this->txtFileOut4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->txtFileOut4->Enabled = false;
            this->txtFileOut4->Location = System::Drawing::Point(721, 219);
            this->txtFileOut4->Margin = System::Windows::Forms::Padding(4);
            this->txtFileOut4->Name = L"txtFileOut4";
            this->txtFileOut4->Size = System::Drawing::Size(219, 22);
            this->txtFileOut4->TabIndex = 90;
            // 
            // btnSave4
            // 
            this->btnSave4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btnSave4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnSave4->Location = System::Drawing::Point(722, 249);
            this->btnSave4->Margin = System::Windows::Forms::Padding(4);
            this->btnSave4->Name = L"btnSave4";
            this->btnSave4->Size = System::Drawing::Size(220, 28);
            this->btnSave4->TabIndex = 89;
            this->btnSave4->Text = L"Сохранить";
            this->btnSave4->UseVisualStyleBackColor = true;
            this->btnSave4->Click += gcnew System::EventHandler(this, &MyForm::btnSave4_Click);
            // 
            // label28
            // 
            this->label28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->label28->AutoSize = true;
            this->label28->Location = System::Drawing::Point(719, 75);
            this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(145, 16);
            this->label28->TabIndex = 88;
            this->label28->Text = L"Имя входного файла:";
            // 
            // txtFile4
            // 
            this->txtFile4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->txtFile4->Enabled = false;
            this->txtFile4->Location = System::Drawing::Point(719, 95);
            this->txtFile4->Margin = System::Windows::Forms::Padding(4);
            this->txtFile4->Name = L"txtFile4";
            this->txtFile4->Size = System::Drawing::Size(223, 22);
            this->txtFile4->TabIndex = 87;
            // 
            // btnFile4
            // 
            this->btnFile4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btnFile4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
            this->btnFile4->Location = System::Drawing::Point(719, 127);
            this->btnFile4->Margin = System::Windows::Forms::Padding(4);
            this->btnFile4->Name = L"btnFile4";
            this->btnFile4->Size = System::Drawing::Size(224, 32);
            this->btnFile4->TabIndex = 86;
            this->btnFile4->Text = L"Открыть";
            this->btnFile4->UseVisualStyleBackColor = true;
            this->btnFile4->Click += gcnew System::EventHandler(this, &MyForm::btnFile4_Click);
            // 
            // btnSol4
            // 
            this->btnSol4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btnSol4->Location = System::Drawing::Point(723, 162);
            this->btnSol4->Name = L"btnSol4";
            this->btnSol4->Size = System::Drawing::Size(220, 34);
            this->btnSol4->TabIndex = 85;
            this->btnSol4->Text = L"Выполнить";
            this->btnSol4->UseVisualStyleBackColor = true;
            this->btnSol4->Click += gcnew System::EventHandler(this, &MyForm::btnSol4_Click);
            // 
            // txtOut4
            // 
            this->txtOut4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->txtOut4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtOut4->Location = System::Drawing::Point(31, 445);
            this->txtOut4->Name = L"txtOut4";
            this->txtOut4->Size = System::Drawing::Size(681, 371);
            this->txtOut4->TabIndex = 84;
            this->txtOut4->Text = L"";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label24->Location = System::Drawing::Point(27, 24);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(714, 40);
            this->label24->TabIndex = 0;
            this->label24->Text = L"Дана строка символов. Проверить является ли эта строка синтаксически \r\nправильной"
                L" записью арифметического выражения. ";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = true;
            this->ClientSize = System::Drawing::Size(982, 853);
            this->Controls->Add(this->tabControl1);
            this->MinimumSize = System::Drawing::Size(1000, 600);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
            this->Text = L"Индивидуальные задания";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
String^ FilePath1 = "";
String^ SaveFilePath1 = "";
String^ FilePath2 = "";
String^ SaveFilePath2 = "";
String^ FilePath3 = "";
String^ SaveFilePath3 = "";
String^ FilePath4 = "";
String^ SaveFilePath4 = "";
String^ hist1 = "abc";
String^ hist2;
String^ hist3;
String^ hist4;
Task1::Task1 task1;
Task2::Task2 task2;
Task3::Task3 task3;
Task4::Task4 task4;
Ref0::MyClass f;
bool flagfail1 = false;
bool flagfile1 = false;
bool flagfail2 = false;
bool flagfile2 = false;
bool flagfile3 = false;
bool flagfail3 = false;
bool flagfail4 = false;
bool flagfile4 = false;


    //приведение матрицы в прямоугольный вид
private: void Rectangling(Windows::Forms::RichTextBox^ txt) {
    String^ text = txt->Text;
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
            if (curr != "" && curr != nullptr) {
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
    for (int i = 0; i < arr.Count; i++) {
        if (arr[i]->Split(' ')->Length > len) len = arr[i]->Split(' ')->Length;
    }
    for each (String ^ str in arr) {
        Collections::Generic::List<String^> row;
        for each (String ^ s in str->Split(' ')) {
            txt->Text += txt->Text->Format("{0,8}", s);
            row.Add(s);
        }
        while (len > row.Count)
        {
            txt->Text += txt->Text->Format("{0,8}", 0);
            row.Add("0");
        }
        txt->Text += "\r\n";
    }

}

//For opening files
String^ Opening(String^ filePath, Windows::Forms::TextBox^ txtFilePath) {
    String^ str = "";
    OpenFileDialog^ opFileD = gcnew OpenFileDialog;
    opFileD->Title = "Открытие файла со списком маршрутов";
    opFileD->InitialDirectory = "d:\\";
    opFileD->Filter = "Текстовые файлы (*.txt)|*.txt";
    opFileD->ShowReadOnly = false;
    opFileD->RestoreDirectory = true;
    if (opFileD->ShowDialog() == Windows::Forms::DialogResult::OK)
    {
        filePath = opFileD->FileName;
        txtFilePath->Text = filePath;
        try {
            str = IO::File::ReadAllText(opFileD->FileName);

        }
        catch (IO::FileNotFoundException^ error) {
            MessageBox::Show("Ошибка", error->Message + "\nНет такого файла, Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        }
    }
    else
        filePath = "";
    if (str != "") return str;
}
//for saving files
void Saving(String^& filePath, String^ txtInText, String^ txtOutText, Windows::Forms::TextBox^ txtFilePath,
    bool& flagfile, bool& flagfail, String^ message, String^& hist) {
    SaveFileDialog^ sfd = gcnew SaveFileDialog();
    sfd->Title = "Сохранить файл";
    sfd->Filter = "Текстовые файлы (*.txt)|*.txt";
    sfd->RestoreDirectory = true;
    sfd->OverwritePrompt = false;
    sfd->ShowDialog();
    if (sfd->FileName != "") {
        StreamWriter^ sw = gcnew StreamWriter(sfd->FileName, true);
        filePath = sfd->FileName;
        txtFilePath->Text = filePath;
        if (flagfail && (hist != txtOutText)) {
            if (flagfile) {
                sw->WriteLine(message);
                sw->WriteLine(txtInText);
                flagfile = false;
            }
            sw->WriteLine(txtOutText);
            hist = txtOutText;
            flagfail = false;
        }
        sw->Close();
    }
}

String^ format3(String^ str) {
    String^ str2 = "";
    int flag = 0;
    for (int i = 0; i < str->Length - 1; i++) {

        if (!Char::IsNumber(str[i]) && str2->Length != 0) {
            return str2;
        }
        if (!Char::IsNumber(str[i]) && Char::IsNumber(str[i + 1]) && str2->Length == 0) {
            str2 = str2;
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

private: System::Void btnGen_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfile1 = true;
    task1.Gen1(flagfail1, flagfile1, txtCount, txtIn, txtEndMas, txtMin, txtMax);
}

private: System::Void btn_File_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfile1 = true;
    txtIn->Text = f.formatString(Opening(FilePath1, txtBoxFile));
    txtEndMas->Text = "";
}

private: System::Void btnSol_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfail1 = true;
    task1.Sol1(flagfail1, flagfile1, txtIn, txtEndMas);
}
private: System::Void btnGen2_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfile2 = true;
    task2.Gen2(txtSums, txtX2, txtY2, txtIn2, txtMin2, txtMax2, txtOut2);
}
private: System::Void btnSol2_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfail2 = true;
    task2.Sol2(txtSums, txtOut2, txtIn2);
}
private: System::Void btnFile2_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfile2 = true;
    /*fFileOPD(FileName, TextBoxFile2, txtIn2, 1);*/
    txtIn2->Text = Opening(FilePath2, TextBoxFile2);
    txtOut2->Text = "";
    Rectangling(txtIn2);
}
private: System::Void btnSave2_Click(System::Object^ sender, System::EventArgs^ e) {
    //fFileIN(SaveFilePath2, textBoxFileOut2, txtOut2, txtIn2, flagfile2, flagfail2, "Исходный массив:");
    bool flag = flagfile2;
    bool flag2 = flagfail2;
    String^ s = SaveFilePath2;
    String^ hs = hist2;
    Saving(s, txtIn2->Text, txtOut2->Text, textBoxFileOut2, flag, flag2, L"Исходный массив:", hs);
    flagfail2 = flag2;
    flagfile2 = flag;
    SaveFilePath2 = s;
    hist2 = hs;
    //Saving(SaveFilePath2, txtIn2->Text, txtOut2->Text, textBoxFileOut2, flagfile2, flagfail2, "Исходный массив:", hist2);
}
private: System::Void txtX2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtX2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    char key = e->KeyChar;
    if (!Char::IsDigit(e->KeyChar) && key != 8) {
        e->Handled = true;
    }
}
private: System::Void txtY2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    char key = e->KeyChar;
    if (!Char::IsDigit(e->KeyChar) && key != 8) {
        e->Handled = true;
    }
}
private: System::Void txtMin2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    txtOut2->Text = "";
    f.keypressMinMax(e, txtMin2);
}
private: System::Void txtMax2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    txtOut2->Text = "";
    f.keypressMinMax(e, txtMax2);
}
private: System::Void btnClose2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void txtIn2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    txtY2->Text = "";
    txtX2->Text = "";
    txtMin2->Text = "";
    txtMax2->Text = "";

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtIn2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtSums_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
        //меняет размеры окна при изменении вкладки с заданием
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    switch (tabControl1->SelectedIndex) {
    case 0:
        this->MaximizeBox = false;
        this->MinimizeBox = false;
        this->Width = 500;
        this->Height = 690;
        break;
    case 1:
        this->MaximizeBox = true;
        this->MinimizeBox = true;
        this->Width = 1900;
        this->Height = 820;
        break;
    case 2:
        this->MaximizeBox = false;
        this->MinimizeBox = false;
        this->Width = 500;
        this->Height = 100;
        break;
    case 3:
        this->MaximizeBox = true;
        this->MinimizeBox = true;
        this->Width = 100;
        this->Height = 820;
        break;
    }

}
private: System::Void btnSol3_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfail3 = true;
    task3.Sol3(txtOut3, txtIn3);
}
private: System::Void txtMin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    txtEndMas->Text = "";
    f.keypressMinMax(e, txtMin);
}
private: System::Void txtMax_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    txtEndMas->Text = "";
    f.keypressMinMax(e, txtMax);
}
private: System::Void txtCount_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    char key = e->KeyChar;
    if (!Char::IsDigit(e->KeyChar) && key != 8) {
        e->Handled = true;
    }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void btnSaveFile_Click(System::Object^ sender, System::EventArgs^ e) {
    //fFileIN(SaveFilePath1, txtOutFile, EndMas, txtIn, flagfile1, flagfail1, "Исходный массив:");
    bool flag = flagfile1;
    bool flag2 = flagfail1;
    String^ s = SaveFilePath1;
    String^ hs = hist1;
    Saving(s, txtIn->Text, txtEndMas->Text, txtOutFile, flag, flag2, Convert::ToString(L"Исходный массив:"), hs);
    flagfail1 = flag2;
    flagfile1 = flag;
    SaveFilePath1 = s;
    hist1 = hs;
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtIn3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    flagfile3 = true;
    char key = e->KeyChar;
    if (!Char::IsDigit(e->KeyChar) && key != 8) {
        e->Handled = true;
    }
}
private: System::Void txtOut3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    flagfail3 = true;
    txtIn3->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfile3 = true;
    //fFileOP3(FilePath3, textBox3);
    txtIn3->Text = format3(Opening(FilePath3, txtFile3));
    txtOut3->Text = "";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    //fFileIN3(SaveFilePath3, txtFileOut3, txtOut3, txtIn3, flagfile3, flagfail3, L"Простые множители данного числа:");
    bool flag = flagfile3;
    bool flag2 = flagfail3;
    String^ s = SaveFilePath3;
    String^ hs = hist3;
    Saving(s, txtIn3->Text, txtOut3->Text, txtFileOut3, flag, flag2, L"Простые множители данного числа:", hs);
    flagfail3 = flag2;
    flagfile3 = flag;
    SaveFilePath3 = s;
    hist3 = hs;
    //Saving(SaveFilePath3, txtIn3->Text, txtOut3->Text, txtFileOut3, flagfile3, flagfail3, L"Простые множители данного числа:", hist3);
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSol4_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfail4 = true;
    task4.Sol4(txtOut4, txtIn4);
}
private: System::Void txtIn4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    flagfile4 = true;
    txtOut4->Text = "";
    char key = e->KeyChar;
    if (!Char::IsDigit(e->KeyChar) && key != 8 && (key < 40 || key>57) && (key < 65 || key>90) && (key < 97 || key>122)) {
        e->Handled = true;
    }

}
private: System::Void btnFile4_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfile4 = true;
    //fFileOP4(FilePath4, txtFile4);
    txtIn4->Text = format4(Opening(FilePath4, txtFile4));
    txtOut4->Text = "";
}
private: String^ format4(String^ str) {
    String^ str2;
    int flag = 0;
    for (int i = 0; i < str->Length; i++) {
        char key = str[i];
        if (((key >= 40 && key <= 57) || (key >= 65 && key <= 90) || (key >= 97 && key <= 122))) {
            str2 += str[i];
        }
    }

    return str2;
}
private: System::Void btnSave4_Click(System::Object^ sender, System::EventArgs^ e) {
    //fFileIN4(SaveFilePath4, txtFileOut4, txtOut4, txtIn4, flagfile4, flagfail4, "");
    bool flag = flagfile4;
    bool flag2 = flagfail4;
    String^ s = SaveFilePath4;
    String^ hs = hist4;
    if (hist4 == txtIn4->Text) {
        hs = txtOut4->Text;
    }
    Saving(s, txtIn4->Text, txtOut4->Text, txtFileOut4, flag, flag2, L"Исходное выражение:", hs);
    if (txtOut4->Text != "") hist4 = txtIn4->Text;
    flagfail4 = flag2;
    flagfile4 = flag;
    SaveFilePath4 = s;
    //Saving(FilePath4, txtIn4->Text, txtOut4->Text, txtFileOut4, flagfile4, flagfail4, "Исходное выражение:", "записывать всегда");
}
private: System::Void txtIn4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    flagfile4 = true;
}
    };
}
