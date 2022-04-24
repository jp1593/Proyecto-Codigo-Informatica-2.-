#pragma once
#include "MyForm.h"
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ProyectoJuanEstradaJoseColombo; 

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProyectoJuanEstradaJoseColombo::MyForm form;
	MyForm1^ primerform = gcnew MyForm1;
	Application::Run(primerform);
	return 0;
}

void MyForm::cerrarSesionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	cerrar(); 
}

void MyForm::cerrar()
{
	MyForm1^ segundoform = gcnew MyForm1(); 
	segundoform->Show(); 
	MyForm::Hide(); 
}


