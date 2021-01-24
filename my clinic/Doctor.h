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
	/// Summary for Doctor
	/// </summary>
	public ref class Doctor : public System::Windows::Forms::Form
	{
		private : Form^previous;
	public:

		Doctor(Form^fn)
		{
			InitializeComponent();
			previous = fn ;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Doctor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  close3;
	protected: 

	protected: 

	protected: 

	protected: 


	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  write;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::Button^  view;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  login;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Doctor::typeid));
			this->close3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->write = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->view = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// close3
			// 
			this->close3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->close3->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->close3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->close3->Location = System::Drawing::Point(260, 515);
			this->close3->Name = L"close3";
			this->close3->Size = System::Drawing::Size(102, 41);
			this->close3->TabIndex = 0;
			this->close3->Text = L"Print";
			this->close3->UseVisualStyleBackColor = false;
			this->close3->Visible = false;
			this->close3->Click += gcnew System::EventHandler(this, &Doctor::close3_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 30;
			this->listBox1->Location = System::Drawing::Point(289, 113);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(211, 304);
			this->listBox1->TabIndex = 3;
			this->listBox1->Visible = false;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Doctor::listBox1_SelectedIndexChanged);
			// 
			// write
			// 
			this->write->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->write->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->write->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->write->Location = System::Drawing::Point(349, 473);
			this->write->Name = L"write";
			this->write->Size = System::Drawing::Size(88, 35);
			this->write->TabIndex = 4;
			this->write->Text = L"Write";
			this->write->UseVisualStyleBackColor = false;
			this->write->Visible = false;
			this->write->Click += gcnew System::EventHandler(this, &Doctor::write_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(61, 104);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(201, 313);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Doctor::groupBox1_Enter);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(7, 256);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(97, 30);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Tonsillitis";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(7, 220);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(120, 30);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Rheumatoid";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 184);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(123, 30);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Rheumatism";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 148);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(138, 30);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Gastroenterits";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 112);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(186, 30);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Fibrosis of brain cells";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 76);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(93, 30);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Cirrhosis";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 40);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(105, 30);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Bronchitis";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// view
			// 
			this->view->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->view->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->view->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->view->Location = System::Drawing::Point(102, 473);
			this->view->Name = L"view";
			this->view->Size = System::Drawing::Size(88, 35);
			this->view->TabIndex = 6;
			this->view->Text = L"View";
			this->view->UseVisualStyleBackColor = false;
			this->view->Visible = false;
			this->view->Click += gcnew System::EventHandler(this, &Doctor::view_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->login);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(77, 85);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(439, 401);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Doctor::groupBox2_Enter);
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->login->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->login->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->login->Location = System::Drawing::Point(176, 221);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(67, 34);
			this->login->TabIndex = 2;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &Doctor::login_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(137, 144);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(150, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Doctor::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please enter the password";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->listBox2);
			this->groupBox3->Controls->Add(this->close3);
			this->groupBox3->Location = System::Drawing::Point(31, 73);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(601, 594);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Visible = false;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"Phone Num /", L"Address/", L"Clinic Num/", L"-----------------------------------------------------------------------------", 
				L"Dr/                                            Date/", L"", L"", L"", L""});
			this->listBox2->Location = System::Drawing::Point(61, 19);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(483, 441);
			this->listBox2->TabIndex = 0;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Doctor::listBox2_SelectedIndexChanged_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(165, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 29);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Please select a medicine";
			this->label2->Visible = false;
			// 
			// Doctor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 741);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->view);
			this->Controls->Add(this->write);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Doctor";
			this->Text = L"Doctor";
			this->Load += gcnew System::EventHandler(this, &Doctor::Doctor_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				
			 }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void close3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this-> Close();
			 previous -> Show();
			 }
