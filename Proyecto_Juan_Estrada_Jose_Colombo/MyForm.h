#pragma once
#include <iostream>
#include <string>
#include "Inventario.h"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

namespace ProyectoJuanEstradaJoseColombo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	Inventario libro[5]; 
	int cont = 0; 


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ libroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ingresarLibroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarLibroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ visualizarLibroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eliminarLibroToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ gpbxingreso;
	private: System::Windows::Forms::Label^ lbltitfecha;
	private: System::Windows::Forms::Label^ lbltitautor;
	private: System::Windows::Forms::Label^ lbltitnombre;
	private: System::Windows::Forms::ComboBox^ cmbdestino;

	private: System::Windows::Forms::ComboBox^ cmbestado;
	private: System::Windows::Forms::TextBox^ tbxedicion;
	private: System::Windows::Forms::DateTimePicker^ datetimepfecha;
	private: System::Windows::Forms::TextBox^ tbxautor;
	private: System::Windows::Forms::TextBox^ tbxnombre;
	private: System::Windows::Forms::Label^ lbltitdestino;
	private: System::Windows::Forms::Label^ lbltitestado;
	private: System::Windows::Forms::Label^ lbltitedicion;
	private: System::Windows::Forms::Button^ btnguardar;
	private: System::Windows::Forms::GroupBox^ gpbVisualizar;
	private: System::Windows::Forms::Label^ lbltitestadoVisualizar;

	private: System::Windows::Forms::Label^ lbltitedicionVisualizar;
	private: System::Windows::Forms::Label^ lbltitfechaVisualizar;
	private: System::Windows::Forms::Label^ lbltitautorVisualizar;
	private: System::Windows::Forms::Label^ lblnombreVisualizar;
	private: System::Windows::Forms::Label^ lbltitrefrenciadelibrovisualizar;
	private: System::Windows::Forms::Label^ lblresultdestinoVisualizar;
	private: System::Windows::Forms::Label^ lblresultestadoVisualizar;
	private: System::Windows::Forms::Label^ lblresultedicionVisualizar;
	private: System::Windows::Forms::Label^ lblresultfechaVisualizar;
	private: System::Windows::Forms::Label^ lblresultautorVisualizar;
	private: System::Windows::Forms::Label^ lblresultnombreVisualizar;
	private: System::Windows::Forms::Label^ lbltitdestinoVisualizar;
	private: System::Windows::Forms::Button^ btnvisualizar;
	private: System::Windows::Forms::TextBox^ tbxvreferenciaVisualizar;
	private: System::Windows::Forms::GroupBox^ gpbeliminar;
	private: System::Windows::Forms::Button^ btneliminar;


	private: System::Windows::Forms::Label^ lblresultnombreEliminar;
	private: System::Windows::Forms::Label^ lbltitnombreeliminar;
	private: System::Windows::Forms::TextBox^ tbxvalorreferenciaEliminar;
	private: System::Windows::Forms::Label^ lbltitvreferencia;
	private: System::Windows::Forms::GroupBox^ gpbmodificar;
	private: System::Windows::Forms::ComboBox^ cmbdestinoModificar;
	private: System::Windows::Forms::ComboBox^ cmbestadoModificar;
	private: System::Windows::Forms::TextBox^ tbxedicionModificar;
	private: System::Windows::Forms::DateTimePicker^ datetimepfechaModificar;
	private: System::Windows::Forms::TextBox^ tbxautorModificar;
	private: System::Windows::Forms::TextBox^ tbxnombreModificar;
	private: System::Windows::Forms::TextBox^ tbxvalorreferenciaModificar;
	private: System::Windows::Forms::Label^ lbltitdestinoModificar;
	private: System::Windows::Forms::Label^ lbltitestadoModificar;
	private: System::Windows::Forms::Label^ lbltitedicionModificar;
	private: System::Windows::Forms::Label^ lbltitfechaModificar;
	private: System::Windows::Forms::Label^ lbltitautorModificar;
	private: System::Windows::Forms::Label^ lbltitnombreModificar;
	private: System::Windows::Forms::Label^ lbltitvreferenciaModificar;
	private: System::Windows::Forms::Button^ btnmodificar;
	private: System::Windows::Forms::TextBox^ tbxeditorial;
	private: System::Windows::Forms::Label^ lbleditorial;
	private: System::Windows::Forms::Label^ lblcategoria;
	private: System::Windows::Forms::Label^ lblresultcatgoriaVisualizar;
	private: System::Windows::Forms::Label^ lbltitcategoriaVisualizar;
	private: System::Windows::Forms::Label^ lblresulteditorialVisualizar;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbcategoria;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ controlDeLibrosToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dtgvcontrol;








