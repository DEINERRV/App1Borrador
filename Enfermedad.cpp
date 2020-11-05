#include "Enfermedad.h"
#include "string.h"

Enfermedad::Enfermedad() { }

Enfermedad::Enfermedad(string nom, string adnn) {
   strcpy(nombre,nom.c_str());
   strcpy(adn,adnn.c_str());
}

void Enfermedad::toString() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"ADN: "<<adn<<endl;
}


void Enfermedad::setNombre(string _nombre) {
    strcpy(nombre,_nombre.c_str());
}

void Enfermedad::setAdn(string _adn) {
    strcpy(adn,_adn.c_str());
}

const char *Enfermedad::getNombre() const {
    return nombre;
}

const char *Enfermedad::getAdn() const {
    return adn;
}
