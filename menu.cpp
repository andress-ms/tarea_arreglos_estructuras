#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    bool repetidor;
    int opt;
    int opcion;
    do
    {
        system("cls");
        cout << "***  Menu de opciones   ***" << endl;
        cout << "1 .- Arreglos" << endl;
        cout << "2 .- Estructuras" << endl;
        cout << "3 .- Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Escoja el ejercicio a ejecutar" << endl;
            cout << "" << endl;
            cout << "1- Ejercicio 1" << endl;
            cout << "2- Ejercicio 2" << endl;
            cout << "3- Ejercicio 3" << endl;
            cout << "4- Ejercicio 4" << endl;
            cout << "5- Ejercicio 5" << endl;
            cout << "6- Ejercicio 6" << endl;
            cin >> opt;
            repetidor = true;
            switch (opt)
            {
            case 1:
            {

                char v[11] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};

                int n = sizeof(v) / sizeof(v[0]);

                for (int i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }

                this_thread::sleep_for(chrono::seconds(10));
                system("cls");
                break;
            }
            case 2:
            {
                double v[6] = {0, 95.75, 0, 87.91, 0, 85.72};

                int n = sizeof(v) / sizeof(v[0]);

                for (int i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
                this_thread::sleep_for(chrono::seconds(3));
                system("cls");

                break;
            }

            case 3:
            {
                char tabla[5][8];
                cout << "Ingrese los valores propuestos " << endl;
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        cin >> tabla[i][j];
                    }
                }
                cout << "Los valores almacenados son: " << endl;
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 8; j++)
                    {
                        cout << tabla[i][j] << " ";
                    }
                    cout << endl;
                    break;
                }
            }

        case 2:
                int des;
                cout << "Escoja el ejercicio a ejecutar" << endl;
                cout << "" << endl;
                cout << "1- Ejercicio 1" << endl;
                cout << "2- Ejercicio 2" << endl;
                cout << "3- Ejercicio 3" << endl;
                cout << "4- Ejercicio 4" << endl;
                cout << "5- Ejercicio 5" << endl;
                cout << "6- Ejercicio 6" << endl;
                cout << "7- Ejercicio 7" << endl;
                cin >> des;
                repetidor = true;
                switch (des)
                {
                case 1:
                {
                    cout << "" << endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    system("cls");

                    break;
                }
                }
                repetidor = true;
                break;

            case 3:
                exit(0);
                break;

            default:
                cout << "Opción no válida" << endl;
                break;
            }
        }
        while (repetidor == true)
            ;
        return 0;
    }
