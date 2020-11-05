#ifndef UNTITLED4_JSON_H
#define UNTITLED4_JSON_H
#include "ILoad.h"

class JSON: public ILoad{
public:
    vector<PacienteAnalizado> Load() override;
};


#endif //UNTITLED4_JSON_H
