#ifndef UNTITLED3_ILOAD_H
#define UNTITLED3_ILOAD_H
#include "vector"
#include "Paciente.h"
#include "Enfermedad.h"

class ILoad {
public:
    virtual vector<Paciente> LoadPaciente()=0;
    virtual vector<Enfermedad> LoadEnfermedad()=0;

    virtual ~ILoad();
};


#endif //UNTITLED3_ILOAD_H
