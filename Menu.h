#ifndef UNTITLED4_MENU_H
#define UNTITLED4_MENU_H
#include "iostream"
#include "App2Facade.h"

class Menu {
private:
    App2Facade app2Facade;

public:
    Menu();

    void opcion1();
    void opcion2();
    void opcion3();
    void opcion4();
    void opcion5();

    void menu();
};


#endif //UNTITLED4_MENU_H
