#ifndef UNTITLED4_ISAVE_H
#define UNTITLED4_ISAVE_H
#include "vector"
#include "PacienteAnalizado.h"

class ISave {
public:
    virtual void save(vector<PacienteAnalizado>)=0;
    virtual ~ISave();
};


#endif //UNTITLED4_ISAVE_H
