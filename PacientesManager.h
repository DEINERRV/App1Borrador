#ifndef UNTITLED3_PACIENTESMANAGER_H
#define UNTITLED3_PACIENTESMANAGER_H
#include "Paciente.h"
#include "vector"
#include "ILoad.h"

class PacientesManager {
public:
    vector<Paciente> Load(ILoad*);
};


#endif //UNTITLED3_PACIENTESMANAGER_H
