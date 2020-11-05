#ifndef UNTITLED4_ANALISIS2_H
#define UNTITLED4_ANALISIS2_H
#include "Analisis.h"

class Analisis2: public Analisis {
public:
    string analisis(PacienteAnalizado,vector<PacienteAnalizado>) override;
    float calcularPorcentaje(string,string);
};


#endif //UNTITLED4_ANALISIS2_H
