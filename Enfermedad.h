#ifndef UNTITLED4_ENFERMEDAD_H
#define UNTITLED4_ENFERMEDAD_H

#include<iostream>
using namespace std;


class Enfermedad {
private:
    char nombre[40];
    char adn[10];

public:
    Enfermedad();
    Enfermedad(string nom,string adnn);

    void toString();


    void setNombre(string);

    const char *getNombre() const;

    const char *getAdn() const;

    void setAdn(string);
};

#endif //UNTITLED4_ENFERMEDAD_H
