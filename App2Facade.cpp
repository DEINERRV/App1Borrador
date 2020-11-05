#include "App2Facade.h"

App2Facade::App2Facade() {
}

void App2Facade::CargarPacientes(ILoad *tipo) {
    pacientes = pacienteManager.load(tipo);
}

void App2Facade::GuardarPacientes(ISave *tipo) {
    pacienteManager.save(tipo,pacientes);
}

Analisis * App2Facade::crearAnalisis(int tipo) {
    return Analisis::CrearAnalisis(tipo);
}

string App2Facade::analisis(int tipo) {
    tipoAnalisis=crearAnalisis(tipo);
    //return tipoAnalisis->analisis();
    return "AA";
}