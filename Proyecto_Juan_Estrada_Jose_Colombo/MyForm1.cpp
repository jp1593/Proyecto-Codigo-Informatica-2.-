#pragma once
#include "MyForm1.h"
#include "MyForm.h"

using namespace ProyectoJuanEstradaJoseColombo; 

void MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tbxUusario->Text == "User" && tbxcontraseña->Text == "1234")
	{
		mostrar(); 
	}
	else
	{
		MessageBox::Show("El usuario ingresado es incorrecto"); 
	}
}

void MyForm1::mostrar()
{
	MyForm^ primerformulario = gcnew MyForm(); 
	primerformulario->Show(); 
	MyForm1::Hide(); 
}




