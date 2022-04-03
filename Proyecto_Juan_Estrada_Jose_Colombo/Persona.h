#pragma once
#include <iostream>
#include <string>

class Persona
{
public: 
	std::string nombrepersona; 
	std::string documentoident; 
	std::string numtelefono; 
	std::string dedicacion; 
	
private: 

	void verdatospersona()
	{
		std::string result = nombrepersona + documentoident + numtelefono + dedicacion; 
	}

	void setNombrepersona(std::string nombrepersona)
	{
		this->nombrepersona = nombrepersona; 
	}

	void setDocumentoident(std::string documentoident)
	{
		this->documentoident  = documentoident;
	}

	void setNumtelefono(std::string numtelefono)
	{
		this->numtelefono = numtelefono;
	}

	void setDedicacion(std::string dedicacion)
	{
		this->dedicacion = dedicacion;
	}

	std::string getNombrePersona()
	{
		return this->nombrepersona; 
	}

	std::string getDocumentoIdent()
	{
		return this->documentoident;
	}

	std::string getNumtelefono()
	{
		return this->numtelefono;
	}

	std::string getDedicacion()
	{
		return this->dedicacion;
	}

};

