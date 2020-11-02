#include "Menu.h"


void Menu::opcion1() {
    cout<<"Detalle de la Carga"<<endl;
    cout<<"Archivo: pacientes.csv"<<endl;
    cout<<"Registros: "<<app1.CargarPacientes()<<endl;
    cout<<"Presione cualquier tecla para salir"<<endl;

    system("pause");
}

void Menu::opcion2() {
    cout<<"Detalle de la Carga"<<endl;
    cout<<"Archivo: enfermedades.csv"<<endl;
    cout<<"Registros: "<<app1.CargarEnfermedades()<<endl;
    cout<<"Presione cualquier tecla para salir"<<endl;

    system("pause");
}

void Menu::opcion3() {
    app1.GuardarPacienteAnalizados();
    cout<<"Se genero el archivo datos_geneticos.json"<<endl;
    cout<<"Presione cualquier tecla para salir"<<endl;
    system("pause");
}

void Menu::menu() {

    int opcion;
    do {
        fflush(stdin);
        cout << "1) Cargar datos del archivo pacientes.csv" << endl;
        cout << "2) Cargar datos del archivo enfermedades.csv" << endl;
        cout << "3) Generar archivo datos_geneticos.json " << endl;
        cout << "4) Salir" << endl;
        cout << "Digite una opcion: ";
        cin >> opcion;
        system("cls");

        switch (opcion) {
            case 1:
                opcion1();
                system("cls");
                break;
            case 2:
                opcion2();
                system("cls");
                break;
            case 3:
                opcion3();
                system("cls");
                break;
            default:
                cout << "No se digito ninguna opcion valida" << endl;
                cout << "Presione cualquier tecla para salir" << endl;
                system("pause");
                break;
        }
    }
    while(opcion!=4);
}