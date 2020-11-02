#ifndef UNTITLED3_JSON_H
#define UNTITLED3_JSON_H

#include "ISave.h"

class JSON:public ISave {
public:
    void save(vector<PacienteAnalizado>) override;
};



#endif //UNTITLED3_JSON_H
