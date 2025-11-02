
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

			
			//Para que aparezcan * en la contraseña
			this->ContraseñaCuadro->PasswordChar = '*';
			//Configuro al botón enter para ingresar
			this->AcceptButton = this->Ingresar;

			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::TextBox^ ContraseñaCuadro;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginUsuario::typeid));
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UsuarioCuadro = (gcnew System::Windows::Forms::TextBox());
			this->ContraseñaCuadro = (gcnew System::Windows::Forms::TextBox());
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
			this->Usuario->Location = System::Drawing::Point(504, 249);
			this->Usuario->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(92, 29);
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
			this->label1->Location = System::Drawing::Point(504, 332);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Contraseña";
			this->label1->Click += gcnew System::EventHandler(this, &LoginUsuario::label1_Click_1);
			// 
			// UsuarioCuadro
			// 
			this->UsuarioCuadro->Location = System::Drawing::Point(509, 286);
			this->UsuarioCuadro->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->UsuarioCuadro->Name = L"UsuarioCuadro";
			this->UsuarioCuadro->Size = System::Drawing::Size(209, 22);
			this->UsuarioCuadro->TabIndex = 2;
			// 
			// ContraseñaCuadro
			// 
			this->ContraseñaCuadro->Location = System::Drawing::Point(510, 365);
			this->ContraseñaCuadro->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ContraseñaCuadro->Name = L"ContraseñaCuadro";
			this->ContraseñaCuadro->Size = System::Drawing::Size(209, 22);
			this->ContraseñaCuadro->TabIndex = 3;
			this->ContraseñaCuadro->TextChanged += gcnew System::EventHandler(this, &LoginUsuario::ContraseñaCuadro_TextChanged);
			// 
			// Ingresar
			// 
			this->Ingresar->BackColor = System::Drawing::Color::White;
			this->Ingresar->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ingresar->Location = System::Drawing::Point(563, 437);
			this->Ingresar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Ingresar->Name = L"Ingresar";
			this->Ingresar->Size = System::Drawing::Size(100, 33);
			this->Ingresar->TabIndex = 4;
			this->Ingresar->Text = L"Ingresar";
			this->Ingresar->UseVisualStyleBackColor = false;
			this->Ingresar->Click += gcnew System::EventHandler(this, &LoginUsuario::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(413, 210);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(397, 297);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginUsuario::pictureBox1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(529, 412);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(161, 16);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¿Olvidaste tu contraseña\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginUsuario::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(708, 475);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(81, 16);
			this->linkLabel2->TabIndex = 7;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Registrarme";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginUsuario::linkLabel2_LinkClicked);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(463, 357);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(39, 38);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(463, 279);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(39, 38);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(-228, -148);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1428, 775);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LoginUsuario::pictureBox3_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(1048, 65);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(81, 103);
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			// 
			// LoginUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1165, 612);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Ingresar);
			this->Controls->Add(this->ContraseñaCuadro);
			this->Controls->Add(this->UsuarioCuadro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->HelpButton = true;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //Acá está el botón de ingreso

		//Validando los datos ingresados
		if (UsuarioCuadro->Text->Trim() == "admin" && ContraseñaCuadro->Text == "1234") { //Para el admin

			//Se pasa a la siguiente ventana
			AdminisitradorForm^ Adminisitrador_Form = gcnew AdminisitradorForm();
			Adminisitrador_Form->Owner = this;
			Adminisitrador_Form->Show();
			this->Hide();

		}
		else if (UsuarioCuadro->Text->Trim() == "user" && ContraseñaCuadro->Text == "5678") { //Para el usuario
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
				if (UsuarioCuadro->Text->Trim() == usuarios[i]->Username && ContraseñaCuadro->Text == usuarios[i]->Password) {
					user_disp = true;
					rolUsuario = usuarios[i]->UserRole;
					break;
				}
			}

			if (user_disp == true) {
				//Redirigir según el rol
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
				// Credenciales incorrectas o vacías        
				MessageBox::Show("Usuario o contraseña incorrectos");
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
		// Cuando el usuario cierre el Registro, volverá aquí automáticamente
	}
	private: System::Void frm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ContraseñaCuadro_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
