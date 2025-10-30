#include "pch.h"

#include "Kat1PERSISTANCE.h"


using namespace System::IO;

void Kat1PERSISTANCE::Persistance::PersistTextFile(String^ fileName,
    List<Usuario^>^ usuarios)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        for each (Usuario ^ usuario in usuarios) {
            // Guardamos cada usuario en formato delimitado por '|'
            writer->WriteLine("{0}|{1}|{2}|{3}|{4}|{5}",
                usuario->UserID,
                usuario->Status,
                usuario->UserRole,
                usuario->Email,
                usuario->Username,
                usuario->Password);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}


void Kat1PERSISTANCE::Persistance::PersistRobotsTextFile(String^ fileName, 
    List<RobotAgronomo^>^ robots)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        for each (RobotAgronomo ^ robot in robots) {
            // Guardamos cada usuario en formato delimitado por '|'
            writer->WriteLine("{0}|{1}|{2}",
                robot->RobotID,
                robot->RobotName,
                robot->Status);               
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }

}

void Kat1PERSISTANCE::Persistance::PersistPlantasTextFile(String^ fileName, List<Planta^>^ plantas)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        for each (Planta ^ planta in plantas) {
            // Guardamos cada usuario en formato delimitado por '|'
            writer->WriteLine("{0}|{1}|{2}|{3}",
                planta->PlantaID,
                planta->OrdenPlanta,
                planta->Temperatura,
                planta->Humedad);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}

void Kat1PERSISTANCE::Persistance::PersistEnsayosTextFile(String^ fileName, List<Ensayo^>^ ensayos)
{
    FileStream^ file = nullptr;
    StreamWriter^ writer = nullptr;
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        writer = gcnew StreamWriter(file);
        for each (Ensayo ^ ensayo in ensayos) {
            // Guardamos cada usuario en formato delimitado por '|'
            writer->WriteLine("{0}|{1}|{2}|{3}|{4}|{5}",
                ensayo->EnsayoID,
                ensayo->PlantaID,
                ensayo->Fecha,
                ensayo->Hora,
                ensayo->Observaciones,
                ensayo->Condiciones);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (writer != nullptr) writer->Close();
        if (file != nullptr) file->Close();
    }
}

List<Usuario^>^ Kat1PERSISTANCE::Persistance::LoadUsersFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    List<Usuario^>^ result = gcnew List<Usuario^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            if (record->Length == 6) {
                Usuario^ usuario = gcnew Usuario( Int32::Parse(record[0]), 
                    record[1],  
                    record[2], 
                    record[3], 
                    record[4], 
                    record[5]);
                result->Add(usuario);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

List<RobotAgronomo^>^ Kat1PERSISTANCE::Persistance::LoadRobotsFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    List<RobotAgronomo^>^ result = gcnew List<RobotAgronomo^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            if (record->Length == 3) {
                RobotAgronomo^ robot = gcnew RobotAgronomo(Int32::Parse(record[0]),
                    record[1],
                    record[2]);
                result->Add(robot);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

List<Planta^>^ Kat1PERSISTANCE::Persistance::LoadPlantasFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    List<Planta^>^ result = gcnew List<Planta^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            if (record->Length == 4) {
                Planta^ planta = gcnew Planta(Int32::Parse(record[0]),
                    record[1],
                    record[2],
                    record[3]);
                result->Add(planta);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

List<Ensayo^>^ Kat1PERSISTANCE::Persistance::LoadEnsayosFromTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    List<Ensayo^>^ result = gcnew List<Ensayo^>();
    try {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ record = line->Split('|');
            if (record->Length == 6) {
                Ensayo^ ensayo = gcnew Ensayo(Int32::Parse(record[0]),
                    Int32::Parse(record[1]),
                    record[2],
                    record[3],
                    record[4],
                    record[5]);
                result->Add(ensayo);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}
