#include <iostream>
#include <string>
#include "estudiantes.h"

using namespace std;

int main()
{
   estudiante est;
   cout << "Estudiante de UAM, a continuacion ingrese sus datos: " << endl;

      cout << "Ingrese su nombre: ";
      getline(cin, est.nombre);

      cout << "Ingrese su edad: ";
      cin >> est.edad;

      cout << "Ingrese su CIF: ";
      cin >> est.cif;

      cout << "Ingrese su carrera: ";
      cin.ignore();

      getline(cin, est.carrera);
   

   cout << endl;
   cout << "Informacion del estudiante: " << endl;
   cout << "Nombre: " << est.nombre << endl;
   cout << "Edad: " << est.edad << endl;
   cout << "Cif: " << est.cif << endl;
   cout << "Carrera: " << est.carrera << endl;

   return 0;
};