#include <bits/stdc++.h>
using namespace std;

//Algoritmo de arreglo de acumulados
//Este algoritmo solo funcionará siempre y cuando tu array sea 
// menor que 10⁹

int movimientos, especies;
int valores_ataque[10005];
int pokemon[10005];

int main()
{
    cin >> movimientos;
    for (int i = 0; i < movimientos; i++)
    {
        cin >> valores_ataque[i];
    }
    cin >> especies;
    for (int i = 0; i < especies; i++)
    {
        cin >> pokemon[i];
    }

    int max = valores_ataque[0];
    for (int i = 0; i < movimientos; i++)
    {
        if (valores_ataque[i] > max)
        {
            max = valores_ataque[i];
        }
    }

    int *puntero_prototipo_acumulado = NULL;
    puntero_prototipo_acumulado = new int[max];
    for (int i = 0; i < especies; i++)
    {
        if (pokemon[i] <= max)
        {
            int indice = pokemon[i] - 1;
            puntero_prototipo_acumulado[indice] += 1;
        }
    }

    // //muestro prototipo de acumulados
    // for (int l = 0; l < max; l++)
    // {
    //     cout << "[" << puntero_prototipo_acumulado[l] << "]";
    // }
    // cout << "\n";

    int array_acumulado[max];
    int a = 0;

    for (int l = 0; l < max; l++)
    {
        a += puntero_prototipo_acumulado[l];
        array_acumulado[l] = a;
    }

    // //muestro acumulados finales
    // for (int i = 0; i < max; i++)
    // {
    //     cout << "[" << array_acumulado[i] << "]";
    // }
    // cout << "\n";

    for (int i = 0; i < movimientos; i++)
    {
        cout << array_acumulado[valores_ataque[i] - 1] << " ";
    }
}