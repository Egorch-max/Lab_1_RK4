#pragma once
#include <math.h>
#include <algorithm>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i; // Итерация
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X; // X
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1; // vn
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_11; // v'n
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_12; // vroof
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_121; // v'roof
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1_minus_F_12; // vn-vroof
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_11_minus_F_121; // v'n-v'roof
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OLP; // ОЛП vn
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OLP1; // ОЛП v'n
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi; // Шаг vn
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1; // Кол-во удвоений vn
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2; // Кол-во делений vn
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2; // Истинная траектория
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ absF_2_minus_F_1; // Ошибка
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::CheckBox^ checkBox3;




	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_121 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1_minus_F_12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_11_minus_F_121 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->absF_2_minus_F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(12, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(692, 369);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(936, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
				this->i, this->X,
					this->F_1, this->F_11, this->F_12, this->F_121, this->F_1_minus_F_12, this->F_11_minus_F_121, this->OLP, this->OLP1, this->hi,
					this->C1, this->C2, this->F_2, this->absF_2_minus_F_1
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 384);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(692, 383);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Width = 50;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 75;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"vi";
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 135;
			// 
			// F_11
			// 
			this->F_11->HeaderText = L"v\'i";
			this->F_11->Name = L"F_11";
			this->F_11->ReadOnly = true;
			this->F_11->Width = 135;
			// 
			// F_12
			// 
			this->F_12->HeaderText = L"v2i";
			this->F_12->Name = L"F_12";
			this->F_12->ReadOnly = true;
			this->F_12->Width = 135;
			// 
			// F_121
			// 
			this->F_121->HeaderText = L"v\'2i";
			this->F_121->Name = L"F_121";
			this->F_121->ReadOnly = true;
			this->F_121->Width = 135;
			// 
			// F_1_minus_F_12
			// 
			this->F_1_minus_F_12->HeaderText = L"vi-v2i";
			this->F_1_minus_F_12->Name = L"F_1_minus_F_12";
			this->F_1_minus_F_12->ReadOnly = true;
			this->F_1_minus_F_12->Width = 135;
			// 
			// F_11_minus_F_121
			// 
			this->F_11_minus_F_121->HeaderText = L"v\'i-v\'2i";
			this->F_11_minus_F_121->Name = L"F_11_minus_F_121";
			this->F_11_minus_F_121->ReadOnly = true;
			this->F_11_minus_F_121->Width = 135;
			// 
			// OLP
			// 
			this->OLP->HeaderText = L"ОЛП";
			this->OLP->Name = L"OLP";
			this->OLP->ReadOnly = true;
			this->OLP->Width = 135;
			// 
			// OLP1
			// 
			this->OLP1->HeaderText = L"ОЛП\'";
			this->OLP1->Name = L"OLP1";
			this->OLP1->ReadOnly = true;
			this->OLP1->Width = 135;
			// 
			// hi
			// 
			this->hi->HeaderText = L"hi";
			this->hi->Name = L"hi";
			this->hi->ReadOnly = true;
			this->hi->Width = 75;
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			this->C1->ReadOnly = true;
			this->C1->Width = 50;
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			this->C2->ReadOnly = true;
			this->C2->Width = 50;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"ui";
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 135;
			// 
			// absF_2_minus_F_1
			// 
			this->absF_2_minus_F_1->HeaderText = L"abs(ui-vi)";
			this->absF_2_minus_F_1->Name = L"absF_2_minus_F_1";
			this->absF_2_minus_F_1->ReadOnly = true;
			this->absF_2_minus_F_1->Width = 135;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(766, 422);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Xmin";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(804, 419);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(765, 444);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Xmax";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(802, 444);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(51, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(914, 355);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Начальный шаг";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1037, 355);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,001";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(768, 374);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"u0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(793, 371);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(29, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"1";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1015, 231);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Задача";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(765, 355);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Начальные условия";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1037, 386);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(112, 20);
			this->textBox8->TabIndex = 20;
			this->textBox8->Text = L"100000";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(902, 384);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Макс. число шагов";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(914, 444);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Контроль ЛП";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1037, 441);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(112, 20);
			this->textBox9->TabIndex = 23;
			this->textBox9->Text = L"0,01";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(1178, 406);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(128, 17);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Text = L"Контролировать ЛП";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(1178, 383);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(171, 17);
			this->checkBox2->TabIndex = 25;
			this->checkBox2->Text = L"Рисовать истинное решение";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тестовая", L"Основная 1", L"Основная 2" });
			this->comboBox1->Location = System::Drawing::Point(892, 247);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(291, 21);
			this->comboBox1->TabIndex = 26;
			this->comboBox1->Text = L"Тестовая";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->TextUpdate += gcnew System::EventHandler(this, &MyForm::comboBox1_TextUpdate);
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1037, 412);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 20);
			this->textBox4->TabIndex = 27;
			this->textBox4->Text = L"0,0001";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(879, 417);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Точность выхода на границу";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(766, 549);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Границы по Х от ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(911, 553);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"до";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(860, 546);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 31;
			this->textBox5->Text = L"1";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(936, 545);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(48, 20);
			this->textBox7->TabIndex = 32;
			this->textBox7->Text = L"5";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(999, 553);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 33);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Изменить масштаб графика";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(766, 575);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 13);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Границы по Y от ";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(911, 575);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 35;
			this->label13->Text = L"до";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(860, 572);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(48, 20);
			this->textBox10->TabIndex = 36;
			this->textBox10->Text = L"-1";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(936, 575);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(48, 20);
			this->textBox11->TabIndex = 37;
			this->textBox11->Text = L"5";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Location = System::Drawing::Point(722, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(627, 206);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 52);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 13);
			this->label26->TabIndex = 9;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 39);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 8;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 178);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 13);
			this->label21->TabIndex = 7;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 165);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 13);
			this->label20->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 117);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 104);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 4;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 91);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 13);
			this->label17->TabIndex = 3;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 78);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 2;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 65);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 0;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(766, 396);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(21, 13);
			this->label22->TabIndex = 39;
			this->label22->Text = L"u\'0";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(793, 392);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(28, 20);
			this->textBox12->TabIndex = 40;
			this->textBox12->Text = L"1";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(774, 473);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 41;
			this->label23->Text = L"a";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(802, 470);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(29, 20);
			this->textBox13->TabIndex = 42;
			this->textBox13->Text = L"1";
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(774, 496);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(13, 13);
			this->label24->TabIndex = 43;
			this->label24->Text = L"b";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(802, 496);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(27, 20);
			this->textBox14->TabIndex = 44;
			this->textBox14->Text = L"1";
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Location = System::Drawing::Point(1178, 429);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(118, 17);
			this->checkBox3->TabIndex = 45;
			this->checkBox3->Text = L"Фазовый портрет";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1361, 774);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"Lab1 RK45";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:

		double rhs1(double x, double u) {
			return u;

		}

		double rhs2(double x, double u) {
			double f = x / (1 + x * x);
			return f * u * u + u - u * u * u * sin(10.0 * x);
		}

		double rhs31(double x, double u, double y, double a, double b) {
			return y;  
		}

		double rhs32(double x, double u, double y, double a, double b) {
			return -(a * y + b * sin(u));  
		}

		double test1(double x, double h, double vn) {

			double k1 = rhs1(x, vn);
			double k2 = rhs1(x + h / 2.0, vn + h * k1 / 2.0);
			double k3 = rhs1(x + h / 2.0, vn + h * k2 / 2.0);
			double k4 = rhs1(x + h, vn + h * k3);

			double v = vn + h / 6.0 * (k1 + 2.0 * k2 + 2.0 * k3 + k4);

			return v;
		}

		double sol1(double x, double c1) {

			return c1 * exp(x);
		}

		double main1(double x, double h, double vn) {

			double k1 = rhs2(x, vn);
			double k2 = rhs2(x + h / 2.0, vn + h * k1 / 2.0);
			double k3 = rhs2(x + h / 2.0, vn + h * k2 / 2.0);
			double k4 = rhs2(x + h, vn + h * k3);

			double v = vn + h / 6.0 * (k1 + 2.0 * k2 + 2.0 * k3 + k4);


			return v;
		}

		void RK4_system(double x, double h, double u, double y, double a, double b,
			double& u_out, double& y_out) {
			double k1_u = rhs31(x, u, y, a, b);  // = y
			double k1_y = rhs32(x, u, y, a, b);  // = (a*sqrt(y*y+1)+b)

			double k2_u = rhs31(x + h / 2, u + (h / 2) * k1_u, y + (h / 2) * k1_y, a, b);
			double k2_y = rhs32(x + h / 2, u + (h / 2) * k1_u, y + (h / 2) * k1_y, a, b);

			double k3_u = rhs31(x + h / 2, u + (h / 2) * k2_u, y + (h / 2) * k2_y, a, b);
			double k3_y = rhs32(x + h / 2, u + (h / 2) * k2_u, y + (h / 2) * k2_y, a, b);

			double k4_u = rhs31(x + h, u + h * k3_u, y + h * k3_y, a, b);
			double k4_y = rhs32(x + h, u + h * k3_u, y + h * k3_y, a, b);

			u_out = u + h / 6 * (k1_u + 2 * k2_u + 2 * k3_u + k4_u);
			y_out = y + h / 6 * (k1_y + 2 * k2_y + 2 * k3_y + k4_y);
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		f1_list->Clear();
		f2_list->Clear();
		f3_list->Clear();
		dataGridView1->Rows->Clear();

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		// Инициализируем шаг
		double h = Convert::ToDouble(textBox3->Text);

		// Инициализируем Н.У.
		double u0 = Convert::ToDouble(textBox6->Text);
		double u01 = Convert::ToDouble(textBox12->Text);
		double cnst = u0;

		// Задаем границы
		double xmin_limit = xmin - h;
		double xmax_limit = xmax + h;
		double Nmax = Convert::ToDouble(textBox8->Text);
		double eps = Convert::ToDouble(textBox9->Text);
		double egr = Convert::ToDouble(textBox4->Text);
		double a = Convert::ToDouble(textBox13->Text);
		double b = Convert::ToDouble(textBox14->Text);

		int i = 0;
		double vn = u0, vn1 = u01;
		double vroof = vn, vroof1 = vn;
		double sol = u0;
		double xprev = 0.0;
		double x = 0.0;
		double s = 0.0;
		double s1 = 0.0, s2 = 0.0;
		bool accept1;
		int C1 = 0, C2 = 0;
		int countdoub = 0, countdiv = 0;
		double maxh = 0., minh = h;
		double maxerr = 0., xerr = 0., x2 = x + h, x3 = 0., maxolp = 0.;
		if (comboBox1->Text == "Тестовая")
		{
			dataGridView1->Columns[3]->Visible = false;
			dataGridView1->Columns[5]->Visible = false;
			dataGridView1->Columns[7]->Visible = false;
			dataGridView1->Columns[9]->Visible = false;
			dataGridView1->Columns[13]->Visible = true;
			dataGridView1->Columns[14]->Visible = true;

			// Начальная точка
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(vn * 1e16) / 1e16;
			dataGridView1->Rows[i]->Cells[4]->Value = floor(vn * 1e16) / 1e16;  // vroof = vn в начальной точке
			dataGridView1->Rows[i]->Cells[6]->Value = 0.0;  // Разность = 0
			dataGridView1->Rows[i]->Cells[8]->Value = 0.0;  // ОЛП = 0
			dataGridView1->Rows[i]->Cells[10]->Value = 0.0;  // Шаг = 0
			dataGridView1->Rows[i]->Cells[11]->Value = C1;
			dataGridView1->Rows[i]->Cells[12]->Value = C2;
			dataGridView1->Rows[i]->Cells[13]->Value = floor(sol * 1e16) / 1e16;
			dataGridView1->Rows[i]->Cells[14]->Value = 0.0;  // Ошибка = 0
			if (checkBox2->Checked == true)
				f2_list->Add(x, sol);
			f1_list->Add(x, vn);
			xprev = x;
			x = x + h;
			i++;  // Увеличиваем счетчик после начальной точки

			while (i < Nmax && x < xmax - egr && vn != INFINITY && (x - xprev) != 0)
			{
				accept1 = true;
				double halfRK = test1(xprev, h / 2., vn);
				vroof = test1(xprev + h / 2., h / 2., halfRK);
				s = (vroof - test1(xprev, h, vn)) / 15.0; 
				sol = sol1(x, cnst);
				if (checkBox1->Checked == true)
				{
					double abss = fabs(s);
					if (abss > eps)
					{
						h = h / 2.0;
						accept1 = false;
						C2 +=1;
						countdiv++;
					}
					else if (abss < eps / 16.0)  
					{
						vn = test1(xprev, h, vn);
						h = 2.0 * h;
						C1 +=1;
						countdoub++;
					}
					else
					{
						vn = test1(xprev, h, vn);
					}
				}
				else
				{
					vn = test1(xprev, h, vn);
				}
				// Печать в таблицу
				if (accept1 == true)
				{
					if (fabs(sol - vn) > maxerr)
					{
						maxerr = fabs(sol - vn);
						xerr = x;
					}
					double current_h = x - xprev;
					if (current_h < minh)
					{
						minh = current_h;
						x2 = xprev;
					}
					if (current_h > maxh)
					{
						maxh = current_h;
						x3 = xprev;
					}
					double e = s * 16.0;
					if (fabs(e) > maxolp && fabs(e) != INFINITY)
						maxolp = fabs(e);

					if (checkBox2->Checked == true)
						f2_list->Add(x, sol);
					f1_list->Add(x, vn);

					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = i;
					dataGridView1->Rows[i]->Cells[1]->Value = x;
					dataGridView1->Rows[i]->Cells[2]->Value = floor(vn * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[4]->Value = floor(vroof * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[6]->Value = floor((vn - vroof) * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[8]->Value = floor(e * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[10]->Value = floor(current_h * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[11]->Value = C1;
					dataGridView1->Rows[i]->Cells[12]->Value = C2;
					dataGridView1->Rows[i]->Cells[13]->Value = floor(sol * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[14]->Value = floor(fabs(sol - vn) * 1e16) / 1e16;
					xprev = x;
					x = x + h;
					if (xprev < xmax - egr && x >=  xmax + egr)
					{
						h = xmax - xprev - (egr / 2.);
						x = xprev + h ;
						halfRK = test1(xprev, h / 2., vn);
						vroof = test1(xprev + h / 2., h / 2., halfRK);
						s = (vroof - test1(xprev, h, vn)) / 15.0;
						sol = sol1(x, cnst);
						vn = test1(xprev, h, vn);
						
						if (checkBox2->Checked == true)
							f2_list->Add(x, sol);
						f1_list->Add(x, vn);

						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = i;
						dataGridView1->Rows[i]->Cells[1]->Value = x;
						dataGridView1->Rows[i]->Cells[2]->Value = floor(vn * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[4]->Value = floor(vroof * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[6]->Value = floor((vn - vroof) * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[8]->Value = floor(s * 16.0 * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[10]->Value = floor(h * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[11]->Value = 0;
						dataGridView1->Rows[i]->Cells[12]->Value = 0;
						dataGridView1->Rows[i]->Cells[13]->Value = floor(sol * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[14]->Value = floor(fabs(sol - vn) * 1e16) / 1e16;
						i++;
						break;
					}
					i++;
					C1 = 0;
					C2 = 0;

				}
			}
			// Вывод справки
			label14->Text = "n = " + i.ToString();
			label25->Text = "b-xn = " + abs((xmax - x)).ToString();
			label26->Text = "max|ОЛП| = " + maxolp.ToString();
			label15->Text = "Общее число удвоения шага: " + countdoub.ToString();
			label16->Text = "Общее число деления шага: " + countdiv.ToString();
			label17->Text = "Максимальный шаг: " + maxh.ToString() + " при x = " + x3.ToString();
			label18->Text = "Минимальный шаг: " + minh.ToString() + " при x = " + x2.ToString();
			label19->Text = "Максимальная ошибка max|ui-vi|: " + maxerr.ToString() + " в точке x = " + xerr.ToString();
			label20->Text = "Задача: dU / dx = u";
			label21->Text = "НУ: U(0) = u0";
		}
		else if (comboBox1->Text == "Основная 1")
		{
			dataGridView1->Columns[3]->Visible = false;
			dataGridView1->Columns[5]->Visible = false;
			dataGridView1->Columns[7]->Visible = false;
			dataGridView1->Columns[9]->Visible = false;
			dataGridView1->Columns[13]->Visible = false;
			dataGridView1->Columns[14]->Visible = false;

			// Начальная точка
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(vn * 1e16) / 1e16;
			dataGridView1->Rows[i]->Cells[4]->Value = floor(vn * 1e16) / 1e16; // vroof = vn в начальной точке
			dataGridView1->Rows[i]->Cells[6]->Value = 0.0;
			dataGridView1->Rows[i]->Cells[8]->Value = 0.0;
			dataGridView1->Rows[i]->Cells[10]->Value = 0.0;
			dataGridView1->Rows[i]->Cells[11]->Value = C1;
			dataGridView1->Rows[i]->Cells[12]->Value = C2;
			if (checkBox2->Checked == true)
				f2_list->Add(x, sol);
			f1_list->Add(x, vn);
			xprev = x;
			x = x + h;
			i++;

			while (i < Nmax && x < xmax- egr && vn != INFINITY && (x - xprev) != 0)
			{
				accept1 = true;
				double halfRK = main1(xprev, h / 2., vn);
				vroof = main1(xprev + h / 2., h / 2., halfRK);
				s = (vroof - main1(xprev, h, vn)) / 15.0; 

				if (checkBox1->Checked == true)
				{
					double abss = fabs(s);
					if (abss > eps)
					{
						h = h / 2.;
						accept1 = false;
						C2 +=1;
						countdiv++;
					}
					else if (abss < eps / 32.0) 
					{
						vn = main1(xprev, h, vn);
						h = 2. * h;
						C1 +=1;
						countdoub++;
					}
					else
					{
						vn = main1(xprev, h, vn);
					}
				}
				else
				{
					vn = main1(xprev, h, vn);
				}
				// Печать в таблицу
				if (accept1 == true)
				{
					double current_h = x - xprev;
					if (current_h < minh)
					{
						minh = current_h;
						x2 = xprev;
					}
					if (current_h > maxh)
					{
						maxh = current_h;
						x3 = xprev;
					}
					double e = s * 16.0;
					if (fabs(e) > maxolp && fabs(e) != INFINITY) maxolp = fabs(e);

					f1_list->Add(x, vn);
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = i;
					dataGridView1->Rows[i]->Cells[1]->Value = x;
					dataGridView1->Rows[i]->Cells[2]->Value = floor(vn * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[4]->Value = floor(vroof * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[6]->Value = floor((vn - vroof) * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[8]->Value = floor(e * 1e16) / 1e16;  
					dataGridView1->Rows[i]->Cells[10]->Value = floor(current_h * 1e16) / 1e16;
					dataGridView1->Rows[i]->Cells[11]->Value = C1;
					dataGridView1->Rows[i]->Cells[12]->Value = C2;
					xprev = x;
					x = x + h;
					if (/*xprev < xmax - egr */ x >= xmax + egr)
					{
						h = xmax - xprev - egr / 2.;
						x = xprev + h;
						halfRK = main1(xprev, h / 2., vn);
						vroof = main1(xprev + h / 2., h / 2., halfRK);
						s = (vroof - main1(xprev, h, vn)) / 15.0;  
						vn = main1(xprev, h, vn);
						f1_list->Add(x, vn);
						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = i;
						dataGridView1->Rows[i]->Cells[1]->Value = x;
						dataGridView1->Rows[i]->Cells[2]->Value = floor(vn * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[4]->Value = floor(vroof * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[6]->Value = floor((vn - vroof) * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[8]->Value = floor(e * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[10]->Value = floor(h * 1e16) / 1e16;
						dataGridView1->Rows[i]->Cells[11]->Value = 0;
						dataGridView1->Rows[i]->Cells[12]->Value = 0;
						i++;
						break;
					}
					i++;
					C1 = 0;
					C2 = 0;
				}
			}


			// Вывод справки
			label14->Text = "n = " + i.ToString();
			label25->Text = "b-xn = " + (xmax - xprev).ToString();
			label26->Text = "max|ОЛП| = " + maxolp.ToString();
			label15->Text = "Общее число удвоения шага: " + countdoub.ToString();
			label16->Text = "Общее число деления шага: " + countdiv.ToString();
			label17->Text = "Максимальный шаг: " + maxh.ToString() + " при x = " + x3.ToString();
			label18->Text = "Минимальный шаг: " + minh.ToString() + " при x = " + x2.ToString();
			label19->Text = "";
			label20->Text = "Задача: dU/dx = x/ (1 + x^2) *u^2 + u - u^3 * sin10x";
			label21->Text = "НУ: U(0) = u0";
		}
		else
		{
			dataGridView1->Columns[3]->Visible = true;
			dataGridView1->Columns[5]->Visible = true;
			dataGridView1->Columns[7]->Visible = true;
			dataGridView1->Columns[9]->Visible = true;
			dataGridView1->Columns[13]->Visible = false;
			dataGridView1->Columns[14]->Visible = false;

			// Начальная точка
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = vn;
			dataGridView1->Rows[i]->Cells[3]->Value = vn1;
			dataGridView1->Rows[i]->Cells[4]->Value = vn;   // vroof = vn в начальной точке
			dataGridView1->Rows[i]->Cells[5]->Value = vn1;  // vroof1 = vn1 в начальной точке
			dataGridView1->Rows[i]->Cells[6]->Value = 0.0;  // Разность = 0
			dataGridView1->Rows[i]->Cells[7]->Value = 0.0;  // Разность = 0
			dataGridView1->Rows[i]->Cells[8]->Value = 0.0;  // ОЛП = 0
			dataGridView1->Rows[i]->Cells[9]->Value = 0.0;  // ОЛП = 0
			dataGridView1->Rows[i]->Cells[10]->Value = 0.0; // Шаг = 0
			dataGridView1->Rows[i]->Cells[11]->Value = C1;
			dataGridView1->Rows[i]->Cells[12]->Value = C2;
			f1_list->Add(x, vn);
			f2_list->Add(x, vn1);
			f3_list->Add(vn, vn1);
			xprev = x;  // Сохраняем начальную точку
			x += h;
			i++;

			while (i < Nmax && x < xmax - egr && vn != INFINITY && (x - xprev) != 0)
			{
				accept1 = true;
				double abss = 0.0;

				// Временные переменные для вычислений
				double u_full, y_full, u_half, y_half, u_half2, y_half2;

				// Вычисление с полным шагом
				RK4_system(xprev, h, vn, vn1, a, b, u_full, y_full);

				// Вычисление с двумя половинными шагами
				RK4_system(xprev, h / 2, vn, vn1, a, b, u_half, y_half);
				RK4_system(xprev + h / 2, h / 2, u_half, y_half, a, b, u_half2, y_half2);

				// Оценка погрешности
				s1 = (u_half2 - u_full) / 15.0;
				s2 = (y_half2 - y_full) / 15.0;

				// Максимальная оценка погрешности
				if (fabs(s1) > fabs(s2)) {
					abss = fabs(s1);
				}
				else {
					abss = fabs(s2);
				}

				if (checkBox1->Checked == true)
				{
					if (abss > eps)
					{
						h = h / 2.;
						accept1 = false;
						C2 ++;
						countdiv++;
					}
					else if (abss < eps / 32.0)  
					{
						// Обновляем переменные системы
						RK4_system(xprev, h, vn, vn1, a, b, vn, vn1);
						h = 2. * h;
						C1 ++;
						countdoub++;
					}
					else
					{
						// Обновляем переменные системы
						RK4_system(xprev, h, vn, vn1, a, b, vn, vn1);
					}
				}
				else
				{
					// Обновляем переменные системы
					RK4_system(xprev, h, vn, vn1, a, b, vn, vn1);
				}
				// Печать в таблицу
				if (accept1 == true)
				{
					double current_h = x - xprev;
					if (current_h < minh)
					{
						minh = current_h;
						x2 = xprev;
					}
					if (current_h > maxh)
					{
						maxh = current_h;
						x3 = xprev;
					}

					double e = std::max(s1,s2) * 16.0;
					if (fabs(e) > maxolp && fabs(e) != INFINITY) maxolp = fabs(e);

					f1_list->Add(x, vn);
					f2_list->Add(x, vn1);
					f3_list->Add(vn, vn1);

					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = i;
					dataGridView1->Rows[i]->Cells[1]->Value = x;
					dataGridView1->Rows[i]->Cells[2]->Value = vn;
					dataGridView1->Rows[i]->Cells[3]->Value = vn1;
					dataGridView1->Rows[i]->Cells[4]->Value = u_half2;  // Более точное значение
					dataGridView1->Rows[i]->Cells[5]->Value = y_half2;  // Более точное значение
					dataGridView1->Rows[i]->Cells[6]->Value = vn - u_half2;
					dataGridView1->Rows[i]->Cells[7]->Value = vn1 - y_half2;
					dataGridView1->Rows[i]->Cells[8]->Value = s1*16.0;
					dataGridView1->Rows[i]->Cells[9]->Value = s2*16.0;
					dataGridView1->Rows[i]->Cells[10]->Value = current_h;
					dataGridView1->Rows[i]->Cells[11]->Value = C1;
					dataGridView1->Rows[i]->Cells[12]->Value = C2;
					xprev = x;
					x = x + h;
					if ( x >= xmax + egr)
					{
						h = xmax - xprev - egr / 2.;
						x = xprev + h;
						// Вычисление с полным шагом
						RK4_system(xprev, h, vn, vn1, a, b, u_full, y_full);

						// Вычисление с двумя половинными шагами
						RK4_system(xprev, h / 2, vn, vn1, a, b, u_half, y_half);
						RK4_system(xprev + h / 2, h / 2, u_half, y_half, a, b, u_half2, y_half2);

						// Оценка погрешности
						s1 = (u_half2 - u_full) / 15.0;
						s2 = (y_half2 - y_full) / 15.0;
						f1_list->Add(x, vn);
						f2_list->Add(x, vn1);
						f3_list->Add(vn, vn1);
						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells[0]->Value = i;
						dataGridView1->Rows[i]->Cells[1]->Value = x;
						dataGridView1->Rows[i]->Cells[2]->Value = vn;
						dataGridView1->Rows[i]->Cells[3]->Value = vn1;
						dataGridView1->Rows[i]->Cells[4]->Value = u_half2;  // Более точное значение
						dataGridView1->Rows[i]->Cells[5]->Value = y_half2;  // Более точное значение
						dataGridView1->Rows[i]->Cells[6]->Value = vn - u_half2;
						dataGridView1->Rows[i]->Cells[7]->Value = vn1 - y_half2;
						dataGridView1->Rows[i]->Cells[8]->Value = s1 * 16.0;
						dataGridView1->Rows[i]->Cells[9]->Value = s2 * 16.0;
						dataGridView1->Rows[i]->Cells[10]->Value = h;
						dataGridView1->Rows[i]->Cells[11]->Value = 0;
						dataGridView1->Rows[i]->Cells[12]->Value = 0;
						i++;
						break;
					}
					i++;
					C1 = 0;
					C2 = 0;
				}
			}

			// Вывод справки
			label14->Text = "n = " + i.ToString();
			label25->Text = "b-xn = " + (xmax - xprev).ToString();
			label26->Text = "max|ОЛП| = " + maxolp.ToString();
			label15->Text = "Общее число удвоения шага:: " + countdoub.ToString();
			label16->Text = "Общее число деления шага:: " + countdiv.ToString();
			label17->Text = "Максимальный шаг: " + maxh.ToString() + " при x = " + x3.ToString();
			label18->Text = "Минимальный шаг: " + minh.ToString() + " при x = " + x2.ToString();
			label19->Text = "";
			label20->Text = "Задача: d2U/dx^2 = -(a*y + b*sin(u))";
			label21->Text = "НУ: U(0) = u0, U'(0) = u'0";
		}
		// Исправленный блок построения графиков
		if (comboBox1->Text != "Основная 2") {
			LineItem^ Curve1 = panel->AddCurve("Численное решение", f1_list, Color::Red, SymbolType::Plus);
			if (checkBox2->Checked == true) {
				LineItem^ Curve2 = panel->AddCurve("Точное решение", f2_list, Color::Blue, SymbolType::Circle);
			}
		}
		else
		{
			if (checkBox3->Checked == true)
			{
				// Фазовый портрет
				LineItem^ Curve1 = panel->AddCurve("Фазовый портрет (u vs u')", f3_list, Color::Red, SymbolType::Plus);

				// Автоматическое масштабирование для фазового портрета
				if (f3_list->Count > 0) {
					double minX = f3_list[0]->X, maxX = f3_list[0]->X;
					double minY = f3_list[0]->Y, maxY = f3_list[0]->Y;

					for each (PointPair ^ point in f3_list) {
						if (point->X < minX) minX = point->X;
						if (point->X > maxX) maxX = point->X;
						if (point->Y < minY) minY = point->Y;
						if (point->Y > maxY) maxY = point->Y;
					}

					// Добавить 10% запаса
					double marginX = (maxX - minX) * 0.1;
					double marginY = (maxY - minY) * 0.1;

					panel->XAxis->Scale->Min = minX - marginX;
					panel->XAxis->Scale->Max = maxX + marginX;
					panel->YAxis->Scale->Min = minY - marginY;
					panel->YAxis->Scale->Max = maxY + marginY;
				}
			}
			else {
				// Графики u(x) и u'(x)
				LineItem^ Curve1 = panel->AddCurve("u(x)", f1_list, Color::Red, SymbolType::Plus);
				LineItem^ Curve2 = panel->AddCurve("u'(x)", f2_list, Color::Blue, SymbolType::Circle);
			}
		}

		// Установка пределов по осям
		if (!(comboBox1->Text == "Основная 2" && checkBox3->Checked == true)) {
			// Для всех случаев кроме фазового портрета используем стандартные пределы
			panel->XAxis->Scale->Min = xmin;
			panel->XAxis->Scale->Max = xmax;
		}

		// Обновление графика
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

	}
	private:
		System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
			// Инициализация графика при загрузке (если требуется)
		}

	private:
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			// Обработчик кнопки установки границ графика
			try {
				GraphPane^ panel = zedGraphControl1->GraphPane;

				// Безопасное преобразование с проверкой на пустые строки
				if (String::IsNullOrEmpty(textBox5->Text) ||
					String::IsNullOrEmpty(textBox7->Text) ||
					String::IsNullOrEmpty(textBox10->Text) ||
					String::IsNullOrEmpty(textBox11->Text)) {
					MessageBox::Show("Пожалуйста, заполните все поля границ графика.");
					return;
				}

				double xmin = Convert::ToDouble(textBox5->Text);
				double xmax = Convert::ToDouble(textBox7->Text);
				double ymin = Convert::ToDouble(textBox10->Text);
				double ymax = Convert::ToDouble(textBox11->Text);

				// Проверка корректности введенных данных
				if (xmin >= xmax) {
					MessageBox::Show("Минимальное значение X должно быть меньше максимального!");
					return;
				}
				if (ymin >= ymax) {
					MessageBox::Show("Минимальное значение Y должно быть меньше максимального!");
					return;
				}

				// Проверка на разумные пределы (опционально)
				if (xmax - xmin > 1000000 || ymax - ymin > 1000000) {
					if (MessageBox::Show("Задан очень большой диапазон значений. Продолжить?",
						"Предупреждение",
						MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::No) {
						return;
					}
				}

				// Установка новых границ
				panel->XAxis->Scale->Min = xmin;
				panel->XAxis->Scale->Max = xmax;
				panel->YAxis->Scale->Min = ymin;
				panel->YAxis->Scale->Max = ymax;

				// Обновление графика
				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();
			}
			catch (FormatException^) {
				MessageBox::Show("Ошибка: Введите корректные числовые значения для границ графика.\n" +
					"Используйте точку как разделитель дробной части.");
			}
			catch (OverflowException^) {
				MessageBox::Show("Ошибка: Введены слишком большие числа.");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Неожиданная ошибка при установке границ графика:\n" + ex->Message);
			}
		}

	private:
		System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			// Можно оставить пустым или добавить логику при изменении выбора
		}

	private:
		System::Void comboBox1_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
			// Можно оставить пустым или добавить логику при обновлении текста
		}

	private:
		System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			// Обработчик изменения типа задачи
			try {
				// Сброс всех информационных меток
				label14->Text = "";
				label25->Text = "";
				label26->Text = "";
				label15->Text = "";
				label16->Text = "";
				label17->Text = "";
				label18->Text = "";
				label19->Text = "";
				label20->Text = "";
				label21->Text = "";

				// Очистка графика
				GraphPane^ panel = zedGraphControl1->GraphPane;
				panel->CurveList->Clear();
				panel->Title->Text = ""; // Очистка заголовка

				// Сброс подписей осей к значениям по умолчанию
				panel->XAxis->Title->Text = "x";
				panel->YAxis->Title->Text = "y";

				// Установка автоматического масштабирования
				panel->XAxis->Scale->MinAuto = true;
				panel->XAxis->Scale->MaxAuto = true;
				panel->YAxis->Scale->MinAuto = true;
				panel->YAxis->Scale->MaxAuto = true;

				zedGraphControl1->AxisChange();
				zedGraphControl1->Invalidate();

				// Очистка таблицы результатов
				dataGridView1->Rows->Clear();

				// Настройка доступности чекбоксов в зависимости от выбранной задачи
				String^ selectedTask = comboBox1->Text;

				if (selectedTask == "Тестовая") {
					checkBox2->Enabled = true;    // Показать точное решение
					checkBox3->Enabled = false;   // Фазовый портрет не применим
					checkBox3->Checked = false;

					// Установка заголовка графика
					panel->Title->Text = "Тестовая задача";
				}
				else if (selectedTask == "Основная 2") {
					checkBox3->Enabled = true;    // Фазовый портрет доступен
					checkBox2->Enabled = false;   // Точное решение недоступно
					checkBox2->Checked = false;

					// Установка заголовка графика
					panel->Title->Text = "Основная задача №2";
				}
				else if (selectedTask == "Основная 1") {
					checkBox2->Enabled = false;   // Точное решение недоступно
					checkBox2->Checked = false;
					checkBox3->Enabled = false;   // Фазовый портрет не применим
					checkBox3->Checked = false;

					// Установка заголовка графика
					panel->Title->Text = "Основная задача №1";
				}
				else {
					// Если выбор не сделан или не распознан
					checkBox2->Enabled = false;
					checkBox2->Checked = false;
					checkBox3->Enabled = false;
					checkBox3->Checked = false;
				}

				// Принудительное обновление интерфейса
				this->Refresh();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при изменении типа задачи:\n" + ex->Message);
			}
		}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
