#ifndef UNTITLED3_PACIENTE_H
#define UNTITLED3_PACIENTE_H

#include<iostream>
using namespace std;

class Paciente {
private:
    string nombre;
    string id;
    string correo;
    string numero;
    string adn;

public:
    Paciente();
    Paciente(string nom,string idd,string num,string correoo,string adnn);
    void toString();

    const string &getNombre() const;
    void setNombre(const string &nombre);

    const string &getId() const;
    void setId(const string &id);

    const string &getCorreo() const;
    void setCorreo(const string &correo);

    const string &getNumero() const;
    void setNumero(const string &numero);

    const string &getAdn() const;
    void setAdn(const string &adn);
};


#endif //UNTITLED3_PACIENTE_H
