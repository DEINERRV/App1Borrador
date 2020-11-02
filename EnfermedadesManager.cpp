#include "EnfermedadesManager.h"

vector<Enfermedad> EnfermedadesManager::Load(ILoad* tipoLoad) {
   return tipoLoad->LoadEnfermedad();
}