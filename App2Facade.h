#ifndef UNTITLED4_APP2FACADE_H
#define UNTITLED4_APP2FACADE_H
#include "PacienteAnalizado.h"
#include "Analisis3.h"
#include "Analisis2.h"
#include "Analisis1.h"
#include "PacienteAnalizadoManager.h"
#include "vector"


class App2Facade {
private:
    vector<PacienteAnalizado> pacientes;
    Analisis * tipoAnalisis;
    PacienteAnalizadoManager pacienteManager;
public:
    App2Facade();

    void CargarPacientes(ILoad*);
    void GuardarPacientes(ISave*);

    string analisis(int);

    Analisis* crearAnalisis(int);
};


#endif //UNTITLED4_APP2FACADE_H
