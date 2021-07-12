#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool criba[100];
vector<int> primos;

//Algoritmo para crear la tabla de eratostenes
int main()
{
    int longitud = sizeof(criba) / sizeof(criba[0]);
    for (int i = 0; i < longitud; i++)
    {
        criba[i] = 1;
    }

    int limite = sqrt(longitud);

    //si tu ultimo elemento es primo, igual lo quieres tomar en cuenta, por eso es '='
    for (int i = 2; i <= limite; i++)
    {
        if (criba[i])
        {
            for (int l = i * i; l < longitud; l += i)
            {
                criba[l] = 0;
            }
        }
        /*
        // mi forma (menor eficiente), ya que yo considerare a los numeros
        // menores de tu raiz, sin importar si ya eliminaste a un numero dentro de ellos
        for (int l = i * i; l < longitud; l += i) // i * i, para obtener el
        //siguiente numero múltiplo, que a su vez lo eliminará. incluyendo a los
        //numeros de tu primera decena
        {
            if (criba[l])
            {
                criba[l] = 0;
            }
        }
        */
    }
    for (int l = 2; l < longitud; l++)
    {
        if (criba[l])
        {
            cout << l << "\n";
        }
    }
    cout << "\n";
    //Creo un vector, lo lleno de primos, y leugo imprimo su tamaño. así
    //obtengo cuantos numeros primos hay en un rango de numeros
    for (int l = 2; l < longitud; l++)
    {
        if (criba[l])
        {
            primos.push_back(l);
        }
    }

    cout << primos.size();

    return 0;
}
