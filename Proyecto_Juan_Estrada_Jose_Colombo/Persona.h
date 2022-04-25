#pragma once
#include <iostream>
#include <string>

class Persona
{
private: 
	std::string nombrepersona; 
	int documentoident; 
	std::string numtelefono; 
	std::string dedicacion; 
	std::string idingresado; 
	
public: 

	void setNombrepersona(std::string nombrepersona)
	{
		this->nombrepersona = nombrepersona; 
	}

	void setDocumentoident(int documentoident)
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

	void setIdIngresado(std::string id)
	{
		this->idingresado = id; 
	}

	std::string getIdIngresado()
	{
		return this->idingresado; 
	}

	std::string getNombrePersona()
	{
		return this->nombrepersona; 
	}

	int getDocumentoIdent()
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

