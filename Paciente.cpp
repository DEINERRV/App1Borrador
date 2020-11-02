#include "Paciente.h"

Paciente::Paciente() { }

void Paciente::toString() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Id: "<<id<<endl;
    cout<<"Numero: "<<numero<<endl;
    cout<<"Correo: "<<correo<<endl;
    cout<<"ADN: "<<adn<<endl<<endl;
}

Paciente::Paciente(string nom, string idd, string num, string correoo, string adnn) {
    nombre=nom;
    numero=num;
    id=idd;
    correo=correoo;
    adn=adnn;
}

const string &Paciente::getNombre() const {
    return nombre;
}

void Paciente::setNombre(const string &nombre) {
    Paciente::nombre = nombre;
}

const string &Paciente::getId() const {
    return id;
}

void Paciente::setId(const string &id) {
    Paciente::id = id;
}

const string &Paciente::getCorreo() const {
    return correo;
}

void Paciente::setCorreo(const string &correo) {
    Paciente::correo = correo;
}

const string &Paciente::getNumero() const {
    return numero;
}

void Paciente::setNumero(const string &numero) {
    Paciente::numero = numero;
}

const string &Paciente::getAdn() const {
    return adn;
}

void Paciente::setAdn(const string &adn) {
    Paciente::adn = adn;
}
