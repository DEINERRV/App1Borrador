#include "Enfermedad.h"


Enfermedad::Enfermedad() { }

Enfermedad::Enfermedad(string nom, string adnn) {
    nombre=nom;
    adn=adnn;
}

void Enfermedad::toString() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"ADN: "<<adn<<endl;
}

const string &Enfermedad::getNombre() const {
    return nombre;
}

void Enfermedad::setNombre(const string &nombre) {
    Enfermedad::nombre = nombre;
}

const string &Enfermedad::getAdn() const {
    return adn;
}

void Enfermedad::setAdn(const string &adn) {
    Enfermedad::adn = adn;
}
