//Busqueda Binaria
#include <iostream>
#include <math.h>
using namespace std;
//Script definitivo de busqueda binaria

int numbers[10000];
int cant_numbers = 0;

//Funcion recursiva
int buscar(int n, int a, int b)
{
    if(a > b)
    {
        return 0;
    }
    int mitad = a + ((b - a) / 2);
    if(numbers[mitad] == n)
    {
        return mitad + 1;
    }
    else if(numbers[mitad] > n)
    {
        return buscar(n, a, mitad - 1);
    }
    else 
    {
        return buscar(n, mitad + 1, b);
    }
}

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int inf, sup, mitad, dato, i;
    dato = 5;
    inf = 0;
    sup = 5;
    i = 0;

    int longitud = sizeof(numeros) / sizeof(numeros[0]);
    int limite = log2(longitud);
    while (i <= limite)
    {
        mitad = (inf + sup) / 2;
        if (numeros[mitad] == dato)
        {
            cout << "indice: " << mitad << endl;
            break;
        }
        if (numeros[mitad] > dato)
        {
            sup = mitad;
        }
        if (numeros[mitad] < dato)
        {
            inf = mitad;
        }
        i++;
    }

    //Forma recursiva
    cin >> cant_numbers;
    for (int i = 0; i < cant_numbers; i++)
    {
        cin >> numbers[i];
    }

    int numbers_search = 0;
    cin >> numbers_search;
    for (int l = 0; l < numbers_search; l++)
    {
        int number_search = 0;
        cin >> number_search;
        cout << buscar(number_search, 0, cant_numbers) << " ";
    }
    cout << "\n";
    return 0;

}


/*
Casos de ejemplo:

5
1 2 3 4 5
3 
6 4 1

*/
