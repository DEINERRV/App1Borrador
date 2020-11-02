#include "PacientesManager.h"

vector<Paciente> PacientesManager::Load(ILoad * tipoCarga) {
    return tipoCarga->LoadPaciente();
}