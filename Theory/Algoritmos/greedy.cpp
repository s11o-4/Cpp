#include <bits/stdc++.h>
#define MAXIMO 100

using namespace std;

struct Actividad
{
    int duracion, tiempoLimite;

    const bool operator<(const Actividad &otra)
    {
        return tiempoLimite < otra.tiempoLimite;
    }
};

Actividad actividades[MAXIMO];

int tardanzaMaxima = 0, tiempoTotal = 0, totalActividades;

int main()
{
    cin >> totalActividades;
    for (int i = 0; i < totalActividades; i++)
    {
        cin >> actividades[i].duracion >> actividades[i].tiempoLimite;
    }
    sort(actividades, actividades + totalActividades); //Ordena el contenido
    //de cada primer elemento de tu array  -> para poder hacer esto, necesitas
    //sobrecargar tu operador "<", en tu struct Actividad
    //y ordenarlo así, con base a tu tiempoLímite,
    //no a  tu tiempo de duracion.

    cout << endl;
    //visualizar ordenamiento
    for (int i = 0; i < totalActividades; i++)
    {
        cout << actividades[i].duracion << " " << actividades[i].tiempoLimite << "\n";
    }
    cout << "\n";

    for (int i = 0; i < totalActividades; i++)
    {
        tiempoTotal += actividades[i].duracion;
        cout << "tiempoTotal: " << tiempoTotal << "\n";
        tardanzaMaxima = max(tardanzaMaxima, tiempoTotal - actividades[i].tiempoLimite);
        //usas max, porque si hay una tardanza mayor a cero, entonces quieres usar
        //esa tardanza
    }
    cout << tardanzaMaxima;
    return 0;
}

/*

Casos de ejemplo:

3
3 6
2 4
1 2
-------------lo de arriba ordenado pasa a ser:
1 2
2 4
3 6

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