private: System::Void write_Click(System::Object^  sender, System::EventArgs^  e) {
			 label2->Hide();
			  groupBox1->Hide();
			  listBox1->Hide();
			  view->Hide();
			  write->Hide();
			  close3->Show();
			  groupBox3->Show();
			  if(radioButton1->Checked==true)
			       {
					   listBox2->Items->Add("Bronchitis");
			  listBox2->Items->Add("\t"+"\t"+listBox1->SelectedItem);
			  }
			  if(radioButton2->Checked==true)
			        {
						listBox2->Items->Add("Cirrhosis");
			            listBox2->Items->Add("\t"+"\t"+listBox1->SelectedItem);
			        }
			  if(radioButton3->Checked==true)
			        {
						listBox2->Items->Add("Fibrosis of brain cells");
			            listBox2->Items->Add("\t"+"\t"+listBox1->SelectedItem);
			        }
			  if(radioButton4->Checked==true)
			        {
						listBox2->Items->Add("Gastroenterits");
			            listBox2->Items->Add("\t"+"\t"+listBox1->SelectedItem);
			        }
			  if(radioButton5->Checked==true)
			        {
						listBox2->Items->Add("Rheumatism");
			            listBox2->Items->Add("\t"+"\t"+listBox1->SelectedItem);
			        }
			  if(radioButton6->Checked==true)
			        {
						listBox2->Items->Add("Rheumatoid");
			            listBox2->Items->Add("\t"+"\t"+listBox1->SelectedItem);
			        }
			  if(radioButton7->Checked==true)
			        {
						listBox2->Items->Add("Tonsillitis");
			            listBox2->Items->Add("\t"+"\t"+listBox1->SelectedItem);
			        }
			  
			



			 
			 

			 
		 }
private: System::Void Doctor_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void view_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Show();
			 write->Show();
			 label2->Show();
			  if(radioButton1->Checked==true)
			  {
				  StreamReader ^ReadFile =gcnew StreamReader("Bronchitis.txt");
				  listBox1->Items->Clear();
					  while (!ReadFile->EndOfStream )
						  listBox1->Items->Add(ReadFile->ReadLine());
					  ReadFile->Close();
			  }
			   else if(radioButton2->Checked==true)
			  {
				  StreamReader ^ReadFile =gcnew StreamReader("Cirrhosis.txt");
				  listBox1->Items->Clear();
					  while (!ReadFile->EndOfStream )
						  listBox1->Items->Add(ReadFile->ReadLine());
					  ReadFile->Close();
			  }
			    else if(radioButton3->Checked==true)
			  {
				  StreamReader ^ReadFile =gcnew StreamReader("Fibrosis of brain cells.txt");
				  listBox1->Items->Clear();
					  while (!ReadFile->EndOfStream )
						  listBox1->Items->Add(ReadFile->ReadLine());
					  ReadFile->Close();
			  }
				else if(radioButton4->Checked==true)
			  {
				  StreamReader ^ReadFile =gcnew StreamReader("Gastroenterits.txt");
				  listBox1->Items->Clear();
					  while (!ReadFile->EndOfStream )
						  listBox1->Items->Add(ReadFile->ReadLine());
					  ReadFile->Close();
			  }
				else if(radioButton5->Checked==true)
			  {
				  StreamReader ^ReadFile =gcnew StreamReader("Rheumatism.txt");
				  listBox1->Items->Clear();
					  while (!ReadFile->EndOfStream )
						  listBox1->Items->Add(ReadFile->ReadLine());
					  ReadFile->Close();
			  }
				else if(radioButton6->Checked==true)
			  {
				  StreamReader ^ReadFile =gcnew StreamReader("Rheumatoid.txt");
				  listBox1->Items->Clear();
					  while (!ReadFile->EndOfStream )
						  listBox1->Items->Add(ReadFile->ReadLine());
					  ReadFile->Close();
			  }
				else if(radioButton7->Checked==true)
			  {
				  StreamReader ^ReadFile =gcnew StreamReader("Tonsillitis.txt");
				  listBox1->Items->Clear();
					  while (!ReadFile->EndOfStream )
						  listBox1->Items->Add(ReadFile->ReadLine());
					  ReadFile->Close();
			  }
			
		 }
private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text=="1111")
			 {
				 groupBox2->Hide();
				 groupBox1->Show();
				 view->Show();
				 

			 }
			 else
			 MessageBox::Show("your Password wrong please try again","error!!!!",MessageBoxButtons::OK,MessageBoxIcon::Warning);

		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void listBox2_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
