#include "JSON.h"
#include "fstream"
#include"sstream"
#include "lib/nlohmann/json.hpp"
#include "PacienteAnalizado.h"
using namespace std;
using json=nlohmann::json;


void from_json(const json &_json, PacienteAnalizado &_paciente) {
    vector<EnfermedadConteo> enfermedadesList;
    json enfermedadesData = _json["enfermedades"];


    for(auto & data : enfermedadesData){
        EnfermedadConteo aux;
        aux.enfermedad.setNombre(data.at("nombre").get<string>());
        aux.enfermedad.setAdn(data.at("secuencia").get<string>());
        aux.cantidad=data.at("cantidad").get<int>();

        enfermedadesList.push_back(aux);
    }

    _paciente.getPaciente().setId(_json.at("id").get<string>());
    _paciente.getPaciente().setNombre(_json.at("nombre").get<string>());
    _paciente.getPaciente().setNumero(_json.at("numero").get<string>());
    _paciente.getPaciente().setCorreo(_json.at("correo").get<string>());
    _paciente.getPaciente().setAdn(_json.at("adn").get<string>());
    _paciente.setEnfermedades(enfermedadesList);
}

vector<PacienteAnalizado> JSON::Load() {
    ifstream archivo;

    try { archivo.open("C:\\Users\\deine\\Desktop\\Proyectos_C++_CLion\\progra2-project-02-delta\\cmake-build-debug-mingw\\src\\datos_geneticos.json", ios::binary); }

    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    string datos;

    stringstream buffer;
    buffer << archivo.rdbuf();
    std::string fileContent(buffer.str());
    datos = fileContent;


    json j=json::parse(datos);

    archivo.close();

    vector<PacienteAnalizado> pacientesAnalizados=j;
    pacientesAnalizados.pop_back();

    return pacientesAnalizados;
}