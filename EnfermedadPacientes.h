#ifndef UNTITLED4_ENFERMEDADPACIENTES_H
#define UNTITLED4_ENFERMEDADPACIENTES_H
#include "Paciente.h"
#include "EnfermedadConteo.h"
#include "vector"
class EnfermedadPacientes {
private:
    vector<Paciente> pacientes;
    EnfermedadConteo enfemedad;
public:
    EnfermedadPacientes(const vector<Paciente> &pacientes, const EnfermedadConteo &enfemedad);
    EnfermedadPacientes();

    vector<Paciente> &getPacientes() ;
    void setPacientes(const vector<Paciente> &pacientes);

    EnfermedadConteo &getEnfemedad() ;
    void setEnfemedad(const EnfermedadConteo &enfemedad);

    string toString();
};


#endif //UNTITLED4_ENFERMEDADPACIENTES_H
