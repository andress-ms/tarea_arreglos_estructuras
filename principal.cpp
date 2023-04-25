#include <iostream>
#include <string.h>
#include "estructura.h"

using namespace std;

int main()
{
    /*code*/
    tarea tar;
    tar.cif = 22020330;
    strcpy(tar.docente, "Jose Duran");
    strcpy(tar.alumno, "Andres Martinez");
    strcpy(tar.fecha, "24/4/2023");

    cout << "Cif: " << tar.cif << endl;
    cout << "Docente: " << tar.docente << endl;
    cout << "Alumno: " << tar.alumno << endl;
    cout << "Fecha: " << tar.fecha << endl;

    return 0;
}
