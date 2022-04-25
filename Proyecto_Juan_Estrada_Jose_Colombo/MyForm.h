#pragma once
#include <iostream>
#include <string>
#include "Inventario.h"
#include "Persona.h"
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
#include "MyForm1.h"


namespace ProyectoJuanEstradaJoseColombo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	
	/*extern Inventario libro[];
	extern int cont; 
	extern int cant; 
	extern std::string impcont; */

	static Inventario libro[5];
	static Persona persona[5]; 
	static int contp = 0;
	static int cont = 0;
	static int cant = 0;
	static std::string impcont = "";

	/*Inventario libro[5];
	int cont = 0;
	int cant = 0;
	std::string impcont = "";*/

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
	private: System::Windows::Forms::Button^ btnEliminarLibro;



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








private: System::Windows::Forms::ToolStripMenuItem^ cantidadDeLibrosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ reportePorEdicionToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ reportePorAñoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ reportePorAutorToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ reportePorEditorialToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ reportePorCategoríaToolStripMenuItem;

private: System::Windows::Forms::ToolStripMenuItem^ personasToolStripMenuItem;


private: System::Windows::Forms::Button^ btnGuarLibMod;
private: System::Windows::Forms::Button^ btnConfirEliLib;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headnombre;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headautor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headfecha;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headedicion;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headestado;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headdestino;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headeditorial;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ headcategoria;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ valorreferencia;
private: System::Windows::Forms::GroupBox^ gpbxRcantidadlibro;
private: System::Windows::Forms::Label^ lbltitR;
private: System::Windows::Forms::Label^ lblresultRcantidadlibros;
private: System::Windows::Forms::GroupBox^ gpbxRestado;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::ComboBox^ cmbRestado;
private: System::Windows::Forms::ToolStripMenuItem^ reportePorEstadoDeLibroToolStripMenuItem;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ lblresultRestado;
private: System::Windows::Forms::ListBox^ listBox1;














private: System::Windows::Forms::ToolStripMenuItem^ reportePorDestinoToolStripMenuItem;
private: System::Windows::Forms::GroupBox^ gpbxRdestino;

private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::ComboBox^ cmbRdestino;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::GroupBox^ gpbxRcategoria;

private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::ComboBox^ cmbRcategoria;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::GroupBox^ gpbxEdicion;
private: System::Windows::Forms::Button^ btnRedicion;
private: System::Windows::Forms::TextBox^ tbxRedicion;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::ListBox^ listBRedicion;
private: System::Windows::Forms::GroupBox^ gpbxRautor;
private: System::Windows::Forms::ListBox^ listBRautor;
private: System::Windows::Forms::Button^ btnRautor;
private: System::Windows::Forms::TextBox^ tbxRautor;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::GroupBox^ gpbxReditorial;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::ListBox^ listBReditorial;
private: System::Windows::Forms::Button^ btnReditorial;
private: System::Windows::Forms::TextBox^ tbxReditorial;
private: System::Windows::Forms::GroupBox^ gpbxRfecha;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::DateTimePicker^ dtmRfecha;

private: System::Windows::Forms::ListBox^ listBRfecha;
private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesionToolStripMenuItem;


