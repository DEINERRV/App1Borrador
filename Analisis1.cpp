#include "Analisis1.h"
#include "EnfermedadPacientes.h"

string Analisis1::analisis(PacienteAnalizado paciente,vector<PacienteAnalizado> x) {
    vector<EnfermedadPacientes> enfermedades;

    for(PacienteAnalizado aux : x){
        Aux(enfermedades,aux);
    }

    stringstream s;
    for(EnfermedadPacientes aux : enfermedades){
        s<<aux.toString()<<endl;
    }

    return s.str();

}


void Analisis1::Aux(vector<EnfermedadPacientes> &enfermedades, PacienteAnalizado paciente) {
    for(EnfermedadConteo auxE : paciente.getEnfermedades()){
        int bandera=0;
        for(int i=0;i<enfermedades.size();i++){
            string x=auxE.enfermedad.getAdn();
            string y=enfermedades[i].getEnfemedad().enfermedad.getAdn();
            if(x==y){
                enfermedades[i].getPacientes().push_back(paciente.getPaciente());
                enfermedades[i].getEnfemedad().cantidad++;
                bandera=1;
            }
        }

        if(bandera==0){
            EnfermedadPacientes aux;
            aux.setEnfemedad(auxE);
            aux.getEnfemedad().cantidad=1;
            aux.getPacientes().push_back(paciente.getPaciente());
            enfermedades.push_back(aux);
        }
    }
}
