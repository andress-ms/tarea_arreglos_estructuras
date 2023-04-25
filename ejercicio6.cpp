#include <iostream>
#include <string>
#include "atletas.h"

using namespace std;

int main()
{
    atleta at[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Atleta " << i + 1 << endl;
        cout << "Ingrese el nombre del atleta: ";
        getline(cin, at[i].nombre);

        cout << "Ingrese la edad: ";
        cin >> at[i].edad;
        cin.ignore();

        cout << "Ingrese el deporte: ";
        getline(cin, at[i].deporte);

        cout << "Ingrese el numero de medallas de oro: ";
        cin >> at[i].medallas.oro;
        cin.ignore();

        cout << "Ingrese el numero de medallas de plata: ";
        cin >> at[i].medallas.plata;
        cin.ignore();

        cout << "Ingrese el numero de medallas de bronce: ";
        cin >> at[i].medallas.bronce;
        cin.ignore();

        cout << endl;
    }

    cout << "Informacion de los atletas nicaraguenses: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Atleta " << i + 1 << endl;
        cout << "Nombre: " << at[i].nombre << endl;
        cout << "Edad: " << at[i].edad << endl;
        cout << "Deporte: " << at[i].deporte << endl;
        cout << "Medallas de oro: " << at[i].medallas.oro << endl;
        cout << "Medallas de plata: " << at[i].medallas.plata << endl;
        cout << "Medallas de bronce:" << at[i].medallas.bronce << endl;
        cout << endl;
    }

    return 0;
}
