#ifndef UNTITLED4_PACIENTEANALIZADO_H
#define UNTITLED4_PACIENTEANALIZADO_H

#include "Paciente.h"
#include "EnfermedadConteo.h"
#include "vector"
#include "sstream"

class PacienteAnalizado {
private:
    Paciente paciente;
    vector<EnfermedadConteo> enfermedades;

public:
    PacienteAnalizado();
    PacienteAnalizado(const Paciente &paciente, const vector <EnfermedadConteo> &enfermedades);

    Paciente &getPaciente() ;
    void setPaciente(const Paciente &paciente);

    vector <EnfermedadConteo> &getEnfermedades() ;
    void setEnfermedades(const vector <EnfermedadConteo> &enfermedades);

    string toString();
};



#endif //UNTITLED4_PACIENTEANALIZADO_H
