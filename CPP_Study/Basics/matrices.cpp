#include <iostream>

using namespace std;

int main()
{
    float numero = 3;
    cout << sizeof(numero) << "\n";
    int edades[3][2] = {{1,2},{9,8},{14,21}};
    cout << sizeof(edades) << " " << sizeof(edades[2]) << " " << sizeof(edades[0][0]) << "\n";
    int filas = (sizeof(edades)/sizeof(edades[0]));

    int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<edades[i][j]<<endl;
        }
    }
}