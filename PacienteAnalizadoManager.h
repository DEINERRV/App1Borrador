#ifndef UNTITLED4_PACIENTEANALIZADOMANAGER_H
#define UNTITLED4_PACIENTEANALIZADOMANAGER_H
#include "PacienteAnalizado.h"
#include "Binario.h"
#include "JSON.h"

class PacienteAnalizadoManager {
public:
    vector<PacienteAnalizado> load(ILoad*);
    void save(ISave*,vector<PacienteAnalizado>);
};


#endif //UNTITLED4_PACIENTEANALIZADOMANAGER_H
