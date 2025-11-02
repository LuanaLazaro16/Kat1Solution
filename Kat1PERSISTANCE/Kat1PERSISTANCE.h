#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace Kat1MODEL;

namespace Kat1PERSISTANCE {
	public ref class Persistance
	{
	public:
		
		static List<Usuario^>^ LoadUsersBinaryFile(String^ fileName);

		//static List<Usuario^>^ LoadUsersFromTextFile(String^ fileName);		
		static List<RobotAgronomo^>^ LoadRobotsFromTextFile(String^ fileName);
		static List<Planta^>^ LoadPlantasFromTextFile(String^ fileName);
		static List<Ensayo^>^ LoadEnsayosFromTextFile(String^ fileName);
		
		
		//Métodos para guardar y leer los datos de platos en archivos binarios
		
		



		//Métodos para guardar y leer los datos de usuario de texto plano->cambiarlo a binario
		//static void PersistTextFile(String^ fileName, List<Usuario^>^ usuarios);
		static void PersistBinaryFile(String^ fileName, List<Usuario^>^ usuarios);

		static void PersistRobotsTextFile(String^ fileName, List<RobotAgronomo^>^ robots);
		static void PersistPlantasTextFile(String^ fileName, List<Planta^>^ plantas);
		static void PersistEnsayosTextFile(String^ fileName, List<Ensayo^>^ ensayos);
		
		
	};
}

