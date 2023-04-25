#include <iostream>

using namespace std;

int main()
{
    double v[6] = {0, 95.75, 0, 87.91, 0, 85.72};

    int n = sizeof(v) / sizeof(v[0]);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
