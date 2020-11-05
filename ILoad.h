#ifndef UNTITLED4_ILOAD_H
#define UNTITLED4_ILOAD_H
#include"vector"
#include"PacienteAnalizado.h"

class ILoad {
public:
    virtual vector<PacienteAnalizado> Load()=0;

    virtual ~ILoad();
};


#endif //UNTITLED4_ILOAD_H
