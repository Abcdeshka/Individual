#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "Task1.h"
#include "Task2.h"
#include "Task0.h"
#include "Task3.h"


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
	private: System::Windows::Forms::TextBox^ textBox1;
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




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
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
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
            this->btnSol3 = (gcnew System::Windows::Forms::Button());
            this->txtOut3 = (gcnew System::Windows::Forms::RichTextBox());
            this->txtIn3 = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->txtIn = (gcnew System::Windows::Forms::RichTextBox());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->groupBox1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->tabPage3->SuspendLayout();
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
            this->tabPage1->Controls->Add(this->textBox1);
            this->tabPage1->Controls->Add(this->btn_File);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(974, 824);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Задание1";
            this->tabPage1->UseVisualStyleBackColor = true;
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
            // textBox1
            // 
            this->textBox1->Enabled = false;
            this->textBox1->Location = System::Drawing::Point(689, 157);
            this->textBox1->Margin = System::Windows::Forms::Padding(4);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(223, 22);
            this->textBox1->TabIndex = 51;
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
            this->txtSums->Location = System::Drawing::Point(851, 364);
            this->txtSums->Name = L"txtSums";
            this->txtSums->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
            this->txtSums->Size = System::Drawing::Size(97, 425);
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
            this->txtIn2->Size = System::Drawing::Size(836, 428);
            this->txtIn2->TabIndex = 79;
            this->txtIn2->Text = L"";
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
            this->txtOut2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
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
            // btnSol3
            // 
            this->btnSol3->Location = System::Drawing::Point(52, 197);
            this->btnSol3->Name = L"btnSol3";
            this->btnSol3->Size = System::Drawing::Size(107, 23);
            this->btnSol3->TabIndex = 3;
            this->btnSol3->Text = L"Выполнить";
            this->btnSol3->UseVisualStyleBackColor = true;
            this->btnSol3->Click += gcnew System::EventHandler(this, &MyForm::btnSol3_Click);
            // 
            // txtOut3
            // 
            this->txtOut3->Location = System::Drawing::Point(353, 128);
            this->txtOut3->Name = L"txtOut3";
            this->txtOut3->Size = System::Drawing::Size(570, 359);
            this->txtOut3->TabIndex = 2;
            this->txtOut3->Text = L"";
            // 
            // txtIn3
            // 
            this->txtIn3->Location = System::Drawing::Point(51, 128);
            this->txtIn3->Name = L"txtIn3";
            this->txtIn3->Size = System::Drawing::Size(267, 22);
            this->txtIn3->TabIndex = 1;
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
            this->tabPage4->Location = System::Drawing::Point(4, 25);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(974, 824);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"Задание4";
            this->tabPage4->UseVisualStyleBackColor = true;
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
            this->Text = L"Обработка массива";
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
            this->ResumeLayout(false);

        }
