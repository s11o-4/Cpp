#include <iostream>
using namespace std;


//Se parece al metodo burbuja.
//Recorres todo tu array, para asegurarte de que haz encontrado
//el elemento mas pequeño. 
//Luego switcheas el valor de la posicion de donde partiste, con el
//vaor menor que encontraste.

int main()
{
    int a[10], i, j, n, aux, indice_menor;
    cout << "numero de elementos : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "ingrese elemento " << i << " : ";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        indice_menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[indice_menor])
            {
                indice_menor = j;
            }
        }
        aux = a[i];
        a[i] = a[indice_menor];
        a[indice_menor] = aux;
    }
    cout << "forma ascendente : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nforma descendene : ";
    for (i = n; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}