#pragma once

namespace Kat1GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Kat1CONTROLLER;
	using namespace Kat1MODEL;

	/// <summary>
	/// Resumen de ReporteTemperaturaPlanta
	/// </summary>
	public ref class ReporteTemperaturaPlanta : public System::Windows::Forms::Form
	{
	public:
		ReporteTemperaturaPlanta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReporteTemperaturaPlanta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Temperaturachart;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Temperaturachart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Temperaturachart))->BeginInit();
			this->SuspendLayout();
			// 
			// Temperaturachart
			// 
			chartArea2->Name = L"ChartArea1";
			this->Temperaturachart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->Temperaturachart->Legends->Add(legend2);
			this->Temperaturachart->Location = System::Drawing::Point(23, 69);
			this->Temperaturachart->Name = L"Temperaturachart";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->Temperaturachart->Series->Add(series2);
			this->Temperaturachart->Size = System::Drawing::Size(646, 383);
			this->Temperaturachart->TabIndex = 0;
			this->Temperaturachart->Text = L"temperaturachart";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(202, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Reporte de Temperatura";
			this->label1->Click += gcnew System::EventHandler(this, &ReporteTemperaturaPlanta::label1_Click);
			// 
			// ReporteTemperaturaPlanta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 475);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Temperaturachart);
			this->Name = L"ReporteTemperaturaPlanta";
			this->Text = L"ReporteTemperaturaPlanta";
			this->Load += gcnew System::EventHandler(this, &ReporteTemperaturaPlanta::ReporteTemperaturaPlanta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Temperaturachart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ReporteTemperaturaPlanta_Load(System::Object^ sender, System::EventArgs^ e) {
		// Obtener la lista de plantas desde el controlador
		System::Collections::Generic::List<Planta^>^ plantalist = Controller::ObtenerPlanta();

		// Limpiar puntos previos del gráfico (por si se recarga)
		Temperaturachart->Series["Series1"]->Points->Clear();

		// Agregar datos al gráfico
		for (int i = 0; i < plantalist->Count; i++) {
			// Crear un nuevo punto de datos
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ punto =
				gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint();

			// Convertir la temperatura (string) a double
			double temp = System::Convert::ToDouble(plantalist[i]->Temperatura);

			// Asignar el valor Y (temperatura)
			punto->YValues = gcnew cli::array<double>(1) { temp };

			// Etiqueta en el eje X (nombre o ID de la planta)
			punto->AxisLabel = System::Convert::ToString(plantalist[i]->PlantaID);

			// Agregar el punto al gráfico
			Temperaturachart->Series["Series1"]->Points->Add(punto);
		}
	}
	};
}
