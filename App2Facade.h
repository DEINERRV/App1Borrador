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

    void cargarPacientes(ILoad*);
    void guardarPacientes(ISave*);

    string analisis(int,PacienteAnalizado);

    Analisis* crearAnalisis(int);

    string mostrarPacientes();

    PacienteAnalizado buscarPaciente(string);
};


#endif //UNTITLED4_APP2FACADE_H
