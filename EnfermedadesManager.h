#ifndef UNTITLED3_ENFERMEDADESMANAGER_H
#define UNTITLED3_ENFERMEDADESMANAGER_H
#include"Enfermedad.h"
#include "vector"
#include "ILoad.h"

class EnfermedadesManager {
public:
    vector<Enfermedad> Load(ILoad*);
};



#endif //UNTITLED3_ENFERMEDADESMANAGER_H
