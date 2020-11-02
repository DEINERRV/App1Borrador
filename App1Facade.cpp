#include "App1Facade.h"


App1Facade::App1Facade() {
}

int App1Facade::CargarEnfermedades() {
    ILoad* tipo=new CSV;
    enfermedades = enfermedadesManager.Load(tipo);
    delete tipo;

    return enfermedades.size();
}

int App1Facade::CargarPacientes() {
    ILoad* tipo=new CSV;
    pacientes=pacientesManager.Load(tipo);
    delete tipo;

    return pacientes.size();
}

vector<PacienteAnalizado> App1Facade::HacerPreAnalisis() {
    return preAnalisis.analisisPrevio(pacientes,enfermedades);
}

void App1Facade::GuardarPacienteAnalizados() {
    ISave* tipo=new JSON;
    pacientesAnalizadosManager.save(tipo,HacerPreAnalisis());
    delete tipo;
}