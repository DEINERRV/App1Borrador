#include "EnfermedadPacientes.h"
#include "sstream"

EnfermedadPacientes::EnfermedadPacientes(const vector<Paciente> &pacientes, const EnfermedadConteo &enfemedad)
        : pacientes(pacientes), enfemedad(enfemedad) {}

EnfermedadPacientes::EnfermedadPacientes() {}

vector<Paciente> &EnfermedadPacientes::getPacientes() {
    return pacientes;
}

void EnfermedadPacientes::setPacientes(const vector<Paciente> &pacientes) {
    EnfermedadPacientes::pacientes = pacientes;
}

EnfermedadConteo &EnfermedadPacientes::getEnfemedad(){
    return enfemedad;
}

void EnfermedadPacientes::setEnfemedad(const EnfermedadConteo &enfemedad) {
    EnfermedadPacientes::enfemedad = enfemedad;
}

string EnfermedadPacientes::toString() {
    stringstream s;

    s<<enfemedad.enfermedad.getNombre()<<endl
    <<"cantidad: "<<enfemedad.cantidad<<endl
    <<"pacientes: "<<endl;

    for(Paciente aux : pacientes){
        s<<"nombre : "<<aux.getNombre()<<endl
        <<"id : "<<aux.getId()<<endl<<endl;
    }

    return s.str();
}