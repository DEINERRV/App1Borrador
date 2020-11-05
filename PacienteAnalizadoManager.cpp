#include "PacienteAnalizadoManager.h"

vector<PacienteAnalizado> PacienteAnalizadoManager::load(ILoad * tipo) {
    return tipo->Load();
}

void PacienteAnalizadoManager::save(ISave * tipo,vector<PacienteAnalizado> pacientes) {
    return tipo->save(pacientes);
}