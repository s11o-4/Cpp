#include <bits/stdc++.h>
using namespace std;

//Esta es mi solucion al problema de los hornos y las pizzas
//con algoritmos greedy

int cantidad_ordenes = 0;
int main()
{
    cin >> cantidad_ordenes;
    int *duracion = NULL;
    int *limite = NULL;
    duracion = new int[cantidad_ordenes];
    limite = new int[cantidad_ordenes];

    //entrada de datos
    for (int i = 0; i < cantidad_ordenes; i++)
    {
        cin >> duracion[i] >> limite[i];
    }

    //ordenamiento manual
    for (int i = 0; i < cantidad_ordenes; i++)
    {
        int indice_aux = i;
        int cpy_valor_limite = limite[i];
        int cpy_valor_duracion = duracion[i];
        while (indice_aux > 0 && limite[i - 1] > cpy_valor_limite)
        {
            limite[indice_aux] = limite[indice_aux - 1];
            duracion[indice_aux] = duracion[indice_aux - 1];
            indice_aux--;
        }
        limite[indice_aux] = cpy_valor_limite;
        duracion[indice_aux] = cpy_valor_duracion;
    }
    //Ojo, tus limites son por órden. no todo general, si todo fuese general podrias sumar tus limites, pero no es el caso

    int contador_duracion = 0;
    int tiempo_espera = 0;
    for (int i = 0; i < cantidad_ordenes; i++)
    {
        contador_duracion += duracion[i];
        tiempo_espera = max(tiempo_espera, contador_duracion - limite[i]);
    }
    cout << tiempo_espera << "\n";
    delete[] duracion;
    delete[] limite;
    // cout << "\n";
    // for (int i = 0; i < cantidad_ordenes; i++)
    // {
    //     cout << duracion[i] << " " << limite[i] << "\n";
    // }
}

/*

Casos de ejemplo:

3
3 6
2 4
1 2

2
1 2
2 4

2
3 3
1 2

2
1 100
10 10

2
10 10
1 2
*/
