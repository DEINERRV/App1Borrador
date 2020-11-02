#ifndef UNTITLED3_ISAVE_H
#define UNTITLED3_ISAVE_H
#include "PacienteAnalizado.h"

class ISave {
public:
    virtual void save(vector<PacienteAnalizado>)=0;

    virtual ~ISave();
};


#endif //UNTITLED3_ISAVE_H