private: System::Windows::Forms::ToolStripMenuItem^ ingresarPersonaToolStripMenuItem;
private: System::Windows::Forms::GroupBox^ gpbPersona;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ tbxIngresoID;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ tbxIngresoProfesion;
private: System::Windows::Forms::TextBox^ tbxIngresoNumero;
private: System::Windows::Forms::TextBox^ tbxIngresoDocIdent;
private: System::Windows::Forms::TextBox^ tbxIngresopersona;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ btnregistroPersona;
private: System::Windows::Forms::DataGridView^ dtgvcontrolpersonas;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::ToolStripMenuItem^ controlDePersonasToolStripMenuItem;
private: System::Windows::Forms::GroupBox^ gpbxPersonaindi;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ lblresultVisualizarIding;
private: System::Windows::Forms::Label^ lblresultVisualizarprofesion;
private: System::Windows::Forms::Label^ lblresultVisualizarnumero;
private: System::Windows::Forms::Label^ lblresultVisualizardocum;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ tbxVisualizarnombrePersona;
private: System::Windows::Forms::Button^ btnVisualizarP;
private: System::Windows::Forms::ToolStripMenuItem^ visualizarPersonaIndividualmenteToolStripMenuItem;











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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->libroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ingresarLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualizarLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminarLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cantidadDeLibrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportePorEstadoDeLibroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportePorEdicionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportePorAñoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportePorAutorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportePorEditorialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportePorCategoríaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportePorDestinoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->controlDeLibrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ingresarPersonaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualizarPersonaIndividualmenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->controlDePersonasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->btnConfirEliLib = (gcnew System::Windows::Forms::Button());
			this->btnEliminarLibro = (gcnew System::Windows::Forms::Button());
			this->lblresultnombreEliminar = (gcnew System::Windows::Forms::Label());
			this->lbltitnombreeliminar = (gcnew System::Windows::Forms::Label());
			this->tbxvalorreferenciaEliminar = (gcnew System::Windows::Forms::TextBox());
			this->lbltitvreferencia = (gcnew System::Windows::Forms::Label());
			this->gpbmodificar = (gcnew System::Windows::Forms::GroupBox());
			this->btnGuarLibMod = (gcnew System::Windows::Forms::Button());
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
			this->gpbPersona = (gcnew System::Windows::Forms::GroupBox());
			this->btnregistroPersona = (gcnew System::Windows::Forms::Button());
			this->tbxIngresoID = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbxIngresoProfesion = (gcnew System::Windows::Forms::TextBox());
			this->tbxIngresoNumero = (gcnew System::Windows::Forms::TextBox());
			this->tbxIngresoDocIdent = (gcnew System::Windows::Forms::TextBox());
			this->tbxIngresopersona = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->gpbxRdestino = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->cmbRdestino = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtgvcontrol = (gcnew System::Windows::Forms::DataGridView());
			this->headnombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headautor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headfecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headedicion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headestado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headdestino = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headeditorial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headcategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valorreferencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gpbxRcantidadlibro = (gcnew System::Windows::Forms::GroupBox());
			this->lblresultRcantidadlibros = (gcnew System::Windows::Forms::Label());
			this->lbltitR = (gcnew System::Windows::Forms::Label());
			this->gpbxRestado = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->lblresultRestado = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cmbRestado = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gpbxRcategoria = (gcnew System::Windows::Forms::GroupBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cmbRcategoria = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gpbxEdicion = (gcnew System::Windows::Forms::GroupBox());
			this->listBRedicion = (gcnew System::Windows::Forms::ListBox());
			this->btnRedicion = (gcnew System::Windows::Forms::Button());
			this->tbxRedicion = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->gpbxRautor = (gcnew System::Windows::Forms::GroupBox());
			this->listBRautor = (gcnew System::Windows::Forms::ListBox());
			this->btnRautor = (gcnew System::Windows::Forms::Button());
			this->tbxRautor = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->gpbxReditorial = (gcnew System::Windows::Forms::GroupBox());
			this->listBReditorial = (gcnew System::Windows::Forms::ListBox());
			this->btnReditorial = (gcnew System::Windows::Forms::Button());
			this->tbxReditorial = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gpbxRfecha = (gcnew System::Windows::Forms::GroupBox());
			this->listBRfecha = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dtmRfecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dtgvcontrolpersonas = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gpbxPersonaindi = (gcnew System::Windows::Forms::GroupBox());
			this->btnVisualizarP = (gcnew System::Windows::Forms::Button());
			this->lblresultVisualizarIding = (gcnew System::Windows::Forms::Label());
			this->lblresultVisualizarprofesion = (gcnew System::Windows::Forms::Label());
			this->lblresultVisualizarnumero = (gcnew System::Windows::Forms::Label());
			this->lblresultVisualizardocum = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tbxVisualizarnombrePersona = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->gpbxingreso->SuspendLayout();
			this->gpbVisualizar->SuspendLayout();
			this->gpbeliminar->SuspendLayout();
			this->gpbmodificar->SuspendLayout();
			this->gpbPersona->SuspendLayout();
			this->gpbxRdestino->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgvcontrol))->BeginInit();
			this->gpbxRcantidadlibro->SuspendLayout();
			this->gpbxRestado->SuspendLayout();
			this->gpbxRcategoria->SuspendLayout();
			this->gpbxEdicion->SuspendLayout();
			this->gpbxRautor->SuspendLayout();
			this->gpbxReditorial->SuspendLayout();
			this->gpbxRfecha->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgvcontrolpersonas))->BeginInit();
			this->gpbxPersonaindi->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->libroToolStripMenuItem,
					this->reportesToolStripMenuItem, this->controlDeLibrosToolStripMenuItem, this->personasToolStripMenuItem, this->controlDePersonasToolStripMenuItem,
					this->cerrarSesionToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1512, 24);
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
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->cantidadDeLibrosToolStripMenuItem,
					this->reportePorEstadoDeLibroToolStripMenuItem, this->reportePorEdicionToolStripMenuItem, this->reportePorAñoToolStripMenuItem,
					this->reportePorAutorToolStripMenuItem, this->reportePorEditorialToolStripMenuItem, this->reportePorCategoríaToolStripMenuItem,
					this->reportePorDestinoToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// cantidadDeLibrosToolStripMenuItem
			// 
			this->cantidadDeLibrosToolStripMenuItem->Name = L"cantidadDeLibrosToolStripMenuItem";
			this->cantidadDeLibrosToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->cantidadDeLibrosToolStripMenuItem->Text = L"Cantidad de libros";
			this->cantidadDeLibrosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cantidadDeLibrosToolStripMenuItem_Click);
			// 
			// reportePorEstadoDeLibroToolStripMenuItem
			// 
			this->reportePorEstadoDeLibroToolStripMenuItem->Name = L"reportePorEstadoDeLibroToolStripMenuItem";
			this->reportePorEstadoDeLibroToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->reportePorEstadoDeLibroToolStripMenuItem->Text = L"Reporte por estado ";
			this->reportePorEstadoDeLibroToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reportePorEstadoDeLibroToolStripMenuItem_Click);
			// 
			// reportePorEdicionToolStripMenuItem
			// 
			this->reportePorEdicionToolStripMenuItem->Name = L"reportePorEdicionToolStripMenuItem";
			this->reportePorEdicionToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->reportePorEdicionToolStripMenuItem->Text = L"Reporte por edicion";
			this->reportePorEdicionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reportePorEdicionToolStripMenuItem_Click);
			// 
			// reportePorAñoToolStripMenuItem
			// 
			this->reportePorAñoToolStripMenuItem->Name = L"reportePorAñoToolStripMenuItem";
			this->reportePorAñoToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->reportePorAñoToolStripMenuItem->Text = L"Reporte por fecha";
			this->reportePorAñoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reportePorAñoToolStripMenuItem_Click);
			// 
			// reportePorAutorToolStripMenuItem
			// 
			this->reportePorAutorToolStripMenuItem->Name = L"reportePorAutorToolStripMenuItem";
			this->reportePorAutorToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->reportePorAutorToolStripMenuItem->Text = L"Reporte por autor ";
			this->reportePorAutorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reportePorAutorToolStripMenuItem_Click);
			// 
			// reportePorEditorialToolStripMenuItem
			// 
			this->reportePorEditorialToolStripMenuItem->Name = L"reportePorEditorialToolStripMenuItem";
			this->reportePorEditorialToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->reportePorEditorialToolStripMenuItem->Text = L"Reporte por editorial";
			this->reportePorEditorialToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reportePorEditorialToolStripMenuItem_Click);
			// 
			// reportePorCategoríaToolStripMenuItem
			// 
			this->reportePorCategoríaToolStripMenuItem->Name = L"reportePorCategoríaToolStripMenuItem";
			this->reportePorCategoríaToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->reportePorCategoríaToolStripMenuItem->Text = L"Reporte por categoría";
			this->reportePorCategoríaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reportePorCategoríaToolStripMenuItem_Click);
			// 
			// reportePorDestinoToolStripMenuItem
			// 
			this->reportePorDestinoToolStripMenuItem->Name = L"reportePorDestinoToolStripMenuItem";
			this->reportePorDestinoToolStripMenuItem->Size = System::Drawing::Size(290, 22);
			this->reportePorDestinoToolStripMenuItem->Text = L"Reporte por destino";
			this->reportePorDestinoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reportePorDestinoToolStripMenuItem_Click);
			// 
			// controlDeLibrosToolStripMenuItem
			// 
			this->controlDeLibrosToolStripMenuItem->Name = L"controlDeLibrosToolStripMenuItem";
			this->controlDeLibrosToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->controlDeLibrosToolStripMenuItem->Text = L"Control de libros";
			this->controlDeLibrosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::controlDeLibrosToolStripMenuItem_Click);
			// 
			// personasToolStripMenuItem
			// 
			this->personasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ingresarPersonaToolStripMenuItem,
					this->visualizarPersonaIndividualmenteToolStripMenuItem
			});
			this->personasToolStripMenuItem->Name = L"personasToolStripMenuItem";
			this->personasToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->personasToolStripMenuItem->Text = L"Personas";
			// 
			// ingresarPersonaToolStripMenuItem
			// 
			this->ingresarPersonaToolStripMenuItem->Name = L"ingresarPersonaToolStripMenuItem";
			this->ingresarPersonaToolStripMenuItem->Size = System::Drawing::Size(257, 22);
			this->ingresarPersonaToolStripMenuItem->Text = L"Ingresar Persona";
			this->ingresarPersonaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ingresarPersonaToolStripMenuItem_Click);
			// 
			// visualizarPersonaIndividualmenteToolStripMenuItem
			// 
			this->visualizarPersonaIndividualmenteToolStripMenuItem->Name = L"visualizarPersonaIndividualmenteToolStripMenuItem";
			this->visualizarPersonaIndividualmenteToolStripMenuItem->Size = System::Drawing::Size(257, 22);
			this->visualizarPersonaIndividualmenteToolStripMenuItem->Text = L"Visualizar persona individualmente";
			this->visualizarPersonaIndividualmenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::visualizarPersonaIndividualmenteToolStripMenuItem_Click);
			// 
			// controlDePersonasToolStripMenuItem
			// 
			this->controlDePersonasToolStripMenuItem->Name = L"controlDePersonasToolStripMenuItem";
			this->controlDePersonasToolStripMenuItem->Size = System::Drawing::Size(125, 20);
			this->controlDePersonasToolStripMenuItem->Text = L"Control de personas";
			this->controlDePersonasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::controlDePersonasToolStripMenuItem_Click);
			// 
			// cerrarSesionToolStripMenuItem
			// 
			this->cerrarSesionToolStripMenuItem->BackColor = System::Drawing::Color::Red;
			this->cerrarSesionToolStripMenuItem->Name = L"cerrarSesionToolStripMenuItem";
			this->cerrarSesionToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->cerrarSesionToolStripMenuItem->Text = L"Cerrar sesion";
			this->cerrarSesionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cerrarSesionToolStripMenuItem_Click);
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
			this->gpbxingreso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpbxingreso->Location = System::Drawing::Point(6, 29);
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
			this->btnguardar->Location = System::Drawing::Point(550, 247);
			this->btnguardar->Name = L"btnguardar";
			this->btnguardar->Size = System::Drawing::Size(135, 31);
			this->btnguardar->TabIndex = 13;
			this->btnguardar->Text = L"Guardar libro";
			this->btnguardar->UseVisualStyleBackColor = false;
			this->btnguardar->Click += gcnew System::EventHandler(this, &MyForm::btnguardar_Click);
			// 
			// cmbdestino
			// 
			this->cmbdestino->FormattingEnabled = true;
			this->cmbdestino->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ingreso a biblioteca", L"Reciclaje", L"Seccion tome 1" });
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
			this->gpbVisualizar->Location = System::Drawing::Point(12, 43);
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
			this->btnvisualizar->Location = System::Drawing::Point(529, 283);
			this->btnvisualizar->Name = L"btnvisualizar";
			this->btnvisualizar->Size = System::Drawing::Size(107, 31);
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
			this->gpbeliminar->Controls->Add(this->btnConfirEliLib);
			this->gpbeliminar->Controls->Add(this->btnEliminarLibro);
			this->gpbeliminar->Controls->Add(this->lblresultnombreEliminar);
			this->gpbeliminar->Controls->Add(this->lbltitnombreeliminar);
			this->gpbeliminar->Controls->Add(this->tbxvalorreferenciaEliminar);
			this->gpbeliminar->Controls->Add(this->lbltitvreferencia);
			this->gpbeliminar->Location = System::Drawing::Point(12, 27);
			this->gpbeliminar->Name = L"gpbeliminar";
			this->gpbeliminar->Size = System::Drawing::Size(529, 164);
			this->gpbeliminar->TabIndex = 3;
			this->gpbeliminar->TabStop = false;
			this->gpbeliminar->Text = L"Eliminar libro";
			this->gpbeliminar->Visible = false;
			this->gpbeliminar->Enter += gcnew System::EventHandler(this, &MyForm::gpbeliminar_Enter);
			// 
			// btnConfirEliLib
			// 
			this->btnConfirEliLib->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btnConfirEliLib->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirEliLib->ForeColor = System::Drawing::Color::Red;
			this->btnConfirEliLib->Location = System::Drawing::Point(79, 116);
			this->btnConfirEliLib->Name = L"btnConfirEliLib";
			this->btnConfirEliLib->Size = System::Drawing::Size(171, 31);
			this->btnConfirEliLib->TabIndex = 5;
			this->btnConfirEliLib->Text = L"Confirmar eliminar libro";
			this->btnConfirEliLib->UseVisualStyleBackColor = false;
			this->btnConfirEliLib->Click += gcnew System::EventHandler(this, &MyForm::btnConfirEliLib_Click);
			// 
			// btnEliminarLibro
			// 
			this->btnEliminarLibro->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btnEliminarLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnEliminarLibro->ForeColor = System::Drawing::Color::Red;
			this->btnEliminarLibro->Location = System::Drawing::Point(304, 57);
			this->btnEliminarLibro->Name = L"btnEliminarLibro";
			this->btnEliminarLibro->Size = System::Drawing::Size(102, 31);
			this->btnEliminarLibro->TabIndex = 4;
			this->btnEliminarLibro->Text = L"Eliminar libro";
			this->btnEliminarLibro->UseVisualStyleBackColor = false;
			this->btnEliminarLibro->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
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
			this->gpbmodificar->Controls->Add(this->btnGuarLibMod);
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
			this->gpbmodificar->Location = System::Drawing::Point(12, 29);
			this->gpbmodificar->Name = L"gpbmodificar";
			this->gpbmodificar->Size = System::Drawing::Size(724, 379);
			this->gpbmodificar->TabIndex = 4;
			this->gpbmodificar->TabStop = false;
			this->gpbmodificar->Text = L"Modificar libro ingresado";
			this->gpbmodificar->Visible = false;
			// 
			// btnGuarLibMod
			// 
			this->btnGuarLibMod->BackColor = System::Drawing::SystemColors::HighlightText;
			this->btnGuarLibMod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuarLibMod->ForeColor = System::Drawing::Color::Goldenrod;
			this->btnGuarLibMod->Location = System::Drawing::Point(492, 320);
			this->btnGuarLibMod->Name = L"btnGuarLibMod";
			this->btnGuarLibMod->Size = System::Drawing::Size(191, 35);
			this->btnGuarLibMod->TabIndex = 19;
			this->btnGuarLibMod->Text = L"Guardar libro modificado";
			this->btnGuarLibMod->UseVisualStyleBackColor = false;
			this->btnGuarLibMod->Click += gcnew System::EventHandler(this, &MyForm::btnGuarLibMod_Click);
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
			this->tbxeditorialModificar->TextChanged += gcnew System::EventHandler(this, &MyForm::tbxeditorialModificar_TextChanged);
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
			this->btnmodificar->Location = System::Drawing::Point(411, 24);
			this->btnmodificar->Name = L"btnmodificar";
			this->btnmodificar->Size = System::Drawing::Size(116, 35);
			this->btnmodificar->TabIndex = 14;
			this->btnmodificar->Text = L"Modificar libro";
			this->btnmodificar->UseVisualStyleBackColor = false;
			this->btnmodificar->Click += gcnew System::EventHandler(this, &MyForm::btnmodificar_Click);
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
				L"Bueno", L"Decente", L"Deteriorado",
					L"Malo"
			});
			this->cmbestadoModificar->Location = System::Drawing::Point(275, 227);
			this->cmbestadoModificar->Name = L"cmbestadoModificar";
			this->cmbestadoModificar->Size = System::Drawing::Size(170, 21);
			this->cmbestadoModificar->TabIndex = 12;
			this->cmbestadoModificar->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbestadoModificar_SelectedIndexChanged);
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
			// gpbPersona
			// 
			this->gpbPersona->Controls->Add(this->btnregistroPersona);
			this->gpbPersona->Controls->Add(this->tbxIngresoID);
			this->gpbPersona->Controls->Add(this->label14);
			this->gpbPersona->Controls->Add(this->tbxIngresoProfesion);
			this->gpbPersona->Controls->Add(this->tbxIngresoNumero);
			this->gpbPersona->Controls->Add(this->tbxIngresoDocIdent);
			this->gpbPersona->Controls->Add(this->tbxIngresopersona);
			this->gpbPersona->Controls->Add(this->label13);
			this->gpbPersona->Controls->Add(this->label12);
			this->gpbPersona->Controls->Add(this->label11);
			this->gpbPersona->Controls->Add(this->label10);
			this->gpbPersona->Location = System::Drawing::Point(30, 25);
			this->gpbPersona->Name = L"gpbPersona";
			this->gpbPersona->Size = System::Drawing::Size(532, 293);
			this->gpbPersona->TabIndex = 14;
			this->gpbPersona->TabStop = false;
			this->gpbPersona->Text = L"Ingrese los datos de la persona";
			this->gpbPersona->Visible = false;
			// 
			// btnregistroPersona
			// 
			this->btnregistroPersona->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnregistroPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnregistroPersona->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btnregistroPersona->Location = System::Drawing::Point(218, 238);
			this->btnregistroPersona->Name = L"btnregistroPersona";
			this->btnregistroPersona->Size = System::Drawing::Size(114, 33);
			this->btnregistroPersona->TabIndex = 10;
			this->btnregistroPersona->Text = L"Registrar persona";
			this->btnregistroPersona->UseVisualStyleBackColor = false;
			this->btnregistroPersona->Click += gcnew System::EventHandler(this, &MyForm::btnregistroPersona_Click);
			// 
			// tbxIngresoID
			// 
			this->tbxIngresoID->Location = System::Drawing::Point(272, 200);
			this->tbxIngresoID->Name = L"tbxIngresoID";
			this->tbxIngresoID->Size = System::Drawing::Size(227, 20);
			this->tbxIngresoID->TabIndex = 9;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(18, 207);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(216, 13);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Id de libros ingresados (Valor de referencia): ";
			// 
			// tbxIngresoProfesion
			// 
			this->tbxIngresoProfesion->Location = System::Drawing::Point(272, 160);
			this->tbxIngresoProfesion->Name = L"tbxIngresoProfesion";
			this->tbxIngresoProfesion->Size = System::Drawing::Size(227, 20);
			this->tbxIngresoProfesion->TabIndex = 7;
			// 
			// tbxIngresoNumero
			// 
			this->tbxIngresoNumero->Location = System::Drawing::Point(272, 122);
			this->tbxIngresoNumero->Name = L"tbxIngresoNumero";
			this->tbxIngresoNumero->Size = System::Drawing::Size(227, 20);
			this->tbxIngresoNumero->TabIndex = 6;
			// 
			// tbxIngresoDocIdent
			// 
			this->tbxIngresoDocIdent->Location = System::Drawing::Point(272, 86);
			this->tbxIngresoDocIdent->Name = L"tbxIngresoDocIdent";
			this->tbxIngresoDocIdent->Size = System::Drawing::Size(227, 20);
			this->tbxIngresoDocIdent->TabIndex = 5;
			// 
			// tbxIngresopersona
			// 
			this->tbxIngresopersona->Location = System::Drawing::Point(272, 41);
			this->tbxIngresopersona->Name = L"tbxIngresopersona";
			this->tbxIngresopersona->Size = System::Drawing::Size(227, 20);
			this->tbxIngresopersona->TabIndex = 4;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(21, 163);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(120, 13);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Dedicacion (Profesion): ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(21, 123);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Numero de telefono: ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 89);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(133, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Documento identificacion: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(18, 48);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Nombre de la persona: ";
			// 
			// gpbxRdestino
			// 
			this->gpbxRdestino->Controls->Add(this->listBox2);
			this->gpbxRdestino->Controls->Add(this->button2);
			this->gpbxRdestino->Controls->Add(this->cmbRdestino);
			this->gpbxRdestino->Controls->Add(this->label4);
			this->gpbxRdestino->Location = System::Drawing::Point(814, 29);
			this->gpbxRdestino->Name = L"gpbxRdestino";
			this->gpbxRdestino->Size = System::Drawing::Size(454, 246);
			this->gpbxRdestino->TabIndex = 5;
			this->gpbxRdestino->TabStop = false;
			this->gpbxRdestino->Text = L"Reporte por destino";
			this->gpbxRdestino->Visible = false;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(163, 108);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 95);
			this->listBox2->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Realizar reporte";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// cmbRdestino
			// 
			this->cmbRdestino->FormattingEnabled = true;
			this->cmbRdestino->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ingreso a biblioteca", L"Reciclaje", L"Seccion tome 1" });
			this->cmbRdestino->Location = System::Drawing::Point(311, 25);
			this->cmbRdestino->Name = L"cmbRdestino";
			this->cmbRdestino->Size = System::Drawing::Size(121, 21);
			this->cmbRdestino->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(292, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Seleccione el destino por el cual quiere realizar la busqueda:";
			// 
			// dtgvcontrol
			// 
			this->dtgvcontrol->AllowUserToAddRows = false;
			this->dtgvcontrol->AllowUserToDeleteRows = false;
			this->dtgvcontrol->AllowUserToOrderColumns = true;
			this->dtgvcontrol->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgvcontrol->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->headnombre,
					this->headautor, this->headfecha, this->headedicion, this->headestado, this->headdestino, this->headeditorial, this->headcategoria,
					this->valorreferencia
			});
			this->dtgvcontrol->Location = System::Drawing::Point(209, 434);
			this->dtgvcontrol->Name = L"dtgvcontrol";
			this->dtgvcontrol->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dtgvcontrol->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dtgvcontrol->Size = System::Drawing::Size(943, 200);
			this->dtgvcontrol->TabIndex = 5;
			this->dtgvcontrol->Visible = false;
			this->dtgvcontrol->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dtgvcontrol_CellContentClick);
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
			// valorreferencia
			// 
			this->valorreferencia->HeaderText = L"Valor de referencia ";
			this->valorreferencia->Name = L"valorreferencia";
			this->valorreferencia->ReadOnly = true;
			// 
			// gpbxRcantidadlibro
			// 
			this->gpbxRcantidadlibro->Controls->Add(this->lblresultRcantidadlibros);
			this->gpbxRcantidadlibro->Controls->Add(this->lbltitR);
			this->gpbxRcantidadlibro->Location = System::Drawing::Point(933, 39);
			this->gpbxRcantidadlibro->Name = L"gpbxRcantidadlibro";
			this->gpbxRcantidadlibro->Size = System::Drawing::Size(289, 100);
			this->gpbxRcantidadlibro->TabIndex = 6;
			this->gpbxRcantidadlibro->TabStop = false;
			this->gpbxRcantidadlibro->Text = L"Reporte de cantidad de libros";
			this->gpbxRcantidadlibro->Visible = false;
			this->gpbxRcantidadlibro->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// lblresultRcantidadlibros
			// 
			this->lblresultRcantidadlibros->AutoSize = true;
			this->lblresultRcantidadlibros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblresultRcantidadlibros->Location = System::Drawing::Point(137, 56);
			this->lblresultRcantidadlibros->Name = L"lblresultRcantidadlibros";
			this->lblresultRcantidadlibros->Size = System::Drawing::Size(0, 24);
			this->lblresultRcantidadlibros->TabIndex = 1;
			// 
			// lbltitR
			// 
			this->lbltitR->AutoSize = true;
			this->lbltitR->Location = System::Drawing::Point(50, 26);
			this->lbltitR->Name = L"lbltitR";
			this->lbltitR->Size = System::Drawing::Size(194, 13);
			this->lbltitR->TabIndex = 0;
			this->lbltitR->Text = L"La cantidad de libros ingresados es de: ";
			this->lbltitR->Click += gcnew System::EventHandler(this, &MyForm::lbltitR_Click);
			// 
			// gpbxRestado
			// 
			this->gpbxRestado->Controls->Add(this->listBox1);
			this->gpbxRestado->Controls->Add(this->lblresultRestado);
			this->gpbxRestado->Controls->Add(this->button1);
			this->gpbxRestado->Controls->Add(this->cmbRestado);
			this->gpbxRestado->Controls->Add(this->label3);
			this->gpbxRestado->Location = System::Drawing::Point(814, 26);
			this->gpbxRestado->Name = L"gpbxRestado";
			this->gpbxRestado->Size = System::Drawing::Size(541, 260);
			this->gpbxRestado->TabIndex = 7;
			this->gpbxRestado->TabStop = false;
			this->gpbxRestado->Text = L"Reporte por estado";
			this->gpbxRestado->Visible = false;
			this->gpbxRestado->Enter += gcnew System::EventHandler(this, &MyForm::gpbxRestado_Enter);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(191, 137);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 4;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// lblresultRestado
			// 
			this->lblresultRestado->AutoSize = true;
			this->lblresultRestado->Location = System::Drawing::Point(46, 118);
			this->lblresultRestado->Name = L"lblresultRestado";
			this->lblresultRestado->Size = System::Drawing::Size(0, 13);
			this->lblresultRestado->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(213, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Realizar reporte";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// cmbRestado
			// 
			this->cmbRestado->FormattingEnabled = true;
			this->cmbRestado->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bueno", L"Decente", L"Deteriorado", L"Malo" });
			this->cmbRestado->Location = System::Drawing::Point(317, 32);
			this->cmbRestado->Name = L"cmbRestado";
			this->cmbRestado->Size = System::Drawing::Size(121, 21);
			this->cmbRestado->TabIndex = 1;
			this->cmbRestado->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbRestado_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(296, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Seleccione el estado por el cual quiere realizar la busqueda:  ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// gpbxRcategoria
			// 
			this->gpbxRcategoria->Controls->Add(this->listBox3);
			this->gpbxRcategoria->Controls->Add(this->button3);
			this->gpbxRcategoria->Controls->Add(this->cmbRcategoria);
			this->gpbxRcategoria->Controls->Add(this->label5);
			this->gpbxRcategoria->Location = System::Drawing::Point(814, 27);
			this->gpbxRcategoria->Name = L"gpbxRcategoria";
			this->gpbxRcategoria->Size = System::Drawing::Size(476, 228);
			this->gpbxRcategoria->TabIndex = 8;
			this->gpbxRcategoria->TabStop = false;
			this->gpbxRcategoria->Text = L"Reporte por categoria";
			this->gpbxRcategoria->Visible = false;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(170, 108);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 95);
			this->listBox3->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(170, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Realizar reporte";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// cmbRcategoria
			// 
			this->cmbRcategoria->FormattingEnabled = true;
			this->cmbRcategoria->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"De texto", L"Complementario", L"Consulta o referencia",
					L"Recreativo", L"Cientifico", L"Instructivo", L"Literarios y linguistico", L"Tecnico", L"Informativos", L"Divulgacion", L"Religioso",
					L"Ilustrado", L"Electronico", L"Poetico", L"Biografico", L"Material auxiliar", L"Didactico", L"Viaje", L"Artistico", L"Autoestima"
			});
			this->cmbRcategoria->Location = System::Drawing::Point(329, 30);
			this->cmbRcategoria->Name = L"cmbRcategoria";
			this->cmbRcategoria->Size = System::Drawing::Size(121, 21);
			this->cmbRcategoria->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(302, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Seleccione la categoria por el cual quiera realizar la busqueda:";
			// 
			// gpbxEdicion
			// 
			this->gpbxEdicion->Controls->Add(this->listBRedicion);
			this->gpbxEdicion->Controls->Add(this->btnRedicion);
			this->gpbxEdicion->Controls->Add(this->tbxRedicion);
			this->gpbxEdicion->Controls->Add(this->label6);
			this->gpbxEdicion->Location = System::Drawing::Point(815, 23);
			this->gpbxEdicion->Name = L"gpbxEdicion";
			this->gpbxEdicion->Size = System::Drawing::Size(458, 234);
			this->gpbxEdicion->TabIndex = 9;
			this->gpbxEdicion->TabStop = false;
			this->gpbxEdicion->Text = L"Reporte por edicion";
			this->gpbxEdicion->Visible = false;
			// 
			// listBRedicion
			// 
			this->listBRedicion->FormattingEnabled = true;
			this->listBRedicion->Location = System::Drawing::Point(156, 114);
			this->listBRedicion->Name = L"listBRedicion";
			this->listBRedicion->Size = System::Drawing::Size(120, 95);
			this->listBRedicion->TabIndex = 3;
			// 
			// btnRedicion
			// 
			this->btnRedicion->Location = System::Drawing::Point(137, 68);
			this->btnRedicion->Name = L"btnRedicion";
			this->btnRedicion->Size = System::Drawing::Size(160, 23);
			this->btnRedicion->TabIndex = 2;
			this->btnRedicion->Text = L"Consultar libros por edicion";
			this->btnRedicion->UseVisualStyleBackColor = true;
			this->btnRedicion->Click += gcnew System::EventHandler(this, &MyForm::btnRedicion_Click);
			// 
			// tbxRedicion
			// 
			this->tbxRedicion->Location = System::Drawing::Point(218, 32);
			this->tbxRedicion->Name = L"tbxRedicion";
			this->tbxRedicion->Size = System::Drawing::Size(176, 20);
			this->tbxRedicion->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(206, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ingrese la edición de los libros a consultar:";
			// 
			// gpbxRautor
			// 
			this->gpbxRautor->Controls->Add(this->listBRautor);
			this->gpbxRautor->Controls->Add(this->btnRautor);
			this->gpbxRautor->Controls->Add(this->tbxRautor);
			this->gpbxRautor->Controls->Add(this->label7);
			this->gpbxRautor->Location = System::Drawing::Point(839, 13);
			this->gpbxRautor->Name = L"gpbxRautor";
			this->gpbxRautor->Size = System::Drawing::Size(451, 238);
			this->gpbxRautor->TabIndex = 10;
			this->gpbxRautor->TabStop = false;
			this->gpbxRautor->Text = L"Reporte por autor";
			this->gpbxRautor->Visible = false;
			// 
			// listBRautor
			// 
			this->listBRautor->FormattingEnabled = true;
			this->listBRautor->Location = System::Drawing::Point(167, 114);
			this->listBRautor->Name = L"listBRautor";
			this->listBRautor->Size = System::Drawing::Size(120, 95);
			this->listBRautor->TabIndex = 3;
			// 
			// btnRautor
			// 
			this->btnRautor->Location = System::Drawing::Point(156, 71);
			this->btnRautor->Name = L"btnRautor";
			this->btnRautor->Size = System::Drawing::Size(131, 23);
			this->btnRautor->TabIndex = 2;
			this->btnRautor->Text = L"Buscar libros del autor";
			this->btnRautor->UseVisualStyleBackColor = true;
			this->btnRautor->Click += gcnew System::EventHandler(this, &MyForm::btnRautor_Click);
			// 
			// tbxRautor
			// 
			this->tbxRautor->Location = System::Drawing::Point(126, 45);
			this->tbxRautor->Name = L"tbxRautor";
			this->tbxRautor->Size = System::Drawing::Size(206, 20);
			this->tbxRautor->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(105, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(249, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Ingrese el autor por el que desea buscar sus libros: ";
			// 
			// gpbxReditorial
			// 
			this->gpbxReditorial->Controls->Add(this->listBReditorial);
			this->gpbxReditorial->Controls->Add(this->btnReditorial);
			this->gpbxReditorial->Controls->Add(this->tbxReditorial);
			this->gpbxReditorial->Controls->Add(this->label8);
			this->gpbxReditorial->Location = System::Drawing::Point(796, 17);
			this->gpbxReditorial->Name = L"gpbxReditorial";
			this->gpbxReditorial->Size = System::Drawing::Size(472, 224);
			this->gpbxReditorial->TabIndex = 11;
			this->gpbxReditorial->TabStop = false;
			this->gpbxReditorial->Text = L"Reporte por editorial";
			this->gpbxReditorial->Visible = false;
			// 
			// listBReditorial
			// 
			this->listBReditorial->FormattingEnabled = true;
			this->listBReditorial->Location = System::Drawing::Point(131, 93);
			this->listBReditorial->Name = L"listBReditorial";
			this->listBReditorial->Size = System::Drawing::Size(216, 108);
			this->listBReditorial->TabIndex = 3;
			// 
			// btnReditorial
			// 
			this->btnReditorial->Location = System::Drawing::Point(131, 53);
			this->btnReditorial->Name = L"btnReditorial";
			this->btnReditorial->Size = System::Drawing::Size(229, 23);
			this->btnReditorial->TabIndex = 2;
			this->btnReditorial->Text = L"Busqueda de libros por su editorial";
			this->btnReditorial->UseVisualStyleBackColor = true;
			this->btnReditorial->Click += gcnew System::EventHandler(this, &MyForm::btnReditorial_Click);
			// 
			// tbxReditorial
			// 
			this->tbxReditorial->Location = System::Drawing::Point(131, 27);
			this->tbxReditorial->Name = L"tbxReditorial";
			this->tbxReditorial->Size = System::Drawing::Size(317, 20);
			this->tbxReditorial->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ingrese el editorial: ";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// gpbxRfecha
			// 
			this->gpbxRfecha->Controls->Add(this->listBRfecha);
			this->gpbxRfecha->Controls->Add(this->button4);
			this->gpbxRfecha->Controls->Add(this->dtmRfecha);
			this->gpbxRfecha->Controls->Add(this->label9);
			this->gpbxRfecha->Location = System::Drawing::Point(801, 18);
			this->gpbxRfecha->Name = L"gpbxRfecha";
			this->gpbxRfecha->Size = System::Drawing::Size(594, 237);
			this->gpbxRfecha->TabIndex = 12;
			this->gpbxRfecha->TabStop = false;
			this->gpbxRfecha->Text = L"Reporte por fecha ";
			this->gpbxRfecha->Visible = false;
			// 
			// listBRfecha
			// 
			this->listBRfecha->FormattingEnabled = true;
			this->listBRfecha->Location = System::Drawing::Point(221, 108);
			this->listBRfecha->Name = L"listBRfecha";
			this->listBRfecha->Size = System::Drawing::Size(120, 95);
			this->listBRfecha->TabIndex = 3;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(174, 64);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(217, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Reporte por fecha de publicacion";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dtmRfecha
			// 
			this->dtmRfecha->Location = System::Drawing::Point(272, 24);
			this->dtmRfecha->Name = L"dtmRfecha";
			this->dtmRfecha->Size = System::Drawing::Size(271, 20);
			this->dtmRfecha->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(219, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Ingrese la fecha de publicacion de los libros: ";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// dtgvcontrolpersonas
			// 
			this->dtgvcontrolpersonas->AllowUserToAddRows = false;
			this->dtgvcontrolpersonas->AllowUserToDeleteRows = false;
			this->dtgvcontrolpersonas->AllowUserToOrderColumns = true;
			this->dtgvcontrolpersonas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtgvcontrolpersonas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dtgvcontrolpersonas->Location = System::Drawing::Point(422, 410);
			this->dtgvcontrolpersonas->Name = L"dtgvcontrolpersonas";
			this->dtgvcontrolpersonas->ReadOnly = true;
			this->dtgvcontrolpersonas->Size = System::Drawing::Size(546, 215);
			this->dtgvcontrolpersonas->TabIndex = 15;
			this->dtgvcontrolpersonas->Visible = false;
			this->dtgvcontrolpersonas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre ";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Documento de identificacion";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Numero de telefono";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Dedicacion";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Valor de referencia de los libros ingresados por la persona";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// gpbxPersonaindi
			// 
			this->gpbxPersonaindi->Controls->Add(this->btnVisualizarP);
			this->gpbxPersonaindi->Controls->Add(this->lblresultVisualizarIding);
			this->gpbxPersonaindi->Controls->Add(this->lblresultVisualizarprofesion);
			this->gpbxPersonaindi->Controls->Add(this->lblresultVisualizarnumero);
			this->gpbxPersonaindi->Controls->Add(this->lblresultVisualizardocum);
			this->gpbxPersonaindi->Controls->Add(this->label19);
			this->gpbxPersonaindi->Controls->Add(this->label18);
			this->gpbxPersonaindi->Controls->Add(this->label17);
			this->gpbxPersonaindi->Controls->Add(this->label16);
			this->gpbxPersonaindi->Controls->Add(this->tbxVisualizarnombrePersona);
			this->gpbxPersonaindi->Controls->Add(this->label15);
			this->gpbxPersonaindi->Location = System::Drawing::Point(6, 25);
			this->gpbxPersonaindi->Name = L"gpbxPersonaindi";
			this->gpbxPersonaindi->Size = System::Drawing::Size(418, 317);
			this->gpbxPersonaindi->TabIndex = 16;
			this->gpbxPersonaindi->TabStop = false;
			this->gpbxPersonaindi->Text = L"Visualizar datos de persona individualmente";
			this->gpbxPersonaindi->Visible = false;
			this->gpbxPersonaindi->Enter += gcnew System::EventHandler(this, &MyForm::grpxPersonaindi_Enter);
			// 
			// btnVisualizarP
			// 
			this->btnVisualizarP->BackColor = System::Drawing::Color::LimeGreen;
			this->btnVisualizarP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVisualizarP->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnVisualizarP->Location = System::Drawing::Point(104, 264);
			this->btnVisualizarP->Name = L"btnVisualizarP";
			this->btnVisualizarP->Size = System::Drawing::Size(234, 30);
			this->btnVisualizarP->TabIndex = 10;
			this->btnVisualizarP->Text = L"Visualizar datos de persona";
			this->btnVisualizarP->UseVisualStyleBackColor = false;
			this->btnVisualizarP->Click += gcnew System::EventHandler(this, &MyForm::btnVisualizarP_Click);
			// 
			// lblresultVisualizarIding
			// 
			this->lblresultVisualizarIding->AutoSize = true;
			this->lblresultVisualizarIding->Location = System::Drawing::Point(182, 212);
			this->lblresultVisualizarIding->Name = L"lblresultVisualizarIding";
			this->lblresultVisualizarIding->Size = System::Drawing::Size(0, 13);
			this->lblresultVisualizarIding->TabIndex = 9;
			// 
			// lblresultVisualizarprofesion
			// 
			this->lblresultVisualizarprofesion->AutoSize = true;
			this->lblresultVisualizarprofesion->Location = System::Drawing::Point(182, 163);
			this->lblresultVisualizarprofesion->Name = L"lblresultVisualizarprofesion";
			this->lblresultVisualizarprofesion->Size = System::Drawing::Size(0, 13);
			this->lblresultVisualizarprofesion->TabIndex = 8;
			// 
			// lblresultVisualizarnumero
			// 
			this->lblresultVisualizarnumero->AutoSize = true;
			this->lblresultVisualizarnumero->Location = System::Drawing::Point(180, 126);
			this->lblresultVisualizarnumero->Name = L"lblresultVisualizarnumero";
			this->lblresultVisualizarnumero->Size = System::Drawing::Size(0, 13);
			this->lblresultVisualizarnumero->TabIndex = 7;
			// 
			// lblresultVisualizardocum
			// 
			this->lblresultVisualizardocum->AutoSize = true;
			this->lblresultVisualizardocum->Location = System::Drawing::Point(180, 82);
			this->lblresultVisualizardocum->Name = L"lblresultVisualizardocum";
			this->lblresultVisualizardocum->Size = System::Drawing::Size(0, 13);
			this->lblresultVisualizardocum->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(21, 212);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(118, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Id de libros ingresados: ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(21, 163);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(119, 13);
			this->label18->TabIndex = 4;
			this->label18->Text = L"Dedicación (profesion): ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(18, 126);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(106, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Numero de telefonó: ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 82);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(133, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Documento identificación: ";
			// 
			// tbxVisualizarnombrePersona
			// 
			this->tbxVisualizarnombrePersona->Location = System::Drawing::Point(183, 36);
			this->tbxVisualizarnombrePersona->Name = L"tbxVisualizarnombrePersona";
			this->tbxVisualizarnombrePersona->Size = System::Drawing::Size(203, 20);
			this->tbxVisualizarnombrePersona->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(15, 36);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(161, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Ingrese el nombre de la pesona: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1512, 681);
			this->Controls->Add(this->gpbxPersonaindi);
			this->Controls->Add(this->dtgvcontrolpersonas);
			this->Controls->Add(this->gpbPersona);
			this->Controls->Add(this->gpbxRfecha);
			this->Controls->Add(this->gpbxReditorial);
			this->Controls->Add(this->gpbxRautor);
			this->Controls->Add(this->gpbxingreso);
			this->Controls->Add(this->gpbxEdicion);
			this->Controls->Add(this->gpbxRcategoria);
			this->Controls->Add(this->gpbxRdestino);
			this->Controls->Add(this->gpbmodificar);
			this->Controls->Add(this->gpbxRestado);
			this->Controls->Add(this->gpbxRcantidadlibro);
			this->Controls->Add(this->dtgvcontrol);
			this->Controls->Add(this->gpbeliminar);
			this->Controls->Add(this->gpbVisualizar);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
			this->gpbPersona->ResumeLayout(false);
			this->gpbPersona->PerformLayout();
			this->gpbxRdestino->ResumeLayout(false);
			this->gpbxRdestino->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgvcontrol))->EndInit();
			this->gpbxRcantidadlibro->ResumeLayout(false);
			this->gpbxRcantidadlibro->PerformLayout();
			this->gpbxRestado->ResumeLayout(false);
			this->gpbxRestado->PerformLayout();
			this->gpbxRcategoria->ResumeLayout(false);
			this->gpbxRcategoria->PerformLayout();
			this->gpbxEdicion->ResumeLayout(false);
			this->gpbxEdicion->PerformLayout();
			this->gpbxRautor->ResumeLayout(false);
			this->gpbxRautor->PerformLayout();
			this->gpbxReditorial->ResumeLayout(false);
			this->gpbxReditorial->PerformLayout();
			this->gpbxRfecha->ResumeLayout(false);
			this->gpbxRfecha->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtgvcontrolpersonas))->EndInit();
			this->gpbxPersonaindi->ResumeLayout(false);
			this->gpbxPersonaindi->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void eliminarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   void cerrar(); 
		   //void cambiousuario();

private: System::Void ingresarLibroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	//Establecimiento del groupboxingreso Visible + Ocultar los demas groupbox
	gpbxingreso->Visible = true; 
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbeliminar->Visible = false;
	gpbmodificar->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
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
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try
	{
		int id = stoi(marshal_as<std::string>(tbxvalorreferenciaEliminar->Text));
		lblresultnombreEliminar->Text = marshal_as<String^>(libro[id].getNombre());
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	try
	{
		int id = stoi(marshal_as<std::string>(tbxvalorreferenciaEliminar->Text));
		lblresultnombreEliminar->Text = marshal_as<String^>(libro[id].getNombre());

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	
}

private: System::Void modificarLibroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Establecimiento del groupboxModificar Visible + Ocultar los demas groupbox
	gpbmodificar->Visible = true; 
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
}
private: System::Void btnguardar_Click(System::Object^ sender, System::EventArgs^ e) {

	//Ingreso de libros 
	try
	{
		if (cont < 5)
		{
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
			dtgvcontrol[8, cont]->Value = cont;

			if (libro[cont].getNombre() == "")
			{
				std::string nombre = marshal_as<std::string>(tbxnombre->Text); 
				std::string autor = marshal_as<std::string>(tbxautor->Text); 
				std::string fecha = marshal_as<std::string>(datetimepfecha->Text); 
				std::string edicion = marshal_as<std::string>(tbxedicion->Text); 
				std::string estado = marshal_as<std::string>(cmbestado->Text); 
				std::string destino = marshal_as<std::string>(cmbdestino->Text); 
				std::string categoria = marshal_as<std::string>(cmbcategoria->Text);
				std::string editorial = marshal_as<std::string>(tbxeditorial->Text);
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
			gpbxRfecha->Visible = false;
			gpbPersona->Visible = false;
			dtgvcontrolpersonas->Visible = false;
			gpbxPersonaindi->Visible = false;
		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message); 
	}
}
private: System::Void btnvisualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Visualizacion de libro individual, ID especifico 
	try
	{
		int id = stoi(marshal_as<std::string>(tbxvreferenciaVisualizar->Text)); 
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
	//Visibilidad del control de libros
	try
	{
		gpbxingreso->Visible = false;
		gpbVisualizar->Visible = false;
		dtgvcontrol->Visible = true; 
		gpbmodificar->Visible = false;
		gpbeliminar->Visible = false;
		gpbxRcantidadlibro->Visible = false;
		gpbxRestado->Visible = false;
		gpbxRdestino->Visible = false;
		gpbxRcategoria->Visible = false;
		gpbxEdicion->Visible = false;
		gpbxRautor->Visible = false;
		gpbxReditorial->Visible = false;
		gpbxRfecha->Visible = false;
		gpbPersona->Visible = false;
		dtgvcontrolpersonas->Visible = false;
		gpbxPersonaindi->Visible = false;
		MessageBox::Show("Este es el control de los libros en el inventario bibliotecario.");

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex -> Message); 
	}
}
private: System::Void gpbeliminar_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnmodificar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try 
	{
		int id = stoi(marshal_as<std::string>(tbxvalorreferenciaModificar->Text));
		tbxnombreModificar->Text = marshal_as<String^>(libro[id].getNombre());
		tbxautorModificar->Text = marshal_as<String^>(libro[id].getAutor());
		datetimepfechaModificar->Text = marshal_as<String^>(libro[id].getFecha());
		tbxedicionModificar->Text = marshal_as<String^>(libro[id].getEdicion());
		cmbestadoModificar->Text = marshal_as<String^>(libro[id].getEstado());
		cmbdestinoModificar->Text = marshal_as<String^>(libro[id].getDestino());
		cmbcategoriaModificar->Text = marshal_as<String^>(libro[id].getCategoria());
		tbxeditorialModificar->Text = marshal_as<String^>(libro[id].getEditorial());

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void tbxeditorialModificar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnGuarLibMod_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Modifiacion de datos de libro en el DTGV
	try 
	{
		int id = stoi(marshal_as<std::string>(tbxvalorreferenciaModificar->Text));
		std::string nombreMod = marshal_as<std::string>(tbxnombreModificar->Text);
		std::string autorMod = marshal_as<std::string>(tbxautorModificar->Text);
		std::string fechaMod = marshal_as<std::string>(datetimepfechaModificar->Text);
		std::string edicionMod = marshal_as<std::string>(tbxedicionModificar->Text);
		std::string estadoMod = marshal_as<std::string>(cmbestadoModificar->Text);
		std::string destinoMod = marshal_as<std::string>(cmbdestinoModificar->Text);
		std::string categoriaMod = marshal_as<std::string>(cmbcategoriaModificar->Text);
		std::string editorialMod = marshal_as<std::string>(tbxeditorialModificar->Text);
		libro[id].setNombre(nombreMod);
		libro[id].setAutor(autorMod);
		libro[id].setFecha(fechaMod);
		libro[id].setEdicion(edicionMod);
		libro[id].setEstado(estadoMod);
		libro[id].setDestino(destinoMod);
		libro[id].setCategoria(categoriaMod);
		libro[id].setEditorial(editorialMod);
		MessageBox::Show("Libro modificado correctamente");

		dtgvcontrol[0, id]->Value = tbxnombreModificar->Text;
		dtgvcontrol[1, id]->Value = tbxautorModificar->Text;
		dtgvcontrol[2, id]->Value = datetimepfechaModificar->Text;
		dtgvcontrol[3, id]->Value = tbxedicionModificar->Text;
		dtgvcontrol[4, id]->Value = cmbestadoModificar->Text;
		dtgvcontrol[5, id]->Value = cmbdestinoModificar->Text;
		dtgvcontrol[6, id]->Value = tbxeditorialModificar->Text;
		dtgvcontrol[7, id]->Value = cmbcategoriaModificar->Text;
		dtgvcontrol[8, id]->Value = id;

		tbxautorModificar->Text = ""; 
		tbxedicionModificar->Text = "";
		tbxeditorialModificar->Text = "";
		tbxvalorreferenciaModificar->Text = "";
		cmbcategoriaModificar->Text = "";
		cmbdestinoModificar->Text = "";
		cmbestadoModificar->Text = ""; 
		tbxnombreModificar->Text = ""; 
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}

private: System::Void eliminarLibroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	//Establecimiento del groupboxeliminar Visible + Ocultar los demas groupbox
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = true;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false; 
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
	
}

private: System::Void btnConfirEliLib_Click(System::Object^ sender, System::EventArgs^ e) {

	//Eliminacion de libro 
	try
	{
		int id = stoi(marshal_as<std::string>(tbxvalorreferenciaEliminar->Text));

		libro[id].setNombre("");
		libro[id].setAutor("");
		libro[id].setFecha("");
		libro[id].setEdicion("");
		libro[id].setEstado("");
		libro[id].setDestino("");
		libro[id].setCategoria("");
		libro[id].setEditorial("");
		MessageBox::Show("Libro eliminado correctamente");

		cont = cont - 1; 
		impcont = (std::to_string(cont));

		lblresultnombreEliminar->Text = ""; 

		dtgvcontrol->Rows->RemoveAt(id); 

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void dtgvcontrol_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbltitR_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cantidadDeLibrosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Reporte de cantidad de libros 
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = true;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;

	impcont = std::to_string(cont); 
	lblresultRcantidadlibros->Text = marshal_as<String^>(impcont);
	
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbestadoModificar_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reportePorEstadoDeLibroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Reporte de estado visible, los demas diseños ocultos
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = true;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	//Reporte de libros por estado 
	std::string cmbes = marshal_as<std::string>(cmbRestado->Text);
	listBox1->Items->Clear();
	for (int i = 0; i < 5; i++)
	{
		if (cmbes == libro[i].getEstado())
		{
			listBox1->Items->Add(marshal_as<String^>(libro[i].getNombre()));
		}
	}
			
}
private: System::Void gpbxRestado_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbRestado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbRdestino_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void reportePorCategoríaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = true;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
	
}
private: System::Void reportePorDestinoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = true;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
	
}
private: System::Void gpbxRcategoria_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	//MOSTRAR REPORTE POR DESTINO
	std::string cmbdes = marshal_as<std::string>(cmbRdestino->Text);
	listBox2->Items->Clear();
	for (int i = 0; i < 5; i++)
	{
		if (cmbdes == libro[i].getDestino())
		{
			listBox2->Items->Add(marshal_as<String^>(libro[i].getNombre()));
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	//MOSTRAR REPORTE POR CATEGORIA
	std::string cmbcat = marshal_as<std::string>(cmbRcategoria->Text);
	listBox3->Items->Clear();
	for (int i = 0; i < 5; i++)
	{
		if (cmbcat == libro[i].getCategoria())
		{
			listBox3->Items->Add(marshal_as<String^>(libro[i].getNombre()));
		}
	}

}
private: System::Void reportePorEdicionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Reporte de edicion visible, los demas diseños ocultos 
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = true;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;

}
private: System::Void btnRedicion_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Reporte por edicion del libro 
	std::string edicionTxt = marshal_as<std::string>(tbxRedicion->Text); 
	listBRedicion->Items->Clear();
	for (int i = 0; i < 5; i++)
	{
		if (edicionTxt == libro[i].getEdicion())
		{ 
			listBRedicion->Items->Add(marshal_as<String^>(libro[i].getNombre())); 
		}
	}
}
private: System::Void reportePorAutorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	//Reporte de autor visible, los demas diseños ocultos
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = true; 
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
	
}
private: System::Void btnRautor_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Reporte de libros por autor 
	std::string autorTxt = marshal_as<std::string>(tbxRautor->Text);
	listBRautor->Items->Clear();
	for (int i = 0; i < 5; i++)
	{
		if (autorTxt == libro[i].getAutor())
		{
			listBRautor->Items->Add(marshal_as<String^>(libro[i].getNombre()));
		}
	}
}
private: System::Void reportePorEditorialToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	//Reporte de editorial visible, los demas diseños ocultos
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = true; 
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
	
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnReditorial_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Reporte de libros por editorial 
	std::string editorialTxt = marshal_as<std::string>(tbxReditorial->Text);
	listBReditorial->Items->Clear();
	for (int i = 0; i < 5; i++)
	{
		if (editorialTxt == libro[i].getEditorial())
		{
			listBReditorial->Items->Add(marshal_as<String^>(libro[i].getNombre()));
		}
	}
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	//Reporte por fecha de libros 
	std::string fecha = marshal_as<std::string>(dtmRfecha->Text); 
	listBRfecha->Items->Clear(); 
	for (int i = 0; i < 5; i++)
	{
		if (fecha == libro[i].getFecha())
		{
			listBRfecha->Items->Add(marshal_as<String^>(libro[i].getNombre()));
		}
	}
}
private: System::Void reportePorAñoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Reporte de libros por fecha visible, los demas diseños ocultos 
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = true; 
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
}

