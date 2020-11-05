#include "Paciente.h"
#include "string.h"

Paciente::Paciente() { }

void Paciente::toString() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Numero: "<<numero<<endl;
    cout<<"Correo: "<<correo<<endl;
    cout<<"ADN: "<<adn<<endl<<endl;
}

Paciente::Paciente(string nom, string idd, string num, string correoo, string adnn) {
    strcpy(nombre,nom.c_str());
    strcpy(numero,num.c_str());
    strcpy(id,idd.c_str());
    strcpy(correo,correoo.c_str());
    strcpy(adn,adnn.c_str());
}


void Paciente::setNombre( string nombrre) {
    strcpy(nombre,nombrre.c_str());
}


void Paciente::setId( string iid) {
    strcpy(id,iid.c_str());
}


void Paciente::setCorreo( string corrreo) {
    strcpy(correo,corrreo.c_str());
}



void Paciente::setNumero( string numerro) {
    strcpy(numero,numerro.c_str());
}

void Paciente::setAdn( string adnn) {
    strcpy(adn,adnn.c_str());
}

const char *Paciente::getNombre() const {
    return nombre;
}

const char *Paciente::getId() const {
    return id;
}

const char *Paciente::getCorreo() const {
    return correo;
}

const char *Paciente::getNumero() const {
    return numero;
}

const char *Paciente::getAdn() const {
    return adn;
}
