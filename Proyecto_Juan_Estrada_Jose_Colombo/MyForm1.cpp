#pragma once
#include "MyForm1.h"
#include "MyForm.h"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

using namespace ProyectoJuanEstradaJoseColombo; 
	
std::string usuario = "User";
std::string contrasena = "1234"; 

void MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (marshal_as<std::string>(tbxUusario->Text) == usuario && marshal_as<std::string>(tbxcontraseña->Text) == contrasena)
	{
		mostrar(); 
	}
	else
	{
		MessageBox::Show("El usuario ingresado es incorrecto"); 
	}
}

/*void MyForm1::cambioC(std::string* usuario, std::string* contra)
{
	
}*/

void MyForm1::mostrar()
{
	MyForm^ primerformulario = gcnew MyForm(); 
	primerformulario->Show(); 
	MyForm1::Hide(); 
}




