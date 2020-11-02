#ifndef UNTITLED3_ENFERMEDAD_H
#define UNTITLED3_ENFERMEDAD_H

#include<iostream>
using namespace std;


class Enfermedad {
private:
    string nombre;
    string adn;

public:
    Enfermedad();
    Enfermedad(string nom,string adnn);

    void toString();

    const string &getNombre() const;
    void setNombre(const string &nombre);

    const string &getAdn() const;
    void setAdn(const string &adn);
};

#endif //UNTITLED3_ENFERMEDAD_H
