#include <iostream>
#include "JSON.h"
#include "Binario.h"
#include "Analisis1.h"
#include "Analisis2.h"
#include "Analisis3.h"

int main() {

    JSON json;
    vector<PacienteAnalizado> pacientesJson=json.Load();

/*
    for(PacienteAnalizado aux:pacientesJson){
        cout<<aux.toString()<<endl;
    }

    cout<<"\n\n\n";


    Binario binario;
    binario.save(pacientesJson);

    vector<PacienteAnalizado> pacientesBinario;
    pacientesBinario=binario.Load();

    for(PacienteAnalizado aux : pacientesBinario){
        cout<<aux.toString()<<endl;
    }
*/
Analisis1 analisis1;
Analisis2 analisis2;
Analisis3 analisis3;

cout<<analisis1.analisis(pacientesJson.back(),pacientesJson);

//cout<<analisis2.analisis(pacientesJson[35], pacientesJson);


//cout<<analisis3.analisis(pacientesJson[55]);



    return 0;
}
