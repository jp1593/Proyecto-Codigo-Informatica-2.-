#pragma once
#include <iostream>
#include <string>

class Persona
{
public: 
	std::string nombrepersona; 
	std::string carne; 
	std::string facultad; 
	std::string anoencurso; 
	
private: 

	void verdatospersona()
	{
		std::string result = nombrepersona + carne + facultad + anoencurso; 
	}

	void setNombrepersona(std::string nombrepersona)
	{
		this->nombrepersona = nombrepersona; 
	}

	void setCarne(std::string carne)
	{
		this->carne = carne; 
	}

	void setFacultad(std::string facultad)
	{
		this->facultad = facultad; 
	}

	void setAnoencurso(std::string anoencurso)
	{
		this->anoencurso = anoencurso; 
	}

	std::string getNombrePersona()
	{
		return this->nombrepersona; 
	}

	std::string getCarne()
	{
		return this->carne; 
	}

	std::string getFacultad()
	{
		return this->facultad; 
	}

	std::string getAnoencurso()
	{
		return this->anoencurso; 
	}

};

