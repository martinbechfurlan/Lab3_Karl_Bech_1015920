#include"Lista.h"
#include"Pila.h";

#pragma once
#include <stdlib.h>
#include<iostream>
#include <time.h>



namespace LAB3KarlBech1015920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Lista* listacartas;
		Pila* pilacartas;
		Pila* pilacartas1;
		Pila* pilacartas2;
		Pila* pilacartas3;
		Pila* pilacartas4;
		Pila* pilacartas5;
		Pila* pilacartas6;
		Pila* pilacartas7;
		Lista* Listanueva;
	private: System::Windows::Forms::Button^ restart;




	public:
	private: System::Windows::Forms::Label^ Cartas;
	public:

		MyForm(void)
		{
			InitializeComponent();
			listacartas = new Lista();
			listacartas->conta = 0;
			listacartas->start = nullptr;
			listacartas->end = nullptr;
			pilacartas = new Pila();
			pilacartas1 = new Pila();
			pilacartas2 = new Pila();
			pilacartas3 = new Pila();
			pilacartas4 = new Pila();
			pilacartas5 = new Pila();
			pilacartas6 = new Pila();
			pilacartas7 = new Pila();

			Listanueva = new Lista();
			Listanueva->conta = 0;
			Listanueva->start = nullptr;
			Listanueva->end = nullptr;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lista1;
	private: System::Windows::Forms::ListBox^ lista2;
	private: System::Windows::Forms::ListBox^ lista3;
	private: System::Windows::Forms::ListBox^ lista4;
	private: System::Windows::Forms::ListBox^ lista5;
	private: System::Windows::Forms::ListBox^ lista6;
	private: System::Windows::Forms::ListBox^ lista7;
	protected:



	protected:

	protected:






	private: System::Windows::Forms::ListBox^ lb_next;




	private: System::Windows::Forms::Label^ lbl_g1;
	private: System::Windows::Forms::Label^ lbl_g2;
	private: System::Windows::Forms::Label^ lbl_g3;
	private: System::Windows::Forms::Label^ lbl_g4;
	private: System::Windows::Forms::Label^ lbl_g5;
	private: System::Windows::Forms::Label^ lbl_g6;
	private: System::Windows::Forms::Label^ lbl_g7;
	private: System::Windows::Forms::Label^ inst;

	private: System::Windows::Forms::Button^ btn_out;

	private: System::Windows::Forms::Button^ btn_in;
	private: System::Windows::Forms::TextBox^ txt_out;
	private: System::Windows::Forms::TextBox^ txt_in;
	private: System::Windows::Forms::Button^ btn_next;








	protected:








	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lista1 = (gcnew System::Windows::Forms::ListBox());
			this->lista2 = (gcnew System::Windows::Forms::ListBox());
			this->lista3 = (gcnew System::Windows::Forms::ListBox());
			this->lista4 = (gcnew System::Windows::Forms::ListBox());
			this->lista5 = (gcnew System::Windows::Forms::ListBox());
			this->lista6 = (gcnew System::Windows::Forms::ListBox());
			this->lista7 = (gcnew System::Windows::Forms::ListBox());
			this->lb_next = (gcnew System::Windows::Forms::ListBox());
			this->lbl_g1 = (gcnew System::Windows::Forms::Label());
			this->lbl_g2 = (gcnew System::Windows::Forms::Label());
			this->lbl_g3 = (gcnew System::Windows::Forms::Label());
			this->lbl_g4 = (gcnew System::Windows::Forms::Label());
			this->lbl_g5 = (gcnew System::Windows::Forms::Label());
			this->lbl_g6 = (gcnew System::Windows::Forms::Label());
			this->lbl_g7 = (gcnew System::Windows::Forms::Label());
			this->inst = (gcnew System::Windows::Forms::Label());
			this->btn_out = (gcnew System::Windows::Forms::Button());
			this->btn_in = (gcnew System::Windows::Forms::Button());
			this->txt_out = (gcnew System::Windows::Forms::TextBox());
			this->txt_in = (gcnew System::Windows::Forms::TextBox());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->Cartas = (gcnew System::Windows::Forms::Label());
			this->restart = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lista1
			// 
			this->lista1->BackColor = System::Drawing::Color::Yellow;
			this->lista1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lista1->FormattingEnabled = true;
			this->lista1->Location = System::Drawing::Point(146, 32);
			this->lista1->Margin = System::Windows::Forms::Padding(2);
			this->lista1->Name = L"lista1";
			this->lista1->Size = System::Drawing::Size(52, 286);
			this->lista1->TabIndex = 1;
			// 
			// lista2
			// 
			this->lista2->BackColor = System::Drawing::Color::Yellow;
			this->lista2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lista2->FormattingEnabled = true;
			this->lista2->Location = System::Drawing::Point(304, 32);
			this->lista2->Margin = System::Windows::Forms::Padding(2);
			this->lista2->Name = L"lista2";
			this->lista2->Size = System::Drawing::Size(52, 286);
			this->lista2->TabIndex = 2;
			// 
			// lista3
			// 
			this->lista3->BackColor = System::Drawing::Color::Yellow;
			this->lista3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lista3->FormattingEnabled = true;
			this->lista3->Location = System::Drawing::Point(451, 32);
			this->lista3->Margin = System::Windows::Forms::Padding(2);
			this->lista3->Name = L"lista3";
			this->lista3->Size = System::Drawing::Size(52, 286);
			this->lista3->TabIndex = 3;
			// 
			// lista4
			// 
			this->lista4->BackColor = System::Drawing::Color::Yellow;
			this->lista4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lista4->FormattingEnabled = true;
			this->lista4->Location = System::Drawing::Point(607, 32);
			this->lista4->Margin = System::Windows::Forms::Padding(2);
			this->lista4->Name = L"lista4";
			this->lista4->Size = System::Drawing::Size(52, 286);
			this->lista4->TabIndex = 4;
			// 
			// lista5
			// 
			this->lista5->BackColor = System::Drawing::Color::Yellow;
			this->lista5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lista5->FormattingEnabled = true;
			this->lista5->Location = System::Drawing::Point(779, 32);
			this->lista5->Margin = System::Windows::Forms::Padding(2);
			this->lista5->Name = L"lista5";
			this->lista5->Size = System::Drawing::Size(52, 286);
			this->lista5->TabIndex = 5;
			// 
			// lista6
			// 
			this->lista6->BackColor = System::Drawing::Color::Yellow;
			this->lista6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lista6->FormattingEnabled = true;
			this->lista6->Location = System::Drawing::Point(960, 32);
			this->lista6->Margin = System::Windows::Forms::Padding(2);
			this->lista6->Name = L"lista6";
			this->lista6->Size = System::Drawing::Size(52, 286);
			this->lista6->TabIndex = 6;
			// 
			// lista7
			// 
			this->lista7->BackColor = System::Drawing::Color::Yellow;
			this->lista7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lista7->FormattingEnabled = true;
			this->lista7->Location = System::Drawing::Point(1129, 32);
			this->lista7->Margin = System::Windows::Forms::Padding(2);
			this->lista7->Name = L"lista7";
			this->lista7->Size = System::Drawing::Size(52, 286);
			this->lista7->TabIndex = 7;
			// 
			// lb_next
			// 
			this->lb_next->BackColor = System::Drawing::Color::Goldenrod;
			this->lb_next->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lb_next->FormattingEnabled = true;
			this->lb_next->Location = System::Drawing::Point(21, 184);
			this->lb_next->Margin = System::Windows::Forms::Padding(2);
			this->lb_next->Name = L"lb_next";
			this->lb_next->Size = System::Drawing::Size(108, 78);
			this->lb_next->TabIndex = 8;
			// 
			// lbl_g1
			// 
			this->lbl_g1->AutoSize = true;
			this->lbl_g1->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g1->Location = System::Drawing::Point(75, 273);
			this->lbl_g1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_g1->Name = L"lbl_g1";
			this->lbl_g1->Size = System::Drawing::Size(67, 17);
			this->lbl_g1->TabIndex = 10;
			this->lbl_g1->Text = L"Grupo 1";
			// 
			// lbl_g2
			// 
			this->lbl_g2->AutoSize = true;
			this->lbl_g2->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g2->Location = System::Drawing::Point(233, 273);
			this->lbl_g2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_g2->Name = L"lbl_g2";
			this->lbl_g2->Size = System::Drawing::Size(67, 17);
			this->lbl_g2->TabIndex = 11;
			this->lbl_g2->Text = L"Grupo 2";
			// 
			// lbl_g3
			// 
			this->lbl_g3->AutoSize = true;
			this->lbl_g3->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g3->Location = System::Drawing::Point(380, 273);
			this->lbl_g3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_g3->Name = L"lbl_g3";
			this->lbl_g3->Size = System::Drawing::Size(67, 17);
			this->lbl_g3->TabIndex = 12;
			this->lbl_g3->Text = L"Grupo 3";
			// 
			// lbl_g4
			// 
			this->lbl_g4->AutoSize = true;
			this->lbl_g4->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g4->Location = System::Drawing::Point(536, 273);
			this->lbl_g4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_g4->Name = L"lbl_g4";
			this->lbl_g4->Size = System::Drawing::Size(67, 17);
			this->lbl_g4->TabIndex = 13;
			this->lbl_g4->Text = L"Grupo 4";
			// 
			// lbl_g5
			// 
			this->lbl_g5->AutoSize = true;
			this->lbl_g5->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g5->Location = System::Drawing::Point(708, 273);
			this->lbl_g5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_g5->Name = L"lbl_g5";
			this->lbl_g5->Size = System::Drawing::Size(67, 17);
			this->lbl_g5->TabIndex = 14;
			this->lbl_g5->Text = L"Grupo 5";
			// 
			// lbl_g6
			// 
			this->lbl_g6->AutoSize = true;
			this->lbl_g6->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g6->Location = System::Drawing::Point(883, 273);
			this->lbl_g6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_g6->Name = L"lbl_g6";
			this->lbl_g6->Size = System::Drawing::Size(67, 17);
			this->lbl_g6->TabIndex = 15;
			this->lbl_g6->Text = L"Grupo 6";
			// 
			// lbl_g7
			// 
			this->lbl_g7->AutoSize = true;
			this->lbl_g7->BackColor = System::Drawing::Color::Transparent;
			this->lbl_g7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lbl_g7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_g7->Location = System::Drawing::Point(1049, 273);
			this->lbl_g7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_g7->Name = L"lbl_g7";
			this->lbl_g7->Size = System::Drawing::Size(67, 17);
			this->lbl_g7->TabIndex = 16;
			this->lbl_g7->Text = L"Grupo 7";
			// 
			// inst
			// 
			this->inst->AutoSize = true;
			this->inst->BackColor = System::Drawing::Color::Transparent;
			this->inst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->inst->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->inst->Location = System::Drawing::Point(320, 352);
			this->inst->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->inst->Name = L"inst";
			this->inst->Size = System::Drawing::Size(258, 24);
			this->inst->TabIndex = 17;
			this->inst->Text = L"Presione R para comenzar";
			// 
			// btn_out
			// 
			this->btn_out->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->btn_out->Enabled = false;
			this->btn_out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btn_out->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_out->Location = System::Drawing::Point(637, 361);
			this->btn_out->Margin = System::Windows::Forms::Padding(2);
			this->btn_out->Name = L"btn_out";
			this->btn_out->Size = System::Drawing::Size(107, 52);
			this->btn_out->TabIndex = 18;
			this->btn_out->Text = L"Grupo a quitar:";
			this->btn_out->UseVisualStyleBackColor = false;
			this->btn_out->Click += gcnew System::EventHandler(this, &MyForm::btn_out_Click);
			// 
			// btn_in
			// 
			this->btn_in->BackColor = System::Drawing::Color::Goldenrod;
			this->btn_in->Enabled = false;
			this->btn_in->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btn_in->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_in->Location = System::Drawing::Point(886, 361);
			this->btn_in->Margin = System::Windows::Forms::Padding(2);
			this->btn_in->Name = L"btn_in";
			this->btn_in->Size = System::Drawing::Size(107, 52);
			this->btn_in->TabIndex = 19;
			this->btn_in->Text = L"Grupo a insertar:";
			this->btn_in->UseVisualStyleBackColor = false;
			this->btn_in->Click += gcnew System::EventHandler(this, &MyForm::btn_in_Click);
			// 
			// txt_out
			// 
			this->txt_out->BackColor = System::Drawing::Color::Khaki;
			this->txt_out->Location = System::Drawing::Point(762, 378);
			this->txt_out->Margin = System::Windows::Forms::Padding(2);
			this->txt_out->Name = L"txt_out";
			this->txt_out->Size = System::Drawing::Size(79, 20);
			this->txt_out->TabIndex = 20;
			// 
			// txt_in
			// 
			this->txt_in->BackColor = System::Drawing::Color::Khaki;
			this->txt_in->Location = System::Drawing::Point(1009, 375);
			this->txt_in->Margin = System::Windows::Forms::Padding(2);
			this->txt_in->Name = L"txt_in";
			this->txt_in->Size = System::Drawing::Size(79, 20);
			this->txt_in->TabIndex = 21;
			// 
			// btn_next
			// 
			this->btn_next->BackColor = System::Drawing::Color::LightYellow;
			this->btn_next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btn_next->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_next->Location = System::Drawing::Point(8, 98);
			this->btn_next->Margin = System::Windows::Forms::Padding(2);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(121, 63);
			this->btn_next->TabIndex = 22;
			this->btn_next->Text = L"Mostrar siguiente carta";
			this->btn_next->UseVisualStyleBackColor = false;
			this->btn_next->Click += gcnew System::EventHandler(this, &MyForm::btn_next_Click);
			// 
			// Cartas
			// 
			this->Cartas->AutoSize = true;
			this->Cartas->BackColor = System::Drawing::Color::Transparent;
			this->Cartas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->Cartas->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Cartas->Location = System::Drawing::Point(543, 9);
			this->Cartas->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Cartas->Name = L"Cartas";
			this->Cartas->Size = System::Drawing::Size(92, 24);
			this->Cartas->TabIndex = 9;
			this->Cartas->Text = L"CARTAS";
			// 
			// restart
			// 
			this->restart->AutoSize = true;
			this->restart->Location = System::Drawing::Point(12, 352);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(242, 60);
			this->restart->TabIndex = 23;
			this->restart->Text = L"REINICIAR";
			this->restart->UseVisualStyleBackColor = true;
			this->restart->Click += gcnew System::EventHandler(this, &MyForm::restart_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Red;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1192, 424);
			this->Controls->Add(this->restart);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->txt_in);
			this->Controls->Add(this->txt_out);
			this->Controls->Add(this->btn_in);
			this->Controls->Add(this->btn_out);
			this->Controls->Add(this->inst);
			this->Controls->Add(this->lbl_g7);
			this->Controls->Add(this->lbl_g6);
			this->Controls->Add(this->lbl_g5);
			this->Controls->Add(this->lbl_g4);
			this->Controls->Add(this->lbl_g3);
			this->Controls->Add(this->lbl_g2);
			this->Controls->Add(this->lbl_g1);
			this->Controls->Add(this->Cartas);
			this->Controls->Add(this->lb_next);
			this->Controls->Add(this->lista7);
			this->Controls->Add(this->lista6);
			this->Controls->Add(this->lista5);
			this->Controls->Add(this->lista4);
			this->Controls->Add(this->lista3);
			this->Controls->Add(this->lista2);
			this->Controls->Add(this->lista1);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<String^>^ mazo = gcnew array<String^>(52);
		array<String^>^ mazo_revuelto = gcnew array<String^>(52);
		array<String^>^ letras = gcnew array<String^>(52);
		array<String^>^ mazo1 = gcnew array<String^>(20);
		array<String^>^ mazo2 = gcnew array<String^>(20);
		array<String^>^ mazo3 = gcnew array<String^>(20);
		array<String^>^ mazo4 = gcnew array<String^>(20);
		array<String^>^ mazo5 = gcnew array<String^>(20);
		array<String^>^ mazo6 = gcnew array<String^>(20);
		array<String^>^ mazo7 = gcnew array<String^>(20);
		array<String^>^ letrasincluidas = gcnew array<String^>(40);
		int almacenar_dato;
		int numero_out;
		int numero_in;

		int puntosgenerales = 0;

		int puntos1 = 0;
		int puntos2 = 0;
		int puntos3 = 0;
		int puntos4 = 0;
		int puntos5 = 0;
		int puntos6 = 0;
		int puntos7 = 0;

		void victoria() {
			
			if ((puntos1 > 3 || puntos2 > 3 || puntos3 > 3 || puntos4 > 3 || puntos5 > 3 || puntos6 > 3 || puntos7 > 3))
			{
				MessageBox::Show("VICTORIA");
				MessageBox::Show("Puntos Obtenidos" + Convert::ToString(puntosgenerales));
				

			}
		}
	
		

		
		void hacer_mazo() {
			try {
				for (int i = 0; i < 52; i++) {
					if (i >= 0 && i <= 12) {
						mazo[i] =  "N";
						listacartas->InsertAtStart(i+1);
					}
					else if (i >= 13 && i <= 25) {
						mazo[i] =  "N";
						listacartas->InsertAtStart(i-12);
					}
					else if (i >= 26 && i <= 38) {
						mazo[i] =  "R";
						listacartas->InsertAtStart(i-25);
					}
					else if (i >= 39 || i <= 52) {
						mazo[i] = "R";
						listacartas->InsertAtStart(i-38);
					}
				}
				revolver_mazo();

			}
			catch (Exception^ e) {

			}
		}
		void revolver_mazo() {
			int random;
			int valor;
			try {
				for (int i = 0; i < 51; i++) {
					srand(time(NULL));
					random = rand() %mazo->Length;
					valor = listacartas->GetValue(random);
					pilacartas->Insert(valor);
					listacartas->ExtractAtPosition(random);
					mazo_revuelto[i] = Convert::ToString(pilacartas->Value(i)) + mazo[random];
					letras[i] = mazo[random];
					for (int o = random; o < mazo->Length - 1; o++) {
						mazo[o] = mazo[o + 1];
					}
					mazo->Resize(mazo, mazo->Length - 1);
				}
				repartir_cartas(mazo_revuelto);
			}
			catch (Exception^ e) {

			}
			
		}
		void repartir_cartas(array<String^>^ mazoA) {
			String^ carta;
			array<Int32^>^ numeros = gcnew array<Int32^>(52);
			for (int i = 0; i < mazoA->Length; i++) {
				if (i < 1) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					pilacartas1->Insert(Convert::ToInt32(numeros[i]));
					mazo1[i] = letras[i];
					lista1->Items->Add(mazoA[i]);
				}
				if (i > 0 && i < 3) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					pilacartas2->Insert(Convert::ToInt32(numeros[i]));
					mazo2[i - 1] = mazoA[i];
					lista2->Items->Add(mazoA[i]);
				}
				if (i > 2 && i < 6) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo3[i - 3] = letras[i];
					pilacartas3->Insert(Convert::ToInt32(numeros[i]));
					lista3->Items->Add(mazoA[i]);
				}
				if (i > 5 && i < 10) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo4[i - 6] = letras[i];
					pilacartas4->Insert(Convert::ToInt32(numeros[i]));
					lista4->Items->Add(mazoA[i]);
				}
				if (i > 9 && i < 15) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo5[i - 10] = letras[i];
					pilacartas5->Insert(Convert::ToInt32(numeros[i]));
					lista5->Items->Add(mazoA[i]);
				}
				if (i > 14 && i < 21) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo6[i - 15] = letras[i];
					pilacartas6->Insert(Convert::ToInt32(numeros[i]));
					lista6->Items->Add(mazoA[i]);
				}
				if (i > 20 && i < 28) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					mazo7[i - 21] = letras[i];
					pilacartas7->Insert(Convert::ToInt32(numeros[i]));
					lista7->Items->Add(mazoA[i]);
				}
				else if (i > 27 && i < 51) {
					carta = mazoA[i];
					numeros[i] = definir_numero(carta);
					letrasincluidas[i - 28] = letras[i];
					Listanueva->InsertAtEnd(Convert::ToInt32(numeros[i]));

				}
			}
			lb_next->Items->Add(Listanueva->GetValueAtEnd() + letrasincluidas[0]);
		}
		int definir_numero(String^ carta) {
			int numero;
			if (carta->Length > 2) {
				numero = Convert::ToInt32(carta->Substring(0, 2));
				return numero;
			}
			else {
				numero = Convert::ToInt32(carta->Substring(0, 1));
				return numero;
			}
		}
	private: System::Void dgv_Tablero_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::R)
	{
		hacer_mazo();
		btn_out->Enabled = true;
		btn_in->Enabled = true;
	}
}
private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e) {
	lb_next->Items->Clear();
	int cont = 0;
	cont++;
	if (cont < 24) {
		Listanueva->InsertAtStart(Listanueva->GetValueAtEnd());
		Listanueva->ExtractAtEnd();
		lb_next->Items->Add(Listanueva->GetValueAtEnd() + letrasincluidas[cont]);
	}
	else {
		cont = 0;
	}
}
private: System::Void btn_out_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		numero_out = Convert::ToInt32(txt_out->Text);

		if (numero_out == 0) {
			if (pilacartas1->isEmpty()) {
				MessageBox::Show("Lista vacía", "X", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				almacenar_dato = Listanueva->GetValueAtEnd();
				puntosgenerales = puntosgenerales - 3;
			}
		}

		else if (numero_out == 1) {
			if (pilacartas1->isEmpty()) {
				MessageBox::Show("Lista vacía", "X", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else{ 
				almacenar_dato = pilacartas1->Value_Extract_Peek();
			}
		}
		else if (numero_out == 2) {
			if (pilacartas2->isEmpty()) {
				MessageBox::Show("Lista vacía", "X", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				almacenar_dato = pilacartas2->Value_Extract_Peek();
			}
		}
		else if (numero_out == 3) {
			if (pilacartas3->isEmpty()) {
				MessageBox::Show("Lista vacía", "X", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				almacenar_dato = pilacartas3->Value_Extract_Peek();
			}
		}
		else if (numero_out == 4) {
			if (pilacartas4->isEmpty()) {
				MessageBox::Show("Lista vacía", "X", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				almacenar_dato = pilacartas4->Value_Extract_Peek();
			}
		}
		else if (numero_out == 5) {
			if (pilacartas5->isEmpty()) {
				MessageBox::Show("Lista vacía", "X", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				almacenar_dato = pilacartas5->Value_Extract_Peek();
			}
		}
		else if (numero_out == 6) {
			if (pilacartas6->isEmpty()) {
				MessageBox::Show("Lista vacía", "X", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				almacenar_dato = pilacartas6->Value_Extract_Peek();
			}
		}
		else if (numero_out == 7) {
			if (pilacartas7->isEmpty()) {
				MessageBox::Show("Lista vacía", "X", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				almacenar_dato = pilacartas7->Value_Extract_Peek();
			}
		}
		else {
			MessageBox::Show("FUERA DE PARAMETROS");
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("X ,,, VALOR INVALIDO");
	}

}
private: System::Void btn_in_Click(System::Object^ sender, System::EventArgs^ e) {
	
	numero_in = Convert::ToInt32(txt_in->Text);

	if (numero_in == 1) {
		if (almacenar_dato == (pilacartas1->Value_Extract_Peek() - 1)) {
			pilacartas1->Insert(almacenar_dato);
			lista1->Items->Add(almacenar_dato + letra(numero_out));
			pila_actualizar(numero_out);
			puntos1++;
			puntosgenerales = puntosgenerales + 5;
			victoria();

		}
	}
	else if (numero_in == 2) {
		pilacartas2->Insert(almacenar_dato);
		lista2->Items->Add(almacenar_dato + letra(numero_out));
		pila_actualizar(numero_out);
		puntos2++;
		puntosgenerales = puntosgenerales + 5;
		victoria();
	}
	else if (numero_in == 3) {
		pilacartas3->Insert(almacenar_dato);
		lista3->Items->Add(almacenar_dato + letra(numero_out));
		pila_actualizar(numero_out);
		puntos3++;
		puntosgenerales = puntosgenerales + 5;
		victoria();
	}
	else if (numero_in == 4) {
		pilacartas4->Insert(almacenar_dato);
		lista4->Items->Add(almacenar_dato + letra(numero_out));
		pila_actualizar(numero_out);
		puntos4++;
		puntosgenerales = puntosgenerales + 5;
		victoria();
	}
	else if (numero_in == 5) {
		pilacartas5->Insert(almacenar_dato);
		lista5->Items->Add(almacenar_dato + letra(numero_out));
		pila_actualizar(numero_out);
		puntos5++;
		puntosgenerales = puntosgenerales + 5;
		victoria();
	}
	else if (numero_in == 6) {
		pilacartas6->Insert(almacenar_dato);
		lista6->Items->Add(almacenar_dato + letra(numero_out));
		pila_actualizar(numero_out);
		puntos6++;
		puntosgenerales = puntosgenerales + 5;
		victoria();
	}
	else if (numero_in == 7) {
		pilacartas7->Insert(almacenar_dato);
		lista7->Items->Add(almacenar_dato + letra(numero_out));
		pila_actualizar(numero_out);
		puntos7++;
		puntosgenerales = puntosgenerales + 5;
		victoria();
	}
	else {
		MessageBox::Show("El número que ingresó no está dentro de los parámetros");
	}

}
	   String^ letra(int numero) {
		   if (numero_out == 0) {
			   return letrasincluidas[lb_next->Items->Count - 1];
		   }
		   if (numero_out == 1) {
			   return mazo1[lista1->Items->Count - 1];

		   }
		   if (numero_out == 2) {
			   return mazo2[lista2->Items->Count - 1];

		   }
		   if (numero_out == 3) {
			   return mazo3[lista3->Items->Count - 1];
		   }
		   if (numero_out == 4) {
			   return mazo4[lista4->Items->Count - 1];
		   }
		   if (numero_out == 5) {
			   return mazo5[lista5->Items->Count - 1];
		   }
		   if (numero_out == 6) {
			   return mazo6[lista6->Items->Count - 1];
		   }
		   if (numero_out == 7) {
			   return mazo7[lista7->Items->Count - 1];
		   }
	   }

	   void pila_actualizar(int numero) {
		   
		   if (numero_out == 0) {
			   Listanueva->ExtractAtEnd();
			   lb_next->Items->RemoveAt(lb_next->Items->Count - 1);
		   }

		   if (numero_out == 1) {
			   pilacartas1->Peek();
			   lista1->Items->RemoveAt(lista1->Items->Count-1);

		   }
		   if (numero_out == 2) {
			   pilacartas2->Peek();
			   lista2->Items->RemoveAt(lista2->Items->Count-1);
			   
		   }
		   if (numero_out == 3) {
			   pilacartas3->Peek();
			   lista3->Items->RemoveAt(lista3->Items->Count - 1);
		   }
		   if (numero_out == 4) {
			   pilacartas4->Peek();
			   lista4->Items->RemoveAt(lista4->Items->Count - 1);			 
		   }
		   if (numero_out == 5) {
			   pilacartas5->Peek();
			   lista5->Items->RemoveAt(lista5->Items->Count - 1);			   
		   }
		   if (numero_out == 6) {
			   pilacartas6->Peek();
			   lista6->Items->RemoveAt(lista6->Items->Count - 1);			   
		   }
		   if (numero_out == 7) {
			   pilacartas7->Peek();
			   lista7->Items->RemoveAt(lista7->Items->Count - 1);		
		   }
	   }
private: System::Void restart_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}
