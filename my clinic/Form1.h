#pragma once
#include "Patient.h"
#include "employeenew.h"
#include "Doctor.h"

namespace myclinic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		public:
	public:

		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(548, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"patient";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(548, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Employee";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->button3->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(548, 369);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Doctor";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(372, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(467, 58);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome To Our Clinic";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->button4->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(548, 560);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 42);
			this->button4->TabIndex = 4;
			this->button4->Text = L"End Of The Day";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 741);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form1::Hide();
				 Patient ^ a =gcnew Patient(this);
				 a -> ShowDialog();

			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form1::Hide();
				 employeenew^ b =gcnew employeenew();
				 b-> ShowDialog();
				 this->Show();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form1::Hide();
				 Doctor ^ c =gcnew Doctor(this);
				 c -> ShowDialog();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			  StreamWriter ^File =gcnew StreamWriter("patient data.txt",true);
			 File->WriteLine("------------------------------------------------------------------------------------------------------------------------"+"\n"+"New Day");
			 File->Close();

			 StreamWriter ^File2 =gcnew StreamWriter("patient data 2.txt",true);
			 File2->WriteLine("-----------------------------------------------------------------------------------------------------------------------"+"\n"+"New Day");
			 File2->Close();

			 Application::Exit();
		 }
};
}

