#include <iostream>

using namespace std;

int main()
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
    cout << "Los valores almacenados son: " << endl; for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << tabla[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
