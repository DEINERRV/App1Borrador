#include "Analisis3.h"

string Analisis3::analisis(PacienteAnalizado paciente,vector<PacienteAnalizado> x) {
    stringstream s;
    s<<"Paciente: "<<paciente.getPaciente().getNombre()<<endl
    <<"ID: "<<paciente.getPaciente().getId()<<endl
    <<"Numero: "<<paciente.getPaciente().getNumero()<<endl
    <<"Correo: "<<paciente.getPaciente().getCorreo()<<endl<<endl
    <<"enfermedades "<<endl;

    for(EnfermedadConteo aux : paciente.getEnfermedades()){
        if(aux.cantidad==2){
            s<<aux.enfermedad.getNombre()<<endl
            <<"Concordancia: 35 porciento"<<endl<<endl;
        }
        if(aux.cantidad>2){
            s<<aux.enfermedad.getNombre()<<endl
            <<"Concordancia: 65 porciento"<<endl<<endl;
        }
    }

    return s.str();
}