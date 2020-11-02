#ifndef UNTITLED3_APP1FACADE_H
#define UNTITLED3_APP1FACADE_H
#include "CSV.h"
#include "JSON.h"
#include "PacienteAnalizado.h"
#include "PacientesManager.h"
#include "EnfermedadesManager.h"
#include "PacientesAnalizadosManager.h"
#include "PreAnalisis.h"

class App1Facade {
private:
    vector<Paciente> pacientes;
    vector<Enfermedad> enfermedades;

    PreAnalisis preAnalisis;
    PacientesManager pacientesManager;
    EnfermedadesManager enfermedadesManager;
    PacientesAnalizadosManager pacientesAnalizadosManager;

public:
    App1Facade();

    int CargarPacientes();
    int CargarEnfermedades();

    vector<PacienteAnalizado> HacerPreAnalisis();
    void GuardarPacienteAnalizados();



};


#endif //UNTITLED3_APP1FACADE_H