#pragma endregion
        String^ FileName = "";
        System::Boolean flag;
		String^ FilePath1 = "";
		String^ SaveFilePath1 = "";
        String^ FilePath2 = "";
		String^ SaveFilePath2 = "";
		bool OutChanged = false;
		bool InChanged = false;
		int button;
		String^ hist;
		Task1::Task1 task1;
		Task2::Task2 task2;
		Task3::Task3 task3;
        Ref0::MyClass f;
        String^ res1 = "";
        bool flagfail1 = false;
        bool flagfile1 = false;
        bool flagfail2 = false;
        bool flagfile2 = false;


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
        //открытие файла 1 задания
        void fFileOP(String^ text, Windows::Forms::TextBox^ txt) {
            OpenFileDialog^ opFileD = gcnew OpenFileDialog;
            opFileD->Title = "Открытие файла со списком маршрутов";
            opFileD->InitialDirectory = "d:\\";
            opFileD->Filter = "Текстовые файлы (*.txt)|*.txt";
            opFileD->ShowReadOnly = false;
            opFileD->RestoreDirectory = true;

            if (opFileD->ShowDialog() == Windows::Forms::DialogResult::OK)
            {
                text = opFileD->FileName;
                txt->Text = text;
                try {
                    String^ str = IO::File::ReadAllText(opFileD->FileName);
                    txtIn->Text = f.formatString(str);
                    txtEndMas->Text = "";
                }
                catch (IO::FileNotFoundException^ error) {
                    MessageBox::Show("Ошибка", error->Message + "\nНет такого файла, Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                }
            }
            else
                text = "";
        }

        //открытие файла для 2 задания
        private: void fFileOPD(String^ text, Windows::Forms::TextBox^ txt, Windows::Forms::RichTextBox^ txtar, bool i) {
            OpenFileDialog^ opFileD = gcnew OpenFileDialog;
            opFileD->Title = "Открытие файла со списком маршрутов";
            opFileD->InitialDirectory = "d:\\";
            opFileD->Filter = "Текстовые файлы (*.txt)|*.txt";
            opFileD->ShowReadOnly = false;
            opFileD->RestoreDirectory = true;
            opFileD->ShowDialog();
            text = opFileD->FileName;
            txt->Text = text;
            if (text != "") {
                try {
                    String^ str = IO::File::ReadAllText(text);
                    txtar->Text = str;
                    Rectangling(txtar);
                }
                catch (IO::FileNotFoundException^ error) {
                    MessageBox::Show("Ошибка", error->Message + "\nНет такого файла, Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                }
            }
        }
        //сохранение файла
        void fFileIN(String^ SaveFilePath, Windows::Forms::TextBox^ textBox, Windows::Forms::TextBox^ txtOut,
            Windows::Forms::RichTextBox^ txtIn, bool flagfile, bool flagfail ) {
            SaveFileDialog^ sfd = gcnew SaveFileDialog();
            sfd->Title = "Сохранить файл";
            sfd->Filter = "Текстовые файлы (*.txt)|*.txt";
            if (SaveFilePath != "") {
                array<String^>^ arrpath = SaveFilePath->Replace('\\', ' ')->Split();
                sfd->FileName = arrpath[arrpath->Length - 1];
            }
            sfd->RestoreDirectory = true;
            sfd->OverwritePrompt = false;
            sfd->ShowDialog();
            if (sfd->FileName != "") {
                StreamWriter^ sw = gcnew StreamWriter(sfd->FileName, true);
                SaveFilePath = sfd->FileName;
                textBox->Text = SaveFilePath;
                if (flagfail && (hist != txtOut->Text)) {
                    if (flagfile) {
                        sw->WriteLine("Исходный массив: ");
                        sw->WriteLine(txtIn->Text);
                        flagfile = false;
                    }
                    sw->WriteLine(txtOut->Text);
                    hist = txtOut->Text;
                    flagfail = false;
                }
                sw->Close();
            }
        }
    //для минимальной и максимальный границ массива
    void keypressMinMax(System::Windows::Forms::KeyPressEventArgs^ e, System::Windows::Forms::TextBox^ txt) {
        txtEndMas->Text = "";
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
	private: System::Void btnGen_Click(System::Object^ sender, System::EventArgs^ e) {
		task1.Gen1(OutChanged,InChanged,txtCount,txtIn,txtEndMas,txtMin,txtMax);
	}

	private: System::Void btn_File_Click(System::Object^ sender, System::EventArgs^ e) {
        fFileOP(FilePath1, textBox1);
	}

	private: System::Void btnSol_Click(System::Object^ sender, System::EventArgs^ e) {
		task1.Sol1(OutChanged, InChanged, txtIn, txtEndMas);
	}
	private: System::Void btnGen2_Click(System::Object^ sender, System::EventArgs^ e) {
        flagfile2 = true;
		task2.Gen2(txtSums, txtX2, txtY2, txtIn2, txtMin2, txtMax2,txtOut2);
	}
private: System::Void btnSol2_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfail2 = true;
    task2.Sol2(txtSums, txtOut2, txtIn2);
}
private: System::Void btnFile2_Click(System::Object^ sender, System::EventArgs^ e) {
    flagfile2 = true;
    fFileOPD(FileName, TextBoxFile2, txtIn2, 1);
}
private: System::Void btnSave2_Click(System::Object^ sender, System::EventArgs^ e) {
    /*Save2(SaveFilePath, txtIn2, textBoxFileOut2, 0, txtOut2);*/
    fFileIN(SaveFilePath2,textBoxFileOut2,txtOut2,txtIn2, flagfile2,flagfail2);
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
    keypressMinMax(e, txtMin2);
}
private: System::Void txtMax2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    keypressMinMax(e, txtMax2);
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
    std::cout << tabControl1->SelectedIndex;
    int i = 0;
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
        this->Height = 1000;
        break;
    case 2:
        this->MaximizeBox = false;
        this->MinimizeBox = false;
        this->Width = 500;
        this->Height = 100;
        break;
    case 3:
        this->Width = 100;
        this->Height = 100;
        break;
    }

}
private: System::Void btnSol3_Click(System::Object^ sender, System::EventArgs^ e) {
    task3.Sol3(txtOut3, txtIn3);
}
private: System::Void txtMin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    keypressMinMax(e, txtMin);
}
private: System::Void txtMax_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    keypressMinMax(e, txtMax);
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
    fFileIN(SaveFilePath1, txtOutFile, txtEndMas, txtIn, flagfile1, flagfail1);
}
};
}
