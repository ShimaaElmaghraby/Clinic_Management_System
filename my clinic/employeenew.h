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
	/// Summary for employeenew
	/// </summary>
	public ref class employeenew : public System::Windows::Forms::Form
	{
	public:
		employeenew(void)
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
		~employeenew()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  exit2;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Button^  search2;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(employeenew::typeid));
			this->exit2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->search2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// exit2
			// 
			this->exit2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->exit2->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exit2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->exit2->Location = System::Drawing::Point(1043, 551);
			this->exit2->Name = L"exit2";
			this->exit2->Size = System::Drawing::Size(93, 38);
			this->exit2->TabIndex = 13;
			this->exit2->Text = L"Close";
			this->exit2->UseVisualStyleBackColor = false;
			this->exit2->Click += gcnew System::EventHandler(this, &employeenew::exit2_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(222, 370);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(248, 35);
			this->textBox6->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(16, 370);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 35);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Appointment";
			this->label6->Click += gcnew System::EventHandler(this, &employeenew::label6_Click);
			// 
			// search2
			// 
			this->search2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->search2->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->search2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->search2->Location = System::Drawing::Point(299, 100);
			this->search2->Name = L"search2";
			this->search2->Size = System::Drawing::Size(93, 32);
			this->search2->TabIndex = 8;
			this->search2->Text = L"Search";
			this->search2->UseVisualStyleBackColor = false;
			this->search2->Click += gcnew System::EventHandler(this, &employeenew::search2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(222, 296);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(248, 35);
			this->textBox5->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(222, 225);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(248, 35);
			this->textBox4->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(222, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(248, 35);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &employeenew::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(222, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(248, 35);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &employeenew::textBox2_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 35);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Phone Number";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->exit2);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->search2);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Location = System::Drawing::Point(25, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1152, 606);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &employeenew::groupBox2_Enter);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button3->Location = System::Drawing::Point(559, 551);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 38);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &employeenew::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button2->Location = System::Drawing::Point(114, 551);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 38);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &employeenew::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(60, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 35);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Age";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(49, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 35);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(60, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 35);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID";
			// 
			// listBox1
			// 
			this->listBox1->Enabled = false;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(575, 38);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(536, 379);
			this->listBox1->TabIndex = 14;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &employeenew::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button1->Location = System::Drawing::Point(180, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &employeenew::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(149, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(131, 31);
			this->textBox1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(687, 195);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(433, 264);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &employeenew::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the password";
			// 
			// employeenew
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1203, 657);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"employeenew";
			this->Text = L"employeenew";
			this->Load += gcnew System::EventHandler(this, &employeenew::employeenew_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void search2_Click(System::Object^  sender, System::EventArgs^  e) {
				 for (int i = 0 ; i < listBox1->Items->Count ; i++)
				 {
				 String^ row=listBox1->Items[i]->ToString();
					array<Char>^ splitChars={'\t'};
			       	array<String^>^ arr;
					arr=row->Split(splitChars , StringSplitOptions::None);
					if (arr[0]==textBox2->Text)
					{
					listBox1->SelectedItem=listBox1->Items[i];
					}
								 
				 
				 
				 
				 
				 }
					}
				private: System::Void employeenew_Load(System::Object^  sender, System::EventArgs^  e) {
							  StreamReader^ sr=gcnew StreamReader("patient data.txt");
				while(!sr->EndOfStream)
				{
					listBox1->Items->Add(sr->ReadLine());
						 }
				sr->Close();
}
			 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			   if (textBox1->Text=="2222")
			 {
				 groupBox1->Hide();
				 groupBox2->Show();
			}
				   else
			 MessageBox::Show("your Password wrong please try again","error!!!!",MessageBoxButtons::OK,MessageBoxIcon::Warning);
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void exit2_Click(System::Object^  sender, System::EventArgs^  e) {
this->Close();			 
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Remove(listBox1->SelectedItem);
			  StreamWriter^ a=gcnew StreamWriter ("patient data.txt");
			 for (int i = 0 ; i< listBox1->Items->Count;i++)
			a->WriteLine(listBox1->Items[i]);
			 a->Close();
			 while (listBox1->Items->Count)
			 {
			 listBox1->Items->Remove(listBox1->Items[0]);
			 }
			 StreamReader^ n=gcnew StreamReader("patient data.txt");
			 while (!n->EndOfStream)
				 listBox1->Items->Add(n->ReadLine());
			 n->Close();
			 MessageBox::Show("your Data is Deleted","",MessageBoxButtons::OK,MessageBoxIcon::Warning);
		 }
private: System::Void update_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (listBox1->SelectedIndex!=-1)
			 {
			  String^ row=listBox1->SelectedItem->ToString();
					array<Char>^ splitChars={'\t'};
			       	array<String^>^ arr;
					arr=row->Split(splitChars , StringSplitOptions::None);
					textBox3->Text=arr[1];
					textBox4->Text=arr[2];
					textBox5->Text=arr[3];
					textBox6->Text=arr[4];
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 int index = listBox1->SelectedIndex;
			 listBox1->Items[index]=textBox2->Text+"\t"+textBox3->Text+"\t"+textBox4->Text+"\t"+textBox5->Text+"\t"+textBox6->Text;
			 StreamWriter^ a=gcnew StreamWriter ("patient data.txt");
			 for (int i = 0 ; i< listBox1->Items->Count;i++)
			a->WriteLine(listBox1->Items[i]);
			 a->Close();
			 while (listBox1->Items->Count)
			 {
			 listBox1->Items->Remove(listBox1->Items[0]);
			 }
			 StreamReader^ n=gcnew StreamReader("patient data.txt");
			 while (!n->EndOfStream)
				 listBox1->Items->Add(n->ReadLine());
			 n->Close();
			 MessageBox::Show("your Data is Updated","",MessageBoxButtons::OK,MessageBoxIcon::Warning);
		 }
};
}
