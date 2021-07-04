#include <bits/stdc++.h>
using namespace std;

int num_puertas, num_llaves;
int puertas[100002];

int buscar(int llave, int a, int b)
{
    if (a > b)
    {
        return 0;
    }

    int mitad = (a + b) / 2;
    if (puertas[mitad] == llave)
    {
        return mitad + 1;
    }
    else if (puertas[mitad] > llave)
    {
        return buscar(llave, a, mitad - 1); // si sabes que no 
        //esta en la mitad, para que la tomas
    }
    else if (puertas[mitad] < llave)
    {
        return buscar(llave, mitad + 1, b);
    }
    return 0;
}

int buscar(int llave)
{
    return buscar(llave, 0, num_puertas);
}

int main()
{
    cin >> num_puertas;
    for (int i = 0; i < num_puertas; i++)
    {
        cin >> puertas[i];
    }
    cin >> num_llaves;
    for (int l = 0; l < num_llaves; l++)
    {
        int llave_actual;
        cin >> llave_actual;
        cout << buscar(llave_actual) << ' ';
    }
    cout << "\n";
}