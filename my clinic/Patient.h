#pragma once

namespace myclinic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Patient
	/// </summary>
	public ref class Patient : public System::Windows::Forms::Form
	{
	private : Form^previous;
	private: System::Windows::Forms::Button^  back;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  search;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  back2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  data;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::RadioButton^  radioButton16;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::Button^  exit;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Button^  close;
			
			
	public:
		Patient(Form^fm)
		{
			InitializeComponent();
			previous = fm ;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Patient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  consultation;
	private: System::Windows::Forms::Button^  checkup;
	private: System::Windows::Forms::GroupBox^  groupBox2;


	private: System::Windows::Forms::Button^  Save;


	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Patient::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->consultation = (gcnew System::Windows::Forms::Button());
			this->checkup = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->back = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->data = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->back2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->consultation);
			this->groupBox1->Controls->Add(this->checkup);
			this->groupBox1->Location = System::Drawing::Point(12, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1211, 634);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label6->Location = System::Drawing::Point(819, 323);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(376, 114);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Choose The Type Of\r\n      Your Visit ";
			// 
			// consultation
			// 
			this->consultation->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->consultation->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->consultation->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->consultation->Location = System::Drawing::Point(951, 545);
			this->consultation->Name = L"consultation";
			this->consultation->Size = System::Drawing::Size(170, 49);
			this->consultation->TabIndex = 1;
			this->consultation->Text = L"Consultation";
			this->consultation->UseVisualStyleBackColor = false;
			this->consultation->Click += gcnew System::EventHandler(this, &Patient::consultation_Click);
			// 
			// checkup
			// 
			this->checkup->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->checkup->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkup->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->checkup->Location = System::Drawing::Point(951, 466);
			this->checkup->Name = L"checkup";
			this->checkup->Size = System::Drawing::Size(170, 49);
			this->checkup->TabIndex = 0;
			this->checkup->Text = L"Check up";
			this->checkup->UseVisualStyleBackColor = false;
			this->checkup->Click += gcnew System::EventHandler(this, &Patient::checkup_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->groupBox5);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->back);
			this->groupBox2->Controls->Add(this->close);
			this->groupBox2->Controls->Add(this->Save);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1219, 696);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Patient::groupBox2_Enter);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"ID             Name               Age          Phone Number       Appointment"});
			this->listBox2->Location = System::Drawing::Point(778, 53);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(414, 394);
			this->listBox2->TabIndex = 14;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Patient::listBox2_SelectedIndexChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton8);
			this->groupBox5->Controls->Add(this->radioButton7);
			this->groupBox5->Controls->Add(this->radioButton6);
			this->groupBox5->Controls->Add(this->radioButton5);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(485, 417);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(124, 204);
			this->groupBox5->TabIndex = 13;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Part 2";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(9, 147);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(103, 28);
			this->radioButton8->TabIndex = 3;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"9:30 pm";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(10, 108);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(107, 28);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"9:00 pm";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(9, 71);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(103, 28);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"8:30 pm";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(10, 34);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(107, 28);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"8:00 pm";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Patient::radioButton5_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton4);
			this->groupBox4->Controls->Add(this->radioButton3);
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(231, 417);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(129, 204);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Part 1";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(8, 149);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(106, 28);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"11:30 am";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 111);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(110, 28);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"11:00 am";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 74);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(112, 28);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"10:30 am";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(8, 37);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(116, 28);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"10:00 am";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(144, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 27);
			this->label5->TabIndex = 11;
			this->label5->Text = L"ID";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(305, 132);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(244, 31);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Patient::textBox5_TextChanged);
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::WhiteSmoke;
			this->back->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->back->Location = System::Drawing::Point(961, 544);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(74, 32);
			this->back->TabIndex = 9;
			this->back->Text = L"Back";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &Patient::back_Click);
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::WhiteSmoke;
			this->close->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->close->Location = System::Drawing::Point(1059, 486);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(96, 37);
			this->close->TabIndex = 8;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = false;
			this->close->Click += gcnew System::EventHandler(this, &Patient::close_Click);
			// 
			// Save
			// 
			this->Save->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Save->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Save->Location = System::Drawing::Point(846, 491);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(96, 37);
			this->Save->TabIndex = 7;
			this->Save->Text = L"Save Data";
			this->Save->UseVisualStyleBackColor = false;
			this->Save->Click += gcnew System::EventHandler(this, &Patient::Save_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(305, 346);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 31);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(305, 279);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 31);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(305, 203);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 31);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(95, 350);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Phone Number";
			this->label3->Click += gcnew System::EventHandler(this, &Patient::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(144, 281);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Age";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(126, 205);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->exit);
			this->groupBox3->Controls->Add(this->data);
			this->groupBox3->Controls->Add(this->listBox3);
			this->groupBox3->Controls->Add(this->groupBox7);
			this->groupBox3->Controls->Add(this->groupBox6);
			this->groupBox3->Controls->Add(this->back2);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Controls->Add(this->search);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(31, 45);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1219, 659);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Visible = false;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Patient::groupBox3_Enter);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->exit->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->exit->Location = System::Drawing::Point(869, 592);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(92, 37);
			this->exit->TabIndex = 9;
			this->exit->Text = L"Close";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Patient::exit_Click);
			// 
			// data
			// 
			this->data->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->data->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->data->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->data->Location = System::Drawing::Point(969, 353);
			this->data->Name = L"data";
			this->data->Size = System::Drawing::Size(84, 38);
			this->data->TabIndex = 8;
			this->data->Text = L"Save Data";
			this->data->UseVisualStyleBackColor = false;
			this->data->Click += gcnew System::EventHandler(this, &Patient::data_Click);
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"ID             Name               Age          Phone Number       Appointment"});
			this->listBox3->Location = System::Drawing::Point(827, 418);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(365, 160);
			this->listBox3->TabIndex = 7;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Patient::listBox3_SelectedIndexChanged);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton16);
			this->groupBox7->Controls->Add(this->radioButton15);
			this->groupBox7->Controls->Add(this->radioButton14);
			this->groupBox7->Controls->Add(this->radioButton13);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox7->Location = System::Drawing::Point(633, 365);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(120, 264);
			this->groupBox7->TabIndex = 6;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Part 2";
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(9, 206);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(102, 28);
			this->radioButton16->TabIndex = 3;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"9:45 pm";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(9, 146);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(98, 28);
			this->radioButton15->TabIndex = 2;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"9:15 pm";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(9, 89);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(102, 28);
			this->radioButton14->TabIndex = 1;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"8:45 pm";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(9, 22);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(98, 28);
			this->radioButton13->TabIndex = 0;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"8:15 pm";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton12);
			this->groupBox6->Controls->Add(this->radioButton11);
			this->groupBox6->Controls->Add(this->radioButton10);
			this->groupBox6->Controls->Add(this->radioButton9);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(632, 75);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(121, 264);
			this->groupBox6->TabIndex = 5;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Part 1";
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(10, 206);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(105, 28);
			this->radioButton12->TabIndex = 3;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"11:45 am";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(10, 146);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(101, 28);
			this->radioButton11->TabIndex = 2;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"11:15 am";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(10, 89);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(111, 28);
			this->radioButton10->TabIndex = 1;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"10:45 am";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(10, 27);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(107, 28);
			this->radioButton9->TabIndex = 0;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"10:15 am";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// back2
			// 
			this->back2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->back2->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->back2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->back2->Location = System::Drawing::Point(1059, 592);
			this->back2->Name = L"back2";
			this->back2->Size = System::Drawing::Size(92, 37);
			this->back2->TabIndex = 4;
			this->back2->Text = L"Back";
			this->back2->UseVisualStyleBackColor = false;
			this->back2->Click += gcnew System::EventHandler(this, &Patient::back2_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(829, 265);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(365, 56);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Patient::listBox1_SelectedIndexChanged);
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->search->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->search->Location = System::Drawing::Point(969, 162);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(86, 33);
			this->search->TabIndex = 2;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &Patient::search_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(932, 109);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(156, 31);
			this->textBox4->TabIndex = 1;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Patient::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(984, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 42);
			this->label4->TabIndex = 0;
			this->label4->Text = L"ID";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(890, 221);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(246, 29);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Please select your data ";
			// 
			// Patient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 741);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Patient";
			this->Text = L"z";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checkup_Click(System::Object^  sender, System::EventArgs^  e) {
				 groupBox1->Hide();
				 groupBox2->Show();
				 StreamReader ^RdFile =gcnew StreamReader("patient data.txt");
					  while (!RdFile->EndOfStream )
						  listBox2->Items->Add(RdFile->ReadLine());
					  RdFile->Close();

			 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Save_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(radioButton1->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data.txt",true);
			 SaveFile->WriteLine(textBox5->Text +"\t" + textBox1->Text +"\t" +textBox2->Text+ "\t"+ textBox3->Text+"\t"+"10:00 am");
			 SaveFile->Close();
			 }
			 if(radioButton2->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data.txt",true);
			 SaveFile->WriteLine(textBox5->Text +"\t" + textBox1->Text +"\t" +textBox2->Text+ "\t"+ textBox3->Text+"\t"+"10:30 am");
			 SaveFile->Close();
			 }
			 if(radioButton3->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data.txt",true);
			 SaveFile->WriteLine(textBox5->Text +"\t" + textBox1->Text +"\t" +textBox2->Text+ "\t"+ textBox3->Text+"\t"+"11:00 am");
			 SaveFile->Close();
			 }
			 if(radioButton4->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data.txt",true);
			 SaveFile->WriteLine(textBox5->Text +"\t" + textBox1->Text +"\t" +textBox2->Text+ "\t"+ textBox3->Text+"\t"+"11:30 am");
			 SaveFile->Close();
			 }
			 if(radioButton5->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data.txt",true);
			 SaveFile->WriteLine(textBox5->Text +"\t" + textBox1->Text +"\t" +textBox2->Text+ "\t"+ textBox3->Text+"\t"+"8:00 pm");
			 SaveFile->Close();
			 }
			 if(radioButton6->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data.txt",true);
			 SaveFile->WriteLine(textBox5->Text +"\t" + textBox1->Text +"\t" +textBox2->Text+ "\t"+ textBox3->Text+"\t"+"8:30 pm");
			 SaveFile->Close();
			 }
			 if(radioButton7->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data.txt",true);
			 SaveFile->WriteLine(textBox5->Text +"\t" + textBox1->Text +"\t" +textBox2->Text+ "\t"+ textBox3->Text+"\t"+"9:00 pm");
			 SaveFile->Close();
			 }
			 if(radioButton8->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data.txt",true);
			 SaveFile->WriteLine(textBox5->Text +"\t" + textBox1->Text +"\t" +textBox2->Text+ "\t"+ textBox3->Text+"\t"+"9:30 pm");
			 SaveFile->Close();
			 }
			 MessageBox::Show("Done","",MessageBoxButtons::OK,MessageBoxIcon::Warning);

		 
		 }
