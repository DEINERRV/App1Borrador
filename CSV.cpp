#include "CSV.h"
#include "fstream"

vector<Paciente> CSV::LoadPaciente() {
    ifstream archivo;

    try {
        archivo.open("C:\\Users\\deine\\Desktop\\Proyectos_C++_CLion\\progra2-project-02-delta\\archivos_csv\\pacientes.csv",ios::in);
    }
    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    vector<Paciente> aux;
    string nom,correo,adn,id,num;

    getline(archivo,id,',');
    getline(archivo,nom,',');
    getline(archivo,num,',');
    getline(archivo,correo,',');
    getline(archivo,adn);

    while(!archivo.eof()){

        getline(archivo,id,',');
        getline(archivo,nom,',');
        getline(archivo,num,',');
        getline(archivo,correo,',');
        getline(archivo,adn);

        Paciente pacienteAux(nom,id,num,correo,adn);
        aux.push_back(pacienteAux);
    }

    archivo.close();

    return aux;
}

vector<Enfermedad> CSV::LoadEnfermedad() {
    ifstream archivo;

    try {
        archivo.open("C:\\Users\\deine\\Desktop\\Proyectos_C++_CLion\\progra2-project-02-delta\\archivos_csv\\enfermedades.csv",ios::in);
    }
    catch (std::ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    vector<Enfermedad> aux;
    string nom,adn;
    getline(archivo,nom,',');
    getline(archivo,adn);

    while(!archivo.eof()){

        getline(archivo,nom,',');
        getline(archivo,adn);

        Enfermedad enfermedadAux(nom,adn);
        aux.push_back(enfermedadAux);
    }

    archivo.close();

    return aux;
}