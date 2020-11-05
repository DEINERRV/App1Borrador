#ifndef UNTITLED4_PACIENTE_H
#define UNTITLED4_PACIENTE_H

#include<iostream>
using namespace std;

class Paciente {
private:
    char nombre[40];
    char id[15];
    char correo[50];
    char numero[15];
    char adn[2000];

public:
    Paciente();
    Paciente(string nom,string idd,string num,string correoo,string adnn);
    void toString();


    void setNombre(string);


    void setId(string);

    const char *getNombre() const;

    const char *getId() const;

    const char *getCorreo() const;

    const char *getNumero() const;

    const char *getAdn() const;

    void setCorreo(string);


    void setNumero(string);


    void setAdn(string);

};


#endif //UNTITLED4_PACIENTE_H
