#include "Binario.h"
#include "fstream"
#include "string.h"

void Binario::save(vector<PacienteAnalizado> pacientes) {
    ofstream archivo;

    try { archivo.open("ArchivoBinario.dat", ios::out | ios::binary);  }

    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    for(PacienteAnalizado persona : pacientes) {
        archivo.write((char *) &persona.getPaciente(), sizeof(Paciente));

        int x=persona.getEnfermedades().size();
        archivo.write((char*)  &x,sizeof(int));

        for(EnfermedadConteo aux : persona.getEnfermedades()){
            archivo.write((char*) &aux,sizeof(EnfermedadConteo));
        }

    }

    archivo.close();
}

vector<PacienteAnalizado> Binario::Load() {
    ifstream archivo;

    try { archivo.open("ArchivoBinario.dat", ios::in | ios::binary); }

    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    std::vector<PacienteAnalizado> personas;
    PacienteAnalizado pacienteAnalizado;

    Paciente persona;
    EnfermedadConteo enfermedad;
    vector<EnfermedadConteo> enfermedades;

    int i;

    while(!archivo.eof()) {
        archivo.read((char *) &persona, sizeof(Paciente));

        archivo.read((char *) &i,sizeof(int));
        for(int a=0;a<i;a++){
            archivo.read((char*) &enfermedad,sizeof(EnfermedadConteo));
            enfermedades.push_back(enfermedad);
        }

        pacienteAnalizado.setEnfermedades(enfermedades);
        pacienteAnalizado.setPaciente(persona);
        personas.push_back(pacienteAnalizado);
        cout<<pacienteAnalizado.toString()<<endl;
    }


    archivo.close();

    personas.pop_back();
    return personas;
}


void Binario::guardarString(string data) {
    char aux[1000];
    strcpy(aux, data.c_str());
    ofstream archive;
    try { archive.open("BinaryFile.dat", ios::app | ios::binary); }
    catch (std::ifstream::failure dat) { throw std::runtime_error("Error "); }
    archive.write((char *) &aux, sizeof(char32_t[1000]));
    archive.close();
}
 