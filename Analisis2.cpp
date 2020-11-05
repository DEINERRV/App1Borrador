#include "Analisis2.h"

string Analisis2::analisis(PacienteAnalizado aux,vector<PacienteAnalizado> x ) {
    float a,t,g,c;
    a=calcularPorcentaje("A",aux.getPaciente().getAdn());
    t=calcularPorcentaje("T",aux.getPaciente().getAdn());
    g=calcularPorcentaje("G",aux.getPaciente().getAdn());
    c=calcularPorcentaje("C",aux.getPaciente().getAdn());

    stringstream s;
    s<<"Nombre: "<<aux.getPaciente().getNombre()<<endl
    <<"ID: "<<aux.getPaciente().getId()<<endl
    <<"Numero: "<<aux.getPaciente().getNumero()<<endl
    <<"Correo: "<<aux.getPaciente().getCorreo()<<endl
    <<"Porcentaje A: "<<a<<endl
    <<"Parcentaje T: "<<t<<endl
    <<"Porcentaje G: "<<g<<endl
    <<"Porcentaje C: "<<c<<endl;

    return s.str();
}

float Analisis2::calcularPorcentaje(string base,string adn) {
    int contador=0;

    for (int i = 0; i <= (adn.size() - base.size()); i++) {
        if (adn.substr(i, base.size()) == base) {
            contador++;
        }
    }

    return (contador*100)/adn.size();
}