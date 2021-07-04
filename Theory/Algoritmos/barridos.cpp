#include <iostream>
using namespace std;

//algoritmo de barridos || sliding window
//objetivo - encontrar dos numeros del array que nos den el numero
//que estemos buscando. solo que aquí, vas recortando el array (barriendo)
int main()
{
    int array[8] = {1, 3, 2, 5, 1, 1, 2, 3};
    int buscar = 0;
    cin >> buscar;
    int l = 1;
    int i = 0;
    int encontrado = array[i] + array[l];
    while (l != i)
    {
        if (encontrado == buscar)
        {
            cout << "encontrado : " << encontrado << "\n";
            break;
        }
        else if (encontrado > buscar)
        {
            encontrado -= array[i];
            i += 1;
        }
        else
        {
            l += 1;
            encontrado += array[l];
        }
    }
}

//Ejemplo claro aplicado de barridos -> problema de reforma
//https://omegaup.com/arena/Entrenamiento-Karelbug-1/practice/#problems/OMI2018-Reforma