private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {
			 this-> Close();
			 previous -> Show();
		 }
private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox2->Hide();
			 groupBox1->Show();
		 }
private: System::Void consultation_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Hide();
			 groupBox3->Show();
			  StreamReader ^RdFile =gcnew StreamReader("patient data 2.txt");
					  while (!RdFile->EndOfStream )
						  listBox3->Items->Add(RdFile->ReadLine());
					  RdFile->Close();

		 }
private: System::Void back2_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox3->Hide();
			 groupBox1->Show();
		 }
private: System::Void search_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamReader^ search=gcnew StreamReader("patient data.txt");
				while(!search->EndOfStream)
				{
					String^ row=Convert::ToString(search->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
				    if(textBox4->Text==arr[0])
				    {
						listBox1->Items->Add(arr[0]+"\t"+arr[1]+"\t"+arr[2]+"\t"+arr[3]+"\t"+arr[4]);
							
					}
				   
				}
				search->Close();
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void data_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton9->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data 2.txt",true);
			 SaveFile->WriteLine(listBox1->SelectedItem +"\t"+"10:15 am");
			 SaveFile->Close();
			 }
			 if(radioButton10->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data 2.txt",true);
			 SaveFile->WriteLine(listBox1->SelectedItem +"\t"+"10:45 am");
			 SaveFile->Close();
			 }
			 if(radioButton11->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data 2.txt",true);
			 SaveFile->WriteLine(listBox1->SelectedItem +"\t"+"11:15 am");
			 SaveFile->Close();
			 }
			 if(radioButton12->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data 2.txt",true);
			 SaveFile->WriteLine(listBox1->SelectedItem +"\t"+"11:45 am");
			 SaveFile->Close();
			 }
			 if(radioButton13->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data 2.txt",true);
			 SaveFile->WriteLine(listBox1->SelectedItem +"\t"+"8:15 pm");
			 SaveFile->Close();
			 }
			 if(radioButton14->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data 2.txt",true);
			 SaveFile->WriteLine(listBox1->SelectedItem +"\t"+"8:45 pm");
			 SaveFile->Close();
			 }
			 if(radioButton15->Checked==true)
			 {
			 StreamWriter ^SaveFile =gcnew StreamWriter("patient data 2.txt",true);
			 SaveFile->WriteLine(listBox1->SelectedItem +"\t"+"9:15 pm");
			 SaveFile->Close();
			 }
			 if(radioButton16->Checked==true)
			 {
			 StreamWriter ^SvFile =gcnew StreamWriter("patient data 2.txt",true);
			 SvFile->WriteLine(listBox1->SelectedItem +"\t"+"9:45 pm");
			 SvFile->Close();
			 }
			  MessageBox::Show("Done","",MessageBoxButtons::OK,MessageBoxIcon::Warning);
		 }
private: System::Void listBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
			  this-> Close();
			 previous -> Show();
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

 