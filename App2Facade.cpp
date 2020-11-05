#include "App2Facade.h"

App2Facade::App2Facade() {
}

void App2Facade::cargarPacientes(ILoad *tipo) {
    pacientes = pacienteManager.load(tipo);
}

void App2Facade::guardarPacientes(ISave *tipo) {
    pacienteManager.save(tipo,pacientes);
}

Analisis * App2Facade::crearAnalisis(int tipo) {
    return Analisis::CrearAnalisis(tipo);
}

string App2Facade::analisis(int tipo,PacienteAnalizado paciente) {
    tipoAnalisis=crearAnalisis(tipo);
    return tipoAnalisis->analisis(paciente,pacientes);

}

string App2Facade::mostrarPacientes() {
    stringstream s;

    for(PacienteAnalizado aux : pacientes){
        s<<aux.getPaciente().getNombre()<<endl
        <<aux.getPaciente().getId()<<endl<<endl;
    }

    return s.str();
}

PacienteAnalizado App2Facade::buscarPaciente(string id) {
try {
    for (PacienteAnalizado aux : pacientes) {
        string idPaciente = aux.getPaciente().getId();
        if (idPaciente == id) { return aux; }
    }
    throw "No se encontro el paciente";
}
catch (std::exception a) {
    cout<<a.what()<<endl;
}

}