private: System::Windows::Forms::Label^ lbltitcategoriaModificar;
private: System::Windows::Forms::ComboBox^ cmbcategoriaModificar;
private: System::Windows::Forms::TextBox^ tbxeditorialModificar;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headnombre;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headautor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headfecha;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headedicion;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headestado;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headdestino;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headeditorial;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headcategoria;





	protected:









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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->libroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ingresarLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualizarLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->controlDeLibrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gpbxingreso = (gcnew System::Windows::Forms::GroupBox());
			this->cmbcategoria = (gcnew System::Windows::Forms::ComboBox());
			this->tbxeditorial = (gcnew System::Windows::Forms::TextBox());
			this->lbleditorial = (gcnew System::Windows::Forms::Label());
			this->lblcategoria = (gcnew System::Windows::Forms::Label());
			this->btnguardar = (gcnew System::Windows::Forms::Button());
			this->cmbdestino = (gcnew System::Windows::Forms::ComboBox());
			this->cmbestado = (gcnew System::Windows::Forms::ComboBox());
			this->tbxedicion = (gcnew System::Windows::Forms::TextBox());
			this->datetimepfecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbxautor = (gcnew System::Windows::Forms::TextBox());
			this->tbxnombre = (gcnew System::Windows::Forms::TextBox());
			this->lbltitdestino = (gcnew System::Windows::Forms::Label());
			this->lbltitestado = (gcnew System::Windows::Forms::Label());
			this->lbltitedicion = (gcnew System::Windows::Forms::Label());
			this->lbltitfecha = (gcnew System::Windows::Forms::Label());
			this->lbltitautor = (gcnew System::Windows::Forms::Label());
			this->lbltitnombre = (gcnew System::Windows::Forms::Label());
			this->gpbVisualizar = (gcnew System::Windows::Forms::GroupBox());
			this->lblresulteditorialVisualizar = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblresultcatgoriaVisualizar = (gcnew System::Windows::Forms::Label());
			this->lbltitcategoriaVisualizar = (gcnew System::Windows::Forms::Label());
			this->tbxvreferenciaVisualizar = (gcnew System::Windows::Forms::TextBox());
			this->btnvisualizar = (gcnew System::Windows::Forms::Button());
			this->lblresultdestinoVisualizar = (gcnew System::Windows::Forms::Label());
			this->lblresultestadoVisualizar = (gcnew System::Windows::Forms::Label());
			this->lblresultedicionVisualizar = (gcnew System::Windows::Forms::Label());
			this->lblresultfechaVisualizar = (gcnew System::Windows::Forms::Label());
			this->lblresultautorVisualizar = (gcnew System::Windows::Forms::Label());
			this->lblresultnombreVisualizar = (gcnew System::Windows::Forms::Label());
			this->lbltitdestinoVisualizar = (gcnew System::Windows::Forms::Label());
			this->lbltitestadoVisualizar = (gcnew System::Windows::Forms::Label());
			this->lbltitedicionVisualizar = (gcnew System::Windows::Forms::Label());
			this->lbltitfechaVisualizar = (gcnew System::Windows::Forms::Label());
			this->lbltitautorVisualizar = (gcnew System::Windows::Forms::Label());
			this->lblnombreVisualizar = (gcnew System::Windows::Forms::Label());
			this->lbltitrefrenciadelibrovisualizar = (gcnew System::Windows::Forms::Label());
			this->gpbeliminar = (gcnew System::Windows::Forms::GroupBox());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->lblresultnombreEliminar = (gcnew System::Windows::Forms::Label());
			this->lbltitnombreeliminar = (gcnew System::Windows::Forms::Label());
			this->tbxvalorreferenciaEliminar = (gcnew System::Windows::Forms::TextBox());
			this->lbltitvreferencia = (gcnew System::Windows::Forms::Label());
			this->gpbmodificar = (gcnew System::Windows::Forms::GroupBox());
			this->lbltitcategoriaModificar = (gcnew System::Windows::Forms::Label());
			this->cmbcategoriaModificar = (gcnew System::Windows::Forms::ComboBox());
			this->tbxeditorialModificar = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnmodificar = (gcnew System::Windows::Forms::Button());
			this->cmbdestinoModificar = (gcnew System::Windows::Forms::ComboBox());
			this->cmbestadoModificar = (gcnew System::Windows::Forms::ComboBox());
			this->tbxedicionModificar = (gcnew System::Windows::Forms::TextBox());
			this->datetimepfechaModificar = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbxautorModificar = (gcnew System::Windows::Forms::TextBox());
			this->tbxnombreModificar = (gcnew System::Windows::Forms::TextBox());
			this->tbxvalorreferenciaModificar = (gcnew System::Windows::Forms::TextBox());
			this->lbltitdestinoModificar = (gcnew System::Windows::Forms::Label());
			this->lbltitestadoModificar = (gcnew System::Windows::Forms::Label());
			this->lbltitedicionModificar = (gcnew System::Windows::Forms::Label());
			this->lbltitfechaModificar = (gcnew System::Windows::Forms::Label());
			this->lbltitautorModificar = (gcnew System::Windows::Forms::Label());
			this->lbltitnombreModificar = (gcnew System::Windows::Forms::Label());
			this->lbltitvreferenciaModificar = (gcnew System::Windows::Forms::Label());
			this->dtgvcontrol = (gcnew System::Windows::Forms::DataGridView());
			this->headnombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headautor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headfecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headedicion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headestado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headdestino = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headeditorial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headcategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->gpbxingreso->SuspendLayout();
			this->gpbVisualizar->SuspendLayout();
			this->gpbeliminar->SuspendLayout();
			this->gpbmodificar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgvcontrol))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->libroToolStripMenuItem,
					this->reportesToolStripMenuItem, this->controlDeLibrosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1482, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// libroToolStripMenuItem
			// 
			this->libroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ingresarLibroToolStripMenuItem,
					this->modificarLibroToolStripMenuItem, this->visualizarLibroToolStripMenuItem, this->eliminarLibroToolStripMenuItem
			});
			this->libroToolStripMenuItem->Name = L"libroToolStripMenuItem";
			this->libroToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->libroToolStripMenuItem->Text = L"Libro";
			// 
			// ingresarLibroToolStripMenuItem
			// 
			this->ingresarLibroToolStripMenuItem->Name = L"ingresarLibroToolStripMenuItem";
			this->ingresarLibroToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ingresarLibroToolStripMenuItem->Text = L"Ingresar libro";
			this->ingresarLibroToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ingresarLibroToolStripMenuItem_Click);
			// 
			// modificarLibroToolStripMenuItem
			// 
			this->modificarLibroToolStripMenuItem->Name = L"modificarLibroToolStripMenuItem";
			this->modificarLibroToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->modificarLibroToolStripMenuItem->Text = L"Modificar libro";
			this->modificarLibroToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::modificarLibroToolStripMenuItem_Click);
			// 
			// visualizarLibroToolStripMenuItem
			// 
			this->visualizarLibroToolStripMenuItem->Name = L"visualizarLibroToolStripMenuItem";
			this->visualizarLibroToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->visualizarLibroToolStripMenuItem->Text = L"Visualizar libro";
			this->visualizarLibroToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::visualizarLibroToolStripMenuItem_Click);
			// 
			// eliminarLibroToolStripMenuItem
			// 
			this->eliminarLibroToolStripMenuItem->Name = L"eliminarLibroToolStripMenuItem";
			this->eliminarLibroToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->eliminarLibroToolStripMenuItem->Text = L"Eliminar libro";
			this->eliminarLibroToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eliminarLibroToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// controlDeLibrosToolStripMenuItem
			// 
			this->controlDeLibrosToolStripMenuItem->Name = L"controlDeLibrosToolStripMenuItem";
			this->controlDeLibrosToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->controlDeLibrosToolStripMenuItem->Text = L"Control de libros";
			this->controlDeLibrosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::controlDeLibrosToolStripMenuItem_Click);
			// 
			// gpbxingreso
			// 
			this->gpbxingreso->Controls->Add(this->cmbcategoria);
			this->gpbxingreso->Controls->Add(this->tbxeditorial);
			this->gpbxingreso->Controls->Add(this->lbleditorial);
			this->gpbxingreso->Controls->Add(this->lblcategoria);
			this->gpbxingreso->Controls->Add(this->btnguardar);
			this->gpbxingreso->Controls->Add(this->cmbdestino);
			this->gpbxingreso->Controls->Add(this->cmbestado);
			this->gpbxingreso->Controls->Add(this->tbxedicion);
			this->gpbxingreso->Controls->Add(this->datetimepfecha);
			this->gpbxingreso->Controls->Add(this->tbxautor);
			this->gpbxingreso->Controls->Add(this->tbxnombre);
			this->gpbxingreso->Controls->Add(this->lbltitdestino);
			this->gpbxingreso->Controls->Add(this->lbltitestado);
			this->gpbxingreso->Controls->Add(this->lbltitedicion);
			this->gpbxingreso->Controls->Add(this->lbltitfecha);
			this->gpbxingreso->Controls->Add(this->lbltitautor);
			this->gpbxingreso->Controls->Add(this->lbltitnombre);
			this->gpbxingreso->Location = System::Drawing::Point(12, 343);
			this->gpbxingreso->Name = L"gpbxingreso";
			this->gpbxingreso->Size = System::Drawing::Size(724, 314);
			this->gpbxingreso->TabIndex = 1;
			this->gpbxingreso->TabStop = false;
			this->gpbxingreso->Text = L"Ingreso de libro";
			this->gpbxingreso->Visible = false;
			// 
			// cmbcategoria
			// 
			this->cmbcategoria->FormattingEnabled = true;
			this->cmbcategoria->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"De texto", L"Complementario", L"Consulta o referencia",
					L"Recreativo", L"Cientifico", L"Instructivo", L"Literariosy linguistico", L"Tecnico", L"Informativos", L"Divulgacion", L"Religioso",
					L"Ilustrado", L"Electronico", L"Poetico", L"Biografico", L"Material auxiliar", L"Didactico", L"Viaje", L"Artistico", L"Autoestima"
			});
			this->cmbcategoria->Location = System::Drawing::Point(183, 257);
			this->cmbcategoria->Name = L"cmbcategoria";
			this->cmbcategoria->Size = System::Drawing::Size(174, 21);
			this->cmbcategoria->TabIndex = 17;
			// 
			// tbxeditorial
			// 
			this->tbxeditorial->Location = System::Drawing::Point(183, 168);
			this->tbxeditorial->Name = L"tbxeditorial";
			this->tbxeditorial->Size = System::Drawing::Size(474, 20);
			this->tbxeditorial->TabIndex = 16;
			// 
			// lbleditorial
			// 
			this->lbleditorial->AutoSize = true;
			this->lbleditorial->Location = System::Drawing::Point(18, 168);
			this->lbleditorial->Name = L"lbleditorial";
			this->lbleditorial->Size = System::Drawing::Size(47, 13);
			this->lbleditorial->TabIndex = 15;
			this->lbleditorial->Text = L"Editorial:";
			// 
			// lblcategoria
			// 
			this->lblcategoria->AutoSize = true;
			this->lblcategoria->Location = System::Drawing::Point(19, 265);
			this->lblcategoria->Name = L"lblcategoria";
			this->lblcategoria->Size = System::Drawing::Size(55, 13);
			this->lblcategoria->TabIndex = 14;
			this->lblcategoria->Text = L"Categoria:";
			// 
			// btnguardar
			// 
			this->btnguardar->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btnguardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnguardar->ForeColor = System::Drawing::Color::RoyalBlue;
			this->btnguardar->Location = System::Drawing::Point(570, 249);
			this->btnguardar->Name = L"btnguardar";
			this->btnguardar->Size = System::Drawing::Size(115, 33);
			this->btnguardar->TabIndex = 13;
			this->btnguardar->Text = L"Guardar libro";
			this->btnguardar->UseVisualStyleBackColor = false;
			this->btnguardar->Click += gcnew System::EventHandler(this, &MyForm::btnguardar_Click);
			// 
			// cmbdestino
			// 
			this->cmbdestino->FormattingEnabled = true;
			this->cmbdestino->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ingreso a biblioteca", L"Reciclaje ", L"Seccion tome 1" });
			this->cmbdestino->Location = System::Drawing::Point(183, 227);
			this->cmbdestino->Name = L"cmbdestino";
			this->cmbdestino->Size = System::Drawing::Size(174, 21);
			this->cmbdestino->TabIndex = 12;
			// 
			// cmbestado
			// 
			this->cmbestado->FormattingEnabled = true;
			this->cmbestado->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bueno", L"Decente", L"Deteriorado", L"Malo" });
			this->cmbestado->Location = System::Drawing::Point(183, 193);
			this->cmbestado->Name = L"cmbestado";
			this->cmbestado->Size = System::Drawing::Size(174, 21);
			this->cmbestado->TabIndex = 11;
			// 
			// tbxedicion
			// 
			this->tbxedicion->Location = System::Drawing::Point(183, 137);
			this->tbxedicion->Name = L"tbxedicion";
			this->tbxedicion->Size = System::Drawing::Size(474, 20);
			this->tbxedicion->TabIndex = 10;
			// 
			// datetimepfecha
			// 
			this->datetimepfecha->Location = System::Drawing::Point(183, 97);
			this->datetimepfecha->Name = L"datetimepfecha";
			this->datetimepfecha->Size = System::Drawing::Size(474, 20);
			this->datetimepfecha->TabIndex = 9;
			// 
			// tbxautor
			// 
			this->tbxautor->Location = System::Drawing::Point(183, 68);
			this->tbxautor->Name = L"tbxautor";
			this->tbxautor->Size = System::Drawing::Size(474, 20);
			this->tbxautor->TabIndex = 7;
			// 
			// tbxnombre
			// 
			this->tbxnombre->Location = System::Drawing::Point(183, 31);
			this->tbxnombre->Name = L"tbxnombre";
			this->tbxnombre->Size = System::Drawing::Size(474, 20);
			this->tbxnombre->TabIndex = 6;
			// 
			// lbltitdestino
			// 
			this->lbltitdestino->AutoSize = true;
			this->lbltitdestino->Location = System::Drawing::Point(19, 235);
			this->lbltitdestino->Name = L"lbltitdestino";
			this->lbltitdestino->Size = System::Drawing::Size(46, 13);
			this->lbltitdestino->TabIndex = 5;
			this->lbltitdestino->Text = L"Destino:";
			// 
			// lbltitestado
			// 
			this->lbltitestado->AutoSize = true;
			this->lbltitestado->Location = System::Drawing::Point(19, 201);
			this->lbltitestado->Name = L"lbltitestado";
			this->lbltitestado->Size = System::Drawing::Size(46, 13);
			this->lbltitestado->TabIndex = 4;
			this->lbltitestado->Text = L"Estado: ";
			// 
			// lbltitedicion
			// 
			this->lbltitedicion->AutoSize = true;
			this->lbltitedicion->Location = System::Drawing::Point(19, 137);
			this->lbltitedicion->Name = L"lbltitedicion";
			this->lbltitedicion->Size = System::Drawing::Size(87, 13);
			this->lbltitedicion->TabIndex = 3;
			this->lbltitedicion->Text = L"Edicion del libro: ";
			// 
			// lbltitfecha
			// 
			this->lbltitfecha->AutoSize = true;
			this->lbltitfecha->Location = System::Drawing::Point(19, 103);
			this->lbltitfecha->Name = L"lbltitfecha";
			this->lbltitfecha->Size = System::Drawing::Size(115, 13);
			this->lbltitfecha->TabIndex = 2;
			this->lbltitfecha->Text = L"Fecha de publicacion: ";
			// 
			// lbltitautor
			// 
			this->lbltitautor->AutoSize = true;
			this->lbltitautor->Location = System::Drawing::Point(19, 68);
			this->lbltitautor->Name = L"lbltitautor";
			this->lbltitautor->Size = System::Drawing::Size(77, 13);
			this->lbltitautor->TabIndex = 1;
			this->lbltitautor->Text = L"Autor del libro: ";
			// 
			// lbltitnombre
			// 
			this->lbltitnombre->AutoSize = true;
			this->lbltitnombre->Location = System::Drawing::Point(19, 31);
			this->lbltitnombre->Name = L"lbltitnombre";
			this->lbltitnombre->Size = System::Drawing::Size(86, 13);
			this->lbltitnombre->TabIndex = 0;
			this->lbltitnombre->Text = L"Nombre del libro:";
			// 
			// gpbVisualizar
			// 
			this->gpbVisualizar->Controls->Add(this->lblresulteditorialVisualizar);
			this->gpbVisualizar->Controls->Add(this->label1);
			this->gpbVisualizar->Controls->Add(this->lblresultcatgoriaVisualizar);
			this->gpbVisualizar->Controls->Add(this->lbltitcategoriaVisualizar);
			this->gpbVisualizar->Controls->Add(this->tbxvreferenciaVisualizar);
			this->gpbVisualizar->Controls->Add(this->btnvisualizar);
			this->gpbVisualizar->Controls->Add(this->lblresultdestinoVisualizar);
			this->gpbVisualizar->Controls->Add(this->lblresultestadoVisualizar);
			this->gpbVisualizar->Controls->Add(this->lblresultedicionVisualizar);
			this->gpbVisualizar->Controls->Add(this->lblresultfechaVisualizar);
			this->gpbVisualizar->Controls->Add(this->lblresultautorVisualizar);
			this->gpbVisualizar->Controls->Add(this->lblresultnombreVisualizar);
			this->gpbVisualizar->Controls->Add(this->lbltitdestinoVisualizar);
			this->gpbVisualizar->Controls->Add(this->lbltitestadoVisualizar);
			this->gpbVisualizar->Controls->Add(this->lbltitedicionVisualizar);
			this->gpbVisualizar->Controls->Add(this->lbltitfechaVisualizar);
			this->gpbVisualizar->Controls->Add(this->lbltitautorVisualizar);
			this->gpbVisualizar->Controls->Add(this->lblnombreVisualizar);
			this->gpbVisualizar->Controls->Add(this->lbltitrefrenciadelibrovisualizar);
			this->gpbVisualizar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpbVisualizar->Location = System::Drawing::Point(24, 37);
			this->gpbVisualizar->Name = L"gpbVisualizar";
			this->gpbVisualizar->Size = System::Drawing::Size(647, 324);
			this->gpbVisualizar->TabIndex = 2;
			this->gpbVisualizar->TabStop = false;
			this->gpbVisualizar->Text = L"Visualizar libro ";
			this->gpbVisualizar->Visible = false;
			this->gpbVisualizar->Enter += gcnew System::EventHandler(this, &MyForm::gpbVisualizar_Enter);
			// 
			// lblresulteditorialVisualizar
			// 
			this->lblresulteditorialVisualizar->AutoSize = true;
			this->lblresulteditorialVisualizar->Location = System::Drawing::Point(161, 262);
			this->lblresulteditorialVisualizar->Name = L"lblresulteditorialVisualizar";
			this->lblresulteditorialVisualizar->Size = System::Drawing::Size(0, 13);
			this->lblresulteditorialVisualizar->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 262);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Editorial: ";
			// 
			// lblresultcatgoriaVisualizar
			// 
			this->lblresultcatgoriaVisualizar->AutoSize = true;
			this->lblresultcatgoriaVisualizar->Location = System::Drawing::Point(161, 230);
			this->lblresultcatgoriaVisualizar->Name = L"lblresultcatgoriaVisualizar";
			this->lblresultcatgoriaVisualizar->Size = System::Drawing::Size(0, 13);
			this->lblresultcatgoriaVisualizar->TabIndex = 16;
			// 
			// lbltitcategoriaVisualizar
			// 
			this->lbltitcategoriaVisualizar->AutoSize = true;
			this->lbltitcategoriaVisualizar->Location = System::Drawing::Point(15, 231);
			this->lbltitcategoriaVisualizar->Name = L"lbltitcategoriaVisualizar";
			this->lbltitcategoriaVisualizar->Size = System::Drawing::Size(55, 13);
			this->lbltitcategoriaVisualizar->TabIndex = 15;
			this->lbltitcategoriaVisualizar->Text = L"Categoria:";
			// 
			// tbxvreferenciaVisualizar
			// 
			this->tbxvreferenciaVisualizar->Location = System::Drawing::Point(368, 31);
			this->tbxvreferenciaVisualizar->Name = L"tbxvreferenciaVisualizar";
			this->tbxvreferenciaVisualizar->Size = System::Drawing::Size(100, 20);
			this->tbxvreferenciaVisualizar->TabIndex = 14;
			// 
			// btnvisualizar
			// 
			this->btnvisualizar->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btnvisualizar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnvisualizar->ForeColor = System::Drawing::Color::Green;
			this->btnvisualizar->Location = System::Drawing::Point(501, 269);
			this->btnvisualizar->Name = L"btnvisualizar";
			this->btnvisualizar->Size = System::Drawing::Size(116, 31);
			this->btnvisualizar->TabIndex = 13;
			this->btnvisualizar->Text = L"Visualizar libro";
			this->btnvisualizar->UseVisualStyleBackColor = false;
			this->btnvisualizar->Click += gcnew System::EventHandler(this, &MyForm::btnvisualizar_Click);
			// 
			// lblresultdestinoVisualizar
			// 
			this->lblresultdestinoVisualizar->AutoSize = true;
			this->lblresultdestinoVisualizar->Location = System::Drawing::Point(161, 206);
			this->lblresultdestinoVisualizar->Name = L"lblresultdestinoVisualizar";
			this->lblresultdestinoVisualizar->Size = System::Drawing::Size(0, 13);
			this->lblresultdestinoVisualizar->TabIndex = 12;
			// 
			// lblresultestadoVisualizar
			// 
			this->lblresultestadoVisualizar->AutoSize = true;
			this->lblresultestadoVisualizar->Location = System::Drawing::Point(161, 178);
			this->lblresultestadoVisualizar->Name = L"lblresultestadoVisualizar";
			this->lblresultestadoVisualizar->Size = System::Drawing::Size(0, 13);
			this->lblresultestadoVisualizar->TabIndex = 11;
			// 
			// lblresultedicionVisualizar
			// 
			this->lblresultedicionVisualizar->AutoSize = true;
			this->lblresultedicionVisualizar->Location = System::Drawing::Point(161, 152);
			this->lblresultedicionVisualizar->Name = L"lblresultedicionVisualizar";
			this->lblresultedicionVisualizar->Size = System::Drawing::Size(0, 13);
			this->lblresultedicionVisualizar->TabIndex = 10;
			// 
			// lblresultfechaVisualizar
			// 
			this->lblresultfechaVisualizar->AutoSize = true;
			this->lblresultfechaVisualizar->Location = System::Drawing::Point(161, 127);
			this->lblresultfechaVisualizar->Name = L"lblresultfechaVisualizar";
			this->lblresultfechaVisualizar->Size = System::Drawing::Size(0, 13);
			this->lblresultfechaVisualizar->TabIndex = 9;
			// 
			// lblresultautorVisualizar
			// 
			this->lblresultautorVisualizar->AutoSize = true;
			this->lblresultautorVisualizar->Location = System::Drawing::Point(161, 99);
			this->lblresultautorVisualizar->Name = L"lblresultautorVisualizar";
			this->lblresultautorVisualizar->Size = System::Drawing::Size(0, 13);
			this->lblresultautorVisualizar->TabIndex = 8;
			// 
			// lblresultnombreVisualizar
			// 
			this->lblresultnombreVisualizar->AutoSize = true;
			this->lblresultnombreVisualizar->Location = System::Drawing::Point(161, 68);
			this->lblresultnombreVisualizar->Name = L"lblresultnombreVisualizar";
			this->lblresultnombreVisualizar->Size = System::Drawing::Size(0, 13);
			this->lblresultnombreVisualizar->TabIndex = 7;
			// 
			// lbltitdestinoVisualizar
			// 
			this->lbltitdestinoVisualizar->AutoSize = true;
			this->lbltitdestinoVisualizar->Location = System::Drawing::Point(15, 206);
			this->lbltitdestinoVisualizar->Name = L"lbltitdestinoVisualizar";
			this->lbltitdestinoVisualizar->Size = System::Drawing::Size(49, 13);
			this->lbltitdestinoVisualizar->TabIndex = 6;
			this->lbltitdestinoVisualizar->Text = L"Destino: ";
			// 
			// lbltitestadoVisualizar
			// 
			this->lbltitestadoVisualizar->AutoSize = true;
			this->lbltitestadoVisualizar->Location = System::Drawing::Point(15, 178);
			this->lbltitestadoVisualizar->Name = L"lbltitestadoVisualizar";
			this->lbltitestadoVisualizar->Size = System::Drawing::Size(46, 13);
			this->lbltitestadoVisualizar->TabIndex = 5;
			this->lbltitestadoVisualizar->Text = L"Estado: ";
			this->lbltitestadoVisualizar->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// lbltitedicionVisualizar
			// 
			this->lbltitedicionVisualizar->AutoSize = true;
			this->lbltitedicionVisualizar->Location = System::Drawing::Point(15, 152);
			this->lbltitedicionVisualizar->Name = L"lbltitedicionVisualizar";
			this->lbltitedicionVisualizar->Size = System::Drawing::Size(48, 13);
			this->lbltitedicionVisualizar->TabIndex = 4;
			this->lbltitedicionVisualizar->Text = L"Edicion: ";
			// 
			// lbltitfechaVisualizar
			// 
			this->lbltitfechaVisualizar->AutoSize = true;
			this->lbltitfechaVisualizar->Location = System::Drawing::Point(15, 127);
			this->lbltitfechaVisualizar->Name = L"lbltitfechaVisualizar";
			this->lbltitfechaVisualizar->Size = System::Drawing::Size(115, 13);
			this->lbltitfechaVisualizar->TabIndex = 3;
			this->lbltitfechaVisualizar->Text = L"Fecha de publicación: ";
			// 
			// lbltitautorVisualizar
			// 
			this->lbltitautorVisualizar->AutoSize = true;
			this->lbltitautorVisualizar->Location = System::Drawing::Point(15, 99);
			this->lbltitautorVisualizar->Name = L"lbltitautorVisualizar";
			this->lbltitautorVisualizar->Size = System::Drawing::Size(38, 13);
			this->lbltitautorVisualizar->TabIndex = 2;
			this->lbltitautorVisualizar->Text = L"Autor: ";
			// 
			// lblnombreVisualizar
			// 
			this->lblnombreVisualizar->AutoSize = true;
			this->lblnombreVisualizar->Location = System::Drawing::Point(15, 68);
			this->lblnombreVisualizar->Name = L"lblnombreVisualizar";
			this->lblnombreVisualizar->Size = System::Drawing::Size(50, 13);
			this->lblnombreVisualizar->TabIndex = 1;
			this->lblnombreVisualizar->Text = L"Nombre: ";
			// 
			// lbltitrefrenciadelibrovisualizar
			// 
			this->lbltitrefrenciadelibrovisualizar->AutoSize = true;
			this->lbltitrefrenciadelibrovisualizar->Location = System::Drawing::Point(12, 31);
			this->lbltitrefrenciadelibrovisualizar->Name = L"lbltitrefrenciadelibrovisualizar";
			this->lbltitrefrenciadelibrovisualizar->Size = System::Drawing::Size(318, 13);
			this->lbltitrefrenciadelibrovisualizar->TabIndex = 0;
			this->lbltitrefrenciadelibrovisualizar->Text = L"Ingrese el valor correspondiente a su libro al momento de ingreso: ";
			// 
			// gpbeliminar
			// 
			this->gpbeliminar->Controls->Add(this->btneliminar);
			this->gpbeliminar->Controls->Add(this->lblresultnombreEliminar);
			this->gpbeliminar->Controls->Add(this->lbltitnombreeliminar);
			this->gpbeliminar->Controls->Add(this->tbxvalorreferenciaEliminar);
			this->gpbeliminar->Controls->Add(this->lbltitvreferencia);
			this->gpbeliminar->Location = System::Drawing::Point(719, 23);
			this->gpbeliminar->Name = L"gpbeliminar";
			this->gpbeliminar->Size = System::Drawing::Size(529, 164);
			this->gpbeliminar->TabIndex = 3;
			this->gpbeliminar->TabStop = false;
			this->gpbeliminar->Text = L"Eliminar libro";
			this->gpbeliminar->Visible = false;
			// 
			// btneliminar
			// 
			this->btneliminar->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btneliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btneliminar->ForeColor = System::Drawing::Color::Red;
			this->btneliminar->Location = System::Drawing::Point(220, 113);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(102, 31);
			this->btneliminar->TabIndex = 4;
			this->btneliminar->Text = L"Eliminar libro";
			this->btneliminar->UseVisualStyleBackColor = false;
			this->btneliminar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblresultnombreEliminar
			// 
			this->lblresultnombreEliminar->AutoSize = true;
			this->lblresultnombreEliminar->Location = System::Drawing::Point(167, 61);
			this->lblresultnombreEliminar->Name = L"lblresultnombreEliminar";
			this->lblresultnombreEliminar->Size = System::Drawing::Size(0, 13);
			this->lblresultnombreEliminar->TabIndex = 3;
			// 
			// lbltitnombreeliminar
			// 
			this->lbltitnombreeliminar->AutoSize = true;
			this->lbltitnombreeliminar->Location = System::Drawing::Point(22, 61);
			this->lbltitnombreeliminar->Name = L"lbltitnombreeliminar";
			this->lbltitnombreeliminar->Size = System::Drawing::Size(105, 13);
			this->lbltitnombreeliminar->TabIndex = 2;
			this->lbltitnombreeliminar->Text = L"El libro a eliminar es: ";
			// 
			// tbxvalorreferenciaEliminar
			// 
			this->tbxvalorreferenciaEliminar->Location = System::Drawing::Point(362, 28);
			this->tbxvalorreferenciaEliminar->Name = L"tbxvalorreferenciaEliminar";
			this->tbxvalorreferenciaEliminar->Size = System::Drawing::Size(100, 20);
			this->tbxvalorreferenciaEliminar->TabIndex = 1;
			// 
			// lbltitvreferencia
			// 
			this->lbltitvreferencia->AutoSize = true;
			this->lbltitvreferencia->Location = System::Drawing::Point(19, 28);
			this->lbltitvreferencia->Name = L"lbltitvreferencia";
			this->lbltitvreferencia->Size = System::Drawing::Size(321, 13);
			this->lbltitvreferencia->TabIndex = 0;
			this->lbltitvreferencia->Text = L"Ingrese el valor de su libro correspondiente al momento de ingreso:";
			// 
			// gpbmodificar
			// 
			this->gpbmodificar->Controls->Add(this->lbltitcategoriaModificar);
			this->gpbmodificar->Controls->Add(this->cmbcategoriaModificar);
			this->gpbmodificar->Controls->Add(this->tbxeditorialModificar);
			this->gpbmodificar->Controls->Add(this->label2);
			this->gpbmodificar->Controls->Add(this->btnmodificar);
			this->gpbmodificar->Controls->Add(this->cmbdestinoModificar);
			this->gpbmodificar->Controls->Add(this->cmbestadoModificar);
			this->gpbmodificar->Controls->Add(this->tbxedicionModificar);
			this->gpbmodificar->Controls->Add(this->datetimepfechaModificar);
			this->gpbmodificar->Controls->Add(this->tbxautorModificar);
			this->gpbmodificar->Controls->Add(this->tbxnombreModificar);
			this->gpbmodificar->Controls->Add(this->tbxvalorreferenciaModificar);
			this->gpbmodificar->Controls->Add(this->lbltitdestinoModificar);
			this->gpbmodificar->Controls->Add(this->lbltitestadoModificar);
			this->gpbmodificar->Controls->Add(this->lbltitedicionModificar);
			this->gpbmodificar->Controls->Add(this->lbltitfechaModificar);
			this->gpbmodificar->Controls->Add(this->lbltitautorModificar);
			this->gpbmodificar->Controls->Add(this->lbltitnombreModificar);
			this->gpbmodificar->Controls->Add(this->lbltitvreferenciaModificar);
			this->gpbmodificar->Location = System::Drawing::Point(742, 45);
			this->gpbmodificar->Name = L"gpbmodificar";
			this->gpbmodificar->Size = System::Drawing::Size(724, 379);
			this->gpbmodificar->TabIndex = 4;
			this->gpbmodificar->TabStop = false;
			this->gpbmodificar->Text = L"Modificar libro ingresado";
			this->gpbmodificar->Visible = false;
			// 
			// lbltitcategoriaModificar
			// 
			this->lbltitcategoriaModificar->AutoSize = true;
			this->lbltitcategoriaModificar->Location = System::Drawing::Point(13, 303);
			this->lbltitcategoriaModificar->Name = L"lbltitcategoriaModificar";
			this->lbltitcategoriaModificar->Size = System::Drawing::Size(109, 13);
			this->lbltitcategoriaModificar->TabIndex = 18;
			this->lbltitcategoriaModificar->Text = L"(Correcion) Categoria:";
			// 
			// cmbcategoriaModificar
			// 
			this->cmbcategoriaModificar->FormattingEnabled = true;
			this->cmbcategoriaModificar->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"De texto", L"Complementario", L"Consulta o referencia",
					L"Recreativo", L"Cientifico", L"Instructivo", L"Literariosy linguistico", L"Tecnico", L"Informativos", L"Divulgacion", L"Religioso",
					L"Ilustrado", L"Electronico", L"Poetico", L"Biografico", L"Material auxiliar", L"Didactico", L"Viaje", L"Artistico", L"Autoestima"
			});
			this->cmbcategoriaModificar->Location = System::Drawing::Point(275, 298);
			this->cmbcategoriaModificar->Name = L"cmbcategoriaModificar";
			this->cmbcategoriaModificar->Size = System::Drawing::Size(170, 21);
			this->cmbcategoriaModificar->TabIndex = 17;
			// 
			// tbxeditorialModificar
			// 
			this->tbxeditorialModificar->Location = System::Drawing::Point(275, 195);
			this->tbxeditorialModificar->Name = L"tbxeditorialModificar";
			this->tbxeditorialModificar->Size = System::Drawing::Size(428, 20);
			this->tbxeditorialModificar->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"(Correccion) Editorial:";
			// 
			// btnmodificar
			// 
			this->btnmodificar->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btnmodificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmodificar->ForeColor = System::Drawing::Color::Goldenrod;
			this->btnmodificar->Location = System::Drawing::Point(581, 329);
			this->btnmodificar->Name = L"btnmodificar";
			this->btnmodificar->Size = System::Drawing::Size(137, 35);
			this->btnmodificar->TabIndex = 14;
			this->btnmodificar->Text = L"Modificar libro";
			this->btnmodificar->UseVisualStyleBackColor = false;
			// 
			// cmbdestinoModificar
			// 
			this->cmbdestinoModificar->FormattingEnabled = true;
			this->cmbdestinoModificar->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Ingreso a biblioteca ", L"Reciclaje",
					L"Sección tome 1"
			});
			this->cmbdestinoModificar->Location = System::Drawing::Point(275, 261);
			this->cmbdestinoModificar->Name = L"cmbdestinoModificar";
			this->cmbdestinoModificar->Size = System::Drawing::Size(170, 21);
			this->cmbdestinoModificar->TabIndex = 13;
			// 
			// cmbestadoModificar
			// 
			this->cmbestadoModificar->FormattingEnabled = true;
			this->cmbestadoModificar->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Bueno ", L"Decente", L"Deteriorado",
					L"Malo"
			});
			this->cmbestadoModificar->Location = System::Drawing::Point(275, 227);
			this->cmbestadoModificar->Name = L"cmbestadoModificar";
			this->cmbestadoModificar->Size = System::Drawing::Size(170, 21);
			this->cmbestadoModificar->TabIndex = 12;
			// 
			// tbxedicionModificar
			// 
			this->tbxedicionModificar->Location = System::Drawing::Point(275, 159);
			this->tbxedicionModificar->Name = L"tbxedicionModificar";
			this->tbxedicionModificar->Size = System::Drawing::Size(428, 20);
			this->tbxedicionModificar->TabIndex = 11;
			// 
			// datetimepfechaModificar
			// 
			this->datetimepfechaModificar->Location = System::Drawing::Point(275, 126);
			this->datetimepfechaModificar->Name = L"datetimepfechaModificar";
			this->datetimepfechaModificar->Size = System::Drawing::Size(428, 20);
			this->datetimepfechaModificar->TabIndex = 10;
			// 
			// tbxautorModificar
			// 
			this->tbxautorModificar->Location = System::Drawing::Point(275, 99);
			this->tbxautorModificar->Name = L"tbxautorModificar";
			this->tbxautorModificar->Size = System::Drawing::Size(428, 20);
			this->tbxautorModificar->TabIndex = 9;
			// 
			// tbxnombreModificar
			// 
			this->tbxnombreModificar->Location = System::Drawing::Point(275, 68);
			this->tbxnombreModificar->Name = L"tbxnombreModificar";
			this->tbxnombreModificar->Size = System::Drawing::Size(428, 20);
			this->tbxnombreModificar->TabIndex = 8;
			// 
			// tbxvalorreferenciaModificar
			// 
			this->tbxvalorreferenciaModificar->Location = System::Drawing::Point(275, 35);
			this->tbxvalorreferenciaModificar->Name = L"tbxvalorreferenciaModificar";
			this->tbxvalorreferenciaModificar->Size = System::Drawing::Size(100, 20);
			this->tbxvalorreferenciaModificar->TabIndex = 7;
			// 
			// lbltitdestinoModificar
			// 
			this->lbltitdestinoModificar->AutoSize = true;
			this->lbltitdestinoModificar->Location = System::Drawing::Point(15, 269);
			this->lbltitdestinoModificar->Name = L"lbltitdestinoModificar";
			this->lbltitdestinoModificar->Size = System::Drawing::Size(90, 13);
			this->lbltitdestinoModificar->TabIndex = 6;
			this->lbltitdestinoModificar->Text = L"(Nuevo) Destino: ";
			// 
			// lbltitestadoModificar
			// 
			this->lbltitestadoModificar->AutoSize = true;
			this->lbltitestadoModificar->Location = System::Drawing::Point(15, 230);
			this->lbltitestadoModificar->Name = L"lbltitestadoModificar";
			this->lbltitestadoModificar->Size = System::Drawing::Size(90, 13);
			this->lbltitestadoModificar->TabIndex = 5;
			this->lbltitestadoModificar->Text = L"(Cambio) Estado: ";
			// 
			// lbltitedicionModificar
			// 
			this->lbltitedicionModificar->AutoSize = true;
			this->lbltitedicionModificar->Location = System::Drawing::Point(15, 162);
			this->lbltitedicionModificar->Name = L"lbltitedicionModificar";
			this->lbltitedicionModificar->Size = System::Drawing::Size(86, 13);
			this->lbltitedicionModificar->TabIndex = 4;
			this->lbltitedicionModificar->Text = L"(Nueva) Edicion:";
			// 
			// lbltitfechaModificar
			// 
			this->lbltitfechaModificar->AutoSize = true;
			this->lbltitfechaModificar->Location = System::Drawing::Point(15, 129);
			this->lbltitfechaModificar->Name = L"lbltitfechaModificar";
			this->lbltitfechaModificar->Size = System::Drawing::Size(156, 13);
			this->lbltitfechaModificar->TabIndex = 3;
			this->lbltitfechaModificar->Text = L"(Cambio) Fecha de publicacion:";
			// 
			// lbltitautorModificar
			// 
			this->lbltitautorModificar->AutoSize = true;
			this->lbltitautorModificar->Location = System::Drawing::Point(15, 99);
			this->lbltitautorModificar->Name = L"lbltitautorModificar";
			this->lbltitautorModificar->Size = System::Drawing::Size(98, 13);
			this->lbltitautorModificar->TabIndex = 2;
			this->lbltitautorModificar->Text = L"(Correccion) Autor: ";
			// 
			// lbltitnombreModificar
			// 
			this->lbltitnombreModificar->AutoSize = true;
			this->lbltitnombreModificar->Location = System::Drawing::Point(15, 68);
			this->lbltitnombreModificar->Name = L"lbltitnombreModificar";
			this->lbltitnombreModificar->Size = System::Drawing::Size(146, 13);
			this->lbltitnombreModificar->TabIndex = 1;
			this->lbltitnombreModificar->Text = L"(Correccion) Nombre del libro:";
			// 
			// lbltitvreferenciaModificar
			// 
			this->lbltitvreferenciaModificar->AutoSize = true;
			this->lbltitvreferenciaModificar->Location = System::Drawing::Point(15, 35);
			this->lbltitvreferenciaModificar->Name = L"lbltitvreferenciaModificar";
			this->lbltitvreferenciaModificar->Size = System::Drawing::Size(240, 13);
			this->lbltitvreferenciaModificar->TabIndex = 0;
			this->lbltitvreferenciaModificar->Text = L"Ingrese el valor de referencia del libro a modificar:";
			// 
			// dtgvcontrol
			// 
			this->dtgvcontrol->AllowUserToAddRows = false;
			this->dtgvcontrol->AllowUserToDeleteRows = false;
			this->dtgvcontrol->AllowUserToOrderColumns = true;
			this->dtgvcontrol->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgvcontrol->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->headnombre,
					this->headautor, this->headfecha, this->headedicion, this->headestado, this->headdestino, this->headeditorial, this->headcategoria
			});
			this->dtgvcontrol->Location = System::Drawing::Point(748, 446);
			this->dtgvcontrol->Name = L"dtgvcontrol";
			this->dtgvcontrol->ReadOnly = true;
			this->dtgvcontrol->Size = System::Drawing::Size(734, 150);
			this->dtgvcontrol->TabIndex = 5;
			this->dtgvcontrol->Visible = false;
			// 
			// headnombre
			// 
			this->headnombre->HeaderText = L"Nombre";
			this->headnombre->Name = L"headnombre";
			this->headnombre->ReadOnly = true;
			// 
			// headautor
			// 
			this->headautor->HeaderText = L"Autor";
			this->headautor->Name = L"headautor";
			this->headautor->ReadOnly = true;
			// 
			// headfecha
			// 
			this->headfecha->HeaderText = L"Fecha de publicacion";
			this->headfecha->Name = L"headfecha";
			this->headfecha->ReadOnly = true;
			// 
			// headedicion
			// 
			this->headedicion->HeaderText = L"Edicion";
			this->headedicion->Name = L"headedicion";
			this->headedicion->ReadOnly = true;
			// 
			// headestado
			// 
			this->headestado->HeaderText = L"Estado";
			this->headestado->Name = L"headestado";
			this->headestado->ReadOnly = true;
			// 
			// headdestino
			// 
			this->headdestino->HeaderText = L"Destino";
			this->headdestino->Name = L"headdestino";
			this->headdestino->ReadOnly = true;
			// 
			// headeditorial
			// 
			this->headeditorial->HeaderText = L"Editorial";
			this->headeditorial->Name = L"headeditorial";
			this->headeditorial->ReadOnly = true;
			// 
			// headcategoria
			// 
			this->headcategoria->HeaderText = L"Categoria";
			this->headcategoria->Name = L"headcategoria";
			this->headcategoria->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1482, 681);
			this->Controls->Add(this->dtgvcontrol);
			this->Controls->Add(this->gpbmodificar);
			this->Controls->Add(this->gpbeliminar);
			this->Controls->Add(this->gpbxingreso);
			this->Controls->Add(this->gpbVisualizar);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->gpbxingreso->ResumeLayout(false);
			this->gpbxingreso->PerformLayout();
			this->gpbVisualizar->ResumeLayout(false);
			this->gpbVisualizar->PerformLayout();
			this->gpbeliminar->ResumeLayout(false);
			this->gpbeliminar->PerformLayout();
			this->gpbmodificar->ResumeLayout(false);
			this->gpbmodificar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgvcontrol))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void eliminarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ingresarLibroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Establecimiento del groupboxingreso Visible + Ocultar los demas groupbox
	gpbxingreso->Visible = true; 
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbeliminar->Visible = false;
	gpbmodificar->Visible = false;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void visualizarLibroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Establecimiento del groupboxVisualizar Visible + Ocultar los demas groupbox
	gpbVisualizar->Visible = true; 
	gpbxingreso->Visible = false;
	dtgvcontrol->Visible = false;
	gpbeliminar->Visible = false;
	gpbmodificar->Visible = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void eliminarLibroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Establecimiento del groupboxeliminar Visible + Ocultar los demas groupbox
	gpbeliminar->Visible = true; 
	gpbmodificar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
}
private: System::Void modificarLibroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Establecimiento del groupboxModificar Visible + Ocultar los demas groupbox
	gpbmodificar->Visible = true; 
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
}
private: System::Void btnguardar_Click(System::Object^ sender, System::EventArgs^ e) {
	try 
	{
		if (cont < 5)
		{
			//Recoleccion de datos para el data grid (Control de libros) 
			dtgvcontrol->Rows->Add();
			cont = dtgvcontrol->Rows->Count - 1;
			dtgvcontrol[0, cont]->Value = tbxnombre->Text;
			dtgvcontrol[1, cont]->Value = tbxautor->Text;
			dtgvcontrol[2, cont]->Value = datetimepfecha->Text;
			dtgvcontrol[3, cont]->Value = tbxedicion->Text;
			dtgvcontrol[4, cont]->Value = cmbestado->Text;
			dtgvcontrol[5, cont]->Value = cmbdestino->Text;
			dtgvcontrol[6, cont]->Value = tbxeditorial->Text;
			dtgvcontrol[7, cont]->Value = cmbcategoria->Text;

			//Recoleccion de datos para el relleno de datos para el arreglo. 
			if (libro[cont].getNombre() == "")
			{
				string nombre = marshal_as<string>(tbxnombre->Text); 
				string autor = marshal_as<string>(tbxautor->Text); 
				string fecha = marshal_as<string>(datetimepfecha->Text); 
				string edicion = marshal_as<string>(tbxedicion->Text); 
				string estado = marshal_as<string>(cmbestado->Text); 
				string destino = marshal_as<string>(cmbdestino->Text); 
				string categoria = marshal_as<string>(cmbcategoria->Text);
				string editorial = marshal_as<string>(tbxeditorial->Text);
				libro[cont].setNombre(nombre); 
				libro[cont].setAutor(autor); 
				libro[cont].setFecha(fecha); 
				libro[cont].setEdicion(edicion);
				libro[cont].setEstado(estado); 
				libro[cont].setDestino(destino); 
				libro[cont].setCategoria(categoria); 
				libro[cont].setEditorial(editorial); 
				MessageBox::Show("El libro ha sido registrado"); 
				MessageBox::Show("El indice de referencia que le corresponde al libro es el: " + cont); 
			}
			cont++;
			tbxnombre->Text = ""; 
			tbxautor->Text = ""; 
			datetimepfecha->Text = ""; 
			tbxedicion->Text = ""; 
			cmbestado->Text = ""; 
			cmbdestino->Text = ""; 
			cmbcategoria->Text = ""; 
			tbxeditorial->Text = ""; 
		}
		else
		{
			//Mensaje de cantidad maxima de libros + componentes "bloqueados" para evitar mas ingresos  
			MessageBox::Show("La cantidad de ingreso de libros ha llegado a su limite"); 
			tbxnombre->Text = "";
			tbxautor->Text = "";
			datetimepfecha->Text = "";
			tbxedicion->Text = "";
			cmbestado->Text = "";
			cmbdestino->Text = "";
			cmbcategoria->Text = "";
			tbxeditorial->Text = "";
			tbxnombre->Visible = false;
			tbxautor->Visible = false;
			datetimepfecha->Visible = false;
			tbxedicion->Visible = false;
			cmbestado->Visible = false;
			cmbdestino->Visible = false;
			cmbcategoria->Visible = false;
			tbxeditorial->Visible = false;
		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message); 
	}
}
private: System::Void btnvisualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		//Visualizacion de los datos de un libro en especifico,  segun su Id establecido al momento de ingreso. 
		int id = stoi(marshal_as<string>(tbxvreferenciaVisualizar->Text)); 
		lblresultnombreVisualizar->Text = marshal_as<String^>(libro[id].getNombre());
		lblresultautorVisualizar->Text = marshal_as<String^>(libro[id].getAutor());
		lblresultfechaVisualizar->Text = marshal_as<String^>(libro[id].getFecha());
		lblresultedicionVisualizar->Text = marshal_as<String^>(libro[id].getEdicion());
		lblresultestadoVisualizar->Text = marshal_as<String^>(libro[id].getEstado());
		lblresultdestinoVisualizar->Text = marshal_as<String^>(libro[id].getDestino());
		lblresultcatgoriaVisualizar->Text = marshal_as<String^>(libro[id].getCategoria());
		lblresulteditorialVisualizar->Text = marshal_as<String^>(libro[id].getEditorial());
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message); 
	}
}
private: System::Void gpbVisualizar_Enter(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void controlDeLibrosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		//Establecimiento del datagrid Visible + Mensaje de categoria ingresada 


		//DATA GRID VIEW (FALTA AGREGAR EL VALOR DE REFERENCIA CORRESPONDIENTE A CADA LIBRO -> Control de libros) 

		gpbxingreso->Visible = false;
		gpbVisualizar->Visible = false;
		dtgvcontrol->Visible = true; 
		gpbmodificar->Visible = false;
		gpbeliminar->Visible = false;
		MessageBox::Show("Este es el control de los libros en el inventario bibliotecario.");

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex -> Message); 
	}
}
};
}
 
