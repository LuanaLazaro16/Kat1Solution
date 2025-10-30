
//Pantalla Principal


#pragma once
#include "AdminisitradorForm.h"
#include "OperarioForm.h"
#include "RegistroForm.h"
namespace Kat1GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Kat1MODEL;
	using namespace Kat1CONTROLLER;


	/// <summary>
	/// Resumen de LoginUsuario
	/// </summary>
	public ref class LoginUsuario : public System::Windows::Forms::Form
	{
	public:
		LoginUsuario(void)
		{
			InitializeComponent();

			
			//Para que aparezcan * en la contrase�a
			this->Contrase�aCuadro->PasswordChar = '*';
			//Configuro al bot�n enter para ingresar
			this->AcceptButton = this->Ingresar;

			
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~LoginUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Usuario;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ UsuarioCuadro;
	private: System::Windows::Forms::TextBox^ Contrase�aCuadro;
	private: System::Windows::Forms::Button^ Ingresar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;




	protected:

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginUsuario::typeid));
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UsuarioCuadro = (gcnew System::Windows::Forms::TextBox());
			this->Contrase�aCuadro = (gcnew System::Windows::Forms::TextBox());
			this->Ingresar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->BackColor = System::Drawing::Color::White;
			this->Usuario->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Usuario->Location = System::Drawing::Point(378, 202);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(71, 23);
			this->Usuario->TabIndex = 0;
			this->Usuario->Text = L"Usuario";
			this->Usuario->Click += gcnew System::EventHandler(this, &LoginUsuario::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(378, 270);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Contrase�a";
			this->label1->Click += gcnew System::EventHandler(this, &LoginUsuario::label1_Click_1);
			// 
			// UsuarioCuadro
			// 
			this->UsuarioCuadro->Location = System::Drawing::Point(382, 232);
			this->UsuarioCuadro->Name = L"UsuarioCuadro";
			this->UsuarioCuadro->Size = System::Drawing::Size(158, 20);
			this->UsuarioCuadro->TabIndex = 2;
			// 
			// Contrase�aCuadro
			// 
			this->Contrase�aCuadro->Location = System::Drawing::Point(382, 296);
			this->Contrase�aCuadro->Name = L"Contrase�aCuadro";
			this->Contrase�aCuadro->Size = System::Drawing::Size(158, 20);
			this->Contrase�aCuadro->TabIndex = 3;
			this->Contrase�aCuadro->TextChanged += gcnew System::EventHandler(this, &LoginUsuario::Contrase�aCuadro_TextChanged);
			// 
			// Ingresar
			// 
			this->Ingresar->BackColor = System::Drawing::Color::White;
			this->Ingresar->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ingresar->Location = System::Drawing::Point(422, 355);
			this->Ingresar->Name = L"Ingresar";
			this->Ingresar->Size = System::Drawing::Size(75, 27);
			this->Ingresar->TabIndex = 4;
			this->Ingresar->Text = L"Ingresar";
			this->Ingresar->UseVisualStyleBackColor = false;
			this->Ingresar->Click += gcnew System::EventHandler(this, &LoginUsuario::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(310, 171);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(298, 241);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginUsuario::pictureBox1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(397, 335);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(131, 13);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"�Olvidaste tu contrase�a\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginUsuario::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(531, 386);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(63, 13);
			this->linkLabel2->TabIndex = 7;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Registrarme";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginUsuario::linkLabel2_LinkClicked);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(347, 290);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(29, 31);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(347, 227);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(29, 31);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(-171, -120);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1071, 630);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LoginUsuario::pictureBox3_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(786, 53);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(61, 84);
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			// 
			// frm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 497);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Ingresar);
			this->Controls->Add(this->Contrase�aCuadro);
			this->Controls->Add(this->UsuarioCuadro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->HelpButton = true;
			this->Name = L"LoginUsuario";
			this->Text = L"LoginUsuario";
			this->Load += gcnew System::EventHandler(this, &LoginUsuario::frm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //Ac� est� el bot�n de ingreso

		//Validando los datos ingresados
		if (UsuarioCuadro->Text == "admin" && Contrase�aCuadro->Text == "1234") { //Para el admin

			//Se pasa a la siguiente ventana
			AdminisitradorForm^ Adminisitrador_Form = gcnew AdminisitradorForm();
			Adminisitrador_Form->Owner = this;
			Adminisitrador_Form->Show();
			this->Hide();

		}
		else if (UsuarioCuadro->Text == "user" && Contrase�aCuadro->Text == "5678") { //Para el usuario
			//Se pasa a la siguiente ventana
			OperarioForm^ Operario_Form = gcnew OperarioForm();
			Operario_Form->Owner = this;
			Operario_Form->Show();
			this->Hide();

		}
		else {
			//Buscar en la base de datos de usuarios registrados
			List<Kat1MODEL::Usuario^>^ usuarios = Kat1CONTROLLER::Controller::ObtenerUsuario();
			bool user_disp = false;
			String^ rolUsuario = "";

			for (int i = 0; i < usuarios->Count; i++) {
				if (UsuarioCuadro->Text == usuarios[i]->Username && Contrase�aCuadro->Text == usuarios[i]->Password) {
					user_disp = true;
					rolUsuario = usuarios[i]->UserRole;
					break;
				}
			}

			if (user_disp == true) {
				//Redirigir seg�n el rol
				if (rolUsuario == "Administrador") {
					AdminisitradorForm^ Adminisitrador_Form = gcnew AdminisitradorForm();
					Adminisitrador_Form->Owner = this;
					Adminisitrador_Form->Show();
					this->Hide();
				}
				else {
					OperarioForm^ Operario_Form = gcnew OperarioForm();
					Operario_Form->Owner = this;
					Operario_Form->Show();
					this->Hide();
				}
			}
			else {
				// Credenciales incorrectas o vac�as        
				MessageBox::Show("Usuario o contrase�a incorrectos");
			}
		}
	}

	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
		RegistroForm^ registro_form = gcnew RegistroForm();
		registro_form->Owner = this;
		registro_form->ShowDialog(); // Usa ShowDialog para que sea modal
		// Cuando el usuario cierre el Registro, volver� aqu� autom�ticamente
	}
	private: System::Void frm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Contrase�aCuadro_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
