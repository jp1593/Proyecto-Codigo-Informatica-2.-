#pragma once
#include "MyForm.h"

namespace ProyectoJuanEstradaJoseColombo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		//MyForm^ myform;
		//Form^ obj; 
		MyForm1(void)
		{
			//myform = gcnew MyForm();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	//	MyForm1(Form^ obj1)
		//{
		//	obj = obj1; 
		//	InitializeComponent(); 
		//}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbltitusuario;
	protected:
	private: System::Windows::Forms::TextBox^ tbxUusario;
	private: System::Windows::Forms::TextBox^ tbxcontrase�a;
	private: System::Windows::Forms::Label^ lbltitcontrasena;
	private: System::Windows::Forms::Button^ button1;

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
			this->lbltitusuario = (gcnew System::Windows::Forms::Label());
			this->tbxUusario = (gcnew System::Windows::Forms::TextBox());
			this->tbxcontrase�a = (gcnew System::Windows::Forms::TextBox());
			this->lbltitcontrasena = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbltitusuario
			// 
			this->lbltitusuario->AutoSize = true;
			this->lbltitusuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltitusuario->Location = System::Drawing::Point(161, 138);
			this->lbltitusuario->Name = L"lbltitusuario";
			this->lbltitusuario->Size = System::Drawing::Size(93, 24);
			this->lbltitusuario->TabIndex = 0;
			this->lbltitusuario->Text = L"Usuario: ";
			// 
			// tbxUusario
			// 
			this->tbxUusario->Location = System::Drawing::Point(295, 138);
			this->tbxUusario->Name = L"tbxUusario";
			this->tbxUusario->Size = System::Drawing::Size(201, 20);
			this->tbxUusario->TabIndex = 1;
			// 
			// tbxcontrase�a
			// 
			this->tbxcontrase�a->Location = System::Drawing::Point(295, 193);
			this->tbxcontrase�a->Name = L"tbxcontrase�a";
			this->tbxcontrase�a->Size = System::Drawing::Size(201, 20);
			this->tbxcontrase�a->TabIndex = 2;
			// 
			// lbltitcontrasena
			// 
			this->lbltitcontrasena->AutoSize = true;
			this->lbltitcontrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltitcontrasena->Location = System::Drawing::Point(161, 188);
			this->lbltitcontrasena->Name = L"lbltitcontrasena";
			this->lbltitcontrasena->Size = System::Drawing::Size(128, 24);
			this->lbltitcontrasena->TabIndex = 3;
			this->lbltitcontrasena->Text = L"Contrase�a: ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(307, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 43);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Iniciar sesion";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(811, 506);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbltitcontrasena);
			this->Controls->Add(this->tbxcontrase�a);
			this->Controls->Add(this->tbxUusario);
			this->Controls->Add(this->lbltitusuario);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		Void button1_Click(System::Object^ sender, System::EventArgs^ e);

		 void mostrar(); 

	//	 void cambioC(std::string* u, std::string* c);

private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
