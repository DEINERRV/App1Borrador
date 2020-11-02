#include "PreAnalisis.h"

vector<PacienteAnalizado> PreAnalisis::analisisPrevio(vector<Paciente> pacientes, vector<Enfermedad> enfermedades) {
    vector<PacienteAnalizado> pre;

    for(Paciente aux : pacientes){
        PacienteAnalizado pacienteAnalizado;
        pacienteAnalizado.setPaciente(aux);

        for(Enfermedad auxE : enfermedades) {

            int apariciones = 0;
            string substr = "";
            for (int i = 0; i <= (aux.getAdn().size() - auxE.getAdn().size()); i++) {
                if (aux.getAdn().substr(i, auxE.getAdn().size()) == auxE.getAdn()) {
                    apariciones++;
                }
            }

            if (apariciones > 0) {
                EnfermedadConteo ec;
                ec.cantidad = apariciones;
                ec.enfermedad = auxE;
                pacienteAnalizado.getEnfermedades().push_back(ec);
            }
        }
        pre.push_back(pacienteAnalizado);
    }

    return pre;
}