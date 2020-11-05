#include "Analisis.h"
#include "Analisis1.h"
#include "Analisis2.h"
#include "Analisis3.h"

Analisis * Analisis::CrearAnalisis(int tipo) {
    switch (tipo) {
        case 1: return new Analisis1; break;
        case 2: return new Analisis2; break;
        case 3: return new Analisis3; break;
    }

    return nullptr;
}
