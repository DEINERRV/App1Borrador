#ifndef UNTITLED3_CSV_H
#define UNTITLED3_CSV_H
#include "ILoad.h"

class CSV:public ILoad {
public:
    vector<Enfermedad> LoadEnfermedad() override;
    vector<Paciente> LoadPaciente() override;
};

#endif //UNTITLED3_CSV_H
