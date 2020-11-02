#include "PacientesAnalizadosManager.h"

void PacientesAnalizadosManager::save(ISave * tipoGuardar,vector<PacienteAnalizado> pacientes) {
    tipoGuardar->save(pacientes);
}