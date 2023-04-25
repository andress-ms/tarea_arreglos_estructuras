#include <iostream>

using namespace std;

int main()
{

    char v[11] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};

    int n = sizeof(v) / sizeof(v[0]);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}