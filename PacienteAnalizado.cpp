#include "PacienteAnalizado.h"

PacienteAnalizado::PacienteAnalizado() {}

PacienteAnalizado::PacienteAnalizado(const Paciente &paciente, const vector<EnfermedadConteo> &enfermedades) : paciente(
        paciente), enfermedades(enfermedades) {}

Paciente &PacienteAnalizado::getPaciente() {
    return paciente;
}

void PacienteAnalizado::setPaciente(const Paciente &paciente) {
    PacienteAnalizado::paciente = paciente;
}

vector<EnfermedadConteo> &PacienteAnalizado::getEnfermedades(){
    return enfermedades;
}

void PacienteAnalizado::setEnfermedades(const vector<EnfermedadConteo> &enfermedades) {
    PacienteAnalizado::enfermedades = enfermedades;
}

string PacienteAnalizado::toString() {
    stringstream s;

    s<<"Nombre: "<<paciente.getNombre()<<endl;
    s<<"ID: "<<paciente.getId()<<endl;
    s<<"Telefono: "<<paciente.getNumero()<<endl;
    s<<"Correo: "<<paciente.getCorreo()<<endl;
    s<<"ADN: "<<paciente.getAdn()<<endl<<endl;

    for(EnfermedadConteo aux : enfermedades){
        s<<"enfermedad: "<<aux.enfermedad.getNombre()<<endl;
        s<<"secuencia: "<<aux.enfermedad.getAdn()<<endl;
        s<<"cantidad"<<aux.cantidad<<endl<<endl;
    }

    return s.str();
}