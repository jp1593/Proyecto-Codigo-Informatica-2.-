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

	void setCarne(std::string documentoident)
	{
		this->documentoident  = documentoident;
	}

	void setFacultad(std::string numtelefono)
	{
		this->numtelefono = numtelefono;
	}

	void setAnoencurso(std::string dedicacion)
	{
		this->dedicacion = dedicacion;
	}

	std::string getNombrePersona()
	{
		return this->nombrepersona; 
	}

	std::string getCarne()
	{
		return this->documentoident;
	}

	std::string getFacultad()
	{
		return this->numtelefono;
	}

	std::string getAnoencurso()
	{
		return this->dedicacion;
	}

};

