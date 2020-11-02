#include "JSON.h"
#include "fstream"
#include"sstream"
#include "lib/nlohmann/json.hpp"
#include "PacienteAnalizado.h"
using namespace std;
using json=nlohmann::json;


void to_json(json &_json, const PacienteAnalizado &_paciente) {
    json jEnfermedades;
    auto jEnfermedadesList=json::array();

    PacienteAnalizado p=_paciente;


    for (EnfermedadConteo aux : p.getEnfermedades())
    {
        jEnfermedades["nombre"]="enfermedad";
        //jEnfermedades["nombre"]=aux.enfermedad.getNombre();
        jEnfermedades["secuencia"]=aux.enfermedad.getAdn();
        jEnfermedades["cantidad"]=aux.cantidad;
        jEnfermedadesList.push_back(jEnfermedades);
    }

    _json = json{
            {"id",p.getPaciente().getId()},
            {"nombre",p.getPaciente().getNombre()},
            {"numero",p.getPaciente().getNumero()},
            {"correo",p.getPaciente().getCorreo()},
            {"adn",p.getPaciente().getAdn()},
            {"enfermedades",jEnfermedadesList},

    };
}

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



void JSON::save(vector<PacienteAnalizado> pacientes) {
    ofstream archivo;

    try { archivo.open("PacientesAnalizados.json", ios::binary); }

    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    json JsonData(pacientes);
    string Serializacion=JsonData.dump();

    archivo << Serializacion << '\n';

    archivo.close();
}