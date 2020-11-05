#ifndef UNTITLED4_BINARIO_H
#define UNTITLED4_BINARIO_H
#include "ILoad.h"
#include "ISave.h"
#include "vector"
#include "PacienteAnalizado.h"

class Binario:public ILoad,ISave{
public:
    void save(vector<PacienteAnalizado>) override;
    vector<PacienteAnalizado> Load() override;

    void guardarString(string);
};

#endif //UNTITLED4_BINARIO_H
