#ifndef UNTITLED4_ANALISIS1_H
#define UNTITLED4_ANALISIS1_H
#include "Analisis.h"
#include "EnfermedadPacientes.h"

class Analisis1: public Analisis {
public:
    string analisis(PacienteAnalizado, vector<PacienteAnalizado>) override;
    void Aux(vector<EnfermedadPacientes>&, PacienteAnalizado);
};


#endif //UNTITLED4_ANALISIS1_H