/*private: System::Void cerrarSesionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}*/

Void cerrarSesionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); 

private: System::Void ingresarPersonaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Reporte de ingreso de personas, los demas diseños ocultos 
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = true; 
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = false;
}
private: System::Void btnregistroPersona_Click(System::Object^ sender, System::EventArgs^ e) {
	//Registro de personas
	try
	{
		if (contp < 5)
		{
			dtgvcontrolpersonas->Rows->Add();
			contp = dtgvcontrolpersonas->Rows->Count - 1;
			dtgvcontrolpersonas[0, contp]->Value = tbxIngresopersona->Text;
			dtgvcontrolpersonas[1, contp]->Value = tbxIngresoDocIdent->Text;
			dtgvcontrolpersonas[2, contp]->Value = tbxIngresoNumero->Text;
			dtgvcontrolpersonas[3, contp]->Value = tbxIngresoProfesion->Text;
			dtgvcontrolpersonas[4, contp]->Value = tbxIngresoID->Text;

			if (persona[contp].getNombrePersona() == "")
			{
				std::string nombrepersona = marshal_as<std::string>(tbxIngresopersona->Text);
				int documentoident= std::stoi(marshal_as<std::string>(tbxIngresoDocIdent->Text));
				std::string numtelefono = marshal_as<std::string>(tbxIngresoNumero->Text);
				std::string dedicacion = marshal_as<std::string>(tbxIngresoProfesion->Text);
				std::string idingresado = marshal_as<std::string>(tbxIngresoID->Text);

				persona[contp].setNombrepersona(nombrepersona); 
				persona[contp].setDocumentoident(documentoident);
				persona[contp].setNumtelefono(numtelefono);
				persona[contp].setDedicacion(dedicacion);
				persona[contp].setIdIngresado(idingresado);

				MessageBox::Show("El registro de la persona ha sido exitoso");
			}
			contp++;
			tbxIngresopersona->Text = "";
			tbxIngresoDocIdent->Text = "";
			tbxIngresoNumero->Text = "";
			tbxIngresoProfesion->Text = "";
			tbxIngresoID->Text = "";
		}
		else
		{
			//Mensaje de declaracion de llenado de registro de personas 
			MessageBox::Show("El registro de personas esta lleno");
			tbxIngresopersona->Text = "";
			tbxIngresoDocIdent->Text = "";
			tbxIngresoNumero->Text = "";
			tbxIngresoProfesion->Text = "";
			tbxIngresoID->Text = "";

			tbxIngresopersona->Visible = false;
			tbxIngresoDocIdent->Visible = false;
			tbxIngresoNumero->Visible = false;
			tbxIngresoProfesion->Visible = false;
			tbxIngresoID->Visible = false;
		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("¡Aviso: Uno de los datos de la persona ha sido llenado incorrectamente!");
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void controlDePersonasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Habilitacion de visibilidad del control de personas + ocultar demas disenos 
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = true; 
	gpbxPersonaindi->Visible = false;
}
private: System::Void grpxPersonaindi_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnVisualizarP_Click(System::Object^ sender, System::EventArgs^ e) {
	//Visualizacion individual de personas 
	try
	{
		for (int i = 0; i < 5; i++)
		{
			if ((marshal_as<std::string>(tbxVisualizarnombrePersona->Text)) == persona[i].getNombrePersona())
			{
				lblresultVisualizarIding->Text = marshal_as<String^>(persona[i].getIdIngresado());
				lblresultVisualizardocum->Text = marshal_as<String^>(std::to_string(persona[i].getDocumentoIdent()));
				lblresultVisualizarnumero->Text = marshal_as<String^>(persona[i].getNumtelefono());
				lblresultVisualizarprofesion->Text = marshal_as<String^>(persona[i].getDedicacion());
			}
		}
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void visualizarPersonaIndividualmenteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	gpbmodificar->Visible = false;
	gpbeliminar->Visible = false;
	gpbxingreso->Visible = false;
	gpbVisualizar->Visible = false;
	dtgvcontrol->Visible = false;
	gpbxRcantidadlibro->Visible = false;
	gpbxRestado->Visible = false;
	gpbxRdestino->Visible = false;
	gpbxRcategoria->Visible = false;
	gpbxEdicion->Visible = false;
	gpbxRautor->Visible = false;
	gpbxReditorial->Visible = false;
	gpbxRfecha->Visible = false;
	gpbPersona->Visible = false;
	dtgvcontrolpersonas->Visible = false;
	gpbxPersonaindi->Visible = true; 
}
};
}