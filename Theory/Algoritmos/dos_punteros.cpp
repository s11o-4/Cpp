#include <iostream>
using namespace std;

//Algoritmo de los dos punteros.
//Objetivo: saber si dos numeros de mi array, me dan el
//número deseado
//el puntero menor aumenta, y el puntero mayor decrece
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int puntero1 = 0;
    int puntero2 = 4;

    int suma_buscar = 9;
    int valor = 0;
    while (puntero1 != puntero2 && valor != suma_buscar)
    {
        valor = array[puntero1] + array[puntero2];
        if (valor > suma_buscar)
        {
            puntero2--;
        }
        else if (valor < suma_buscar)
        {
            puntero1++;
        }
        else
        {
            cout << array[puntero1] << " + " << array[puntero2] << " = " << valor << "\n";
        }
    }
    
}