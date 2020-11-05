#ifndef UNTITLED4_ANALISIS_H
#define UNTITLED4_ANALISIS_H
#include"iostream"
using namespace std;
#include "PacienteAnalizado.h"

class Analisis {
public:
    virtual string analisis(PacienteAnalizado,vector<PacienteAnalizado>)=0;
    static Analisis* CrearAnalisis(int tipo);

};


#endif //UNTITLED4_ANALISIS_H
