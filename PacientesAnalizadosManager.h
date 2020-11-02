#ifndef UNTITLED3_PACIENTESANALIZADOSMANAGER_H
#define UNTITLED3_PACIENTESANALIZADOSMANAGER_H

#include "PacienteAnalizado.h"
#include "vector"
#include "ISave.h"

class PacientesAnalizadosManager {
public:
    void save(ISave*,vector<PacienteAnalizado>);
};



#endif //UNTITLED3_PACIENTESANALIZADOSMANAGER_H
