#include "Menu.h"

Menu::Menu() { }

void Menu::opcion1() {
    ILoad* tipo=new JSON;
    app2Facade.cargarPacientes(tipo);
    delete tipo;
}

void Menu::opcion2() {
    PacienteAnalizado aux;
    cout<<app2Facade.analisis(1,aux);
}

void Menu::opcion3() {
    cout<<app2Facade.mostrarPacientes()<<endl;

    cout<<"Digite el ID del paciente: ";
    string id;
    cin>>id;
    cout<<app2Facade.analisis(2,app2Facade.buscarPaciente(id));
}

void Menu::opcion4() {
    cout<<app2Facade.mostrarPacientes()<<endl;

    cout<<"Digite el ID del paciente: ";
    string id;
    cin>>id;
    cout<<app2Facade.analisis(3,app2Facade.buscarPaciente(id));
}

void Menu::menu() {
    int opcion;
    do {
        try {
            cout << "1) Cargar datos del archivo datos_geneticos" << endl;
            cout << "2) Analisis 1" << endl;
            cout << "3) Analisis 2" << endl;
            cout << "4) Analisis 3" << endl;
            cout << "5) Salir" << endl;

            cout << "Digite una opcion: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    opcion1();
                    break;
                case 2:
                    opcion2();
                    break;
                case 3:
                    opcion3();
                    break;
                case 4:
                    opcion4();
                    break;
                case 5:
                    cout << "Hasta la proximaaa" << endl;
                    break;
                default:
                    cout << "No se ha digitado una opcion valida" << endl;
                    cout << "Por favor digite una opcion valida la proxima vez" << endl;
                    system("pause");
                    break;

            }

            fflush(stdin);
            cin.clear();
        }
        catch (const char * a) {
            cout<<a<<endl;
        }
    }while(opcion!=5);
}