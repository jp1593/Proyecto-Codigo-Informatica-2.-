#pragma once
#include <iostream>
#include <string>

//Considerar el hacer otra clase para las personas que ingresen los libros. 

class Inventario
{
private: 
	std::string nombre; 
	std::string autor;
	std::string fecha;
	std::string edicion;
	std::string estado;
	std::string destino;
	std::string editorial;
	std::string categoria; 

public: 

	int libroingresado[5]; 

	void setNombre(std::string n)
	{
		this->nombre = n; 
	}

	void setAutor(std::string a)
	{
		this->autor = a; 
	}

	void setFecha(std::string ñ)
	{
		this->fecha = ñ; 
	}

	void setEdicion(std::string e)
	{
		this->edicion = e; 
	}

	void setEstado(std::string s)
	{
		this->estado = s; 
	}

	void setDestino(std::string d)
	{
		this->destino = d;
	}

	void setCategoria(std::string c)
	{
		this->categoria = c; 
	}

	void setEditorial(std::string edd)
	{
		this->editorial = edd; 
	}


	std::string getNombre()
	{
		return this->nombre; 
	}

	std::string getAutor()
	{
		return this->autor; 
	}

	std::string getFecha()
	{
		return this->fecha; 
	}

	std::string getEdicion()
	{
		return this->edicion; 
	}

	std::string getEstado()
	{
		return this->estado; 
	}

	std::string getDestino()
	{
		return this->destino; 
	}

	std::string getCategoria()
	{
		return this->categoria; 
	}

	std::string getEditorial()
	{
		return this->editorial; 
	}

	

};

