#include <bits/stdc++.h>
using namespace std;
int mapa[17][17];
int o, p;
int xo, yo, xp, yp;
bool probar(int x1, int y1, int x2, int y2)
{
    if (x1 < 1)
    {
        x1 = 1;
    }
    if (y1 < 1)
    {
        y1 = 1;
    }
    if (x2 > 15)
    {
        x2 = 15;
    }
    if (y2 > 15)
    {
        y2 = 15;
    }
    int suma = mapa[x2][y2] - mapa[x2][y1 - 1] - mapa[x1 - 1][y2] 
    + mapa[x1 - 1][y1 - 1];
    // la operacion de arriba, lo único que esta haciendo, es aplicar la
    // operacion que tu hiciste inicialmente. (su inverso), para saber
    // si en esa casilla originalmente existía una oveja
    // o para saber si dentro del rango en el que te encuentras
    // existen ovejas.
    // Cuando este en las últimas casillas por llegar, solo te dará un 1
    // si en esa casilla inicialmente hubo una oveja

    int eval1 = mapa[x2][y2];
    int eval2 = mapa[x2][y1 - 1];
    int eval3 = mapa[x1 - 1][y2];
    int eval4 = mapa[x1 - 1][y1 - 1];
    cout << "eval4: " << eval4 << " eval3: " << eval3 << "\n"
         << "eval2: " << eval2 << " eval1: " << eval1 << "\n";

    if (suma > 0)
    {
        // Si tu suma es mayor a 0, entonces significa que existen ovejas
        // y que puedes seguir reduciendo tu marco
        return true;
    }
    return false;
}
//busqueda binaria bidimensional
void bs(int x, int y)
{
    int res, mitad, li = 0, ls = 16;
    while (li <= ls)
    //tu obligas a que se desborde, para poder encontrar la oveja
    //mas cercana posible
    {
        mitad = (li + ls) / 2;
        // mitad varía. X && y, no. tu lo que estás haciendo es crear
        // una zona rectangular. La cual irás abriendo o acortando, dependiendo
        // de la respuesta de la funcion "probar"
        if (probar(x - mitad, y - mitad, x + mitad, y + mitad))
        {
            res = mitad;
            cout << "mitad vale: " << mitad << "\n";
            ls = mitad - 1;
        }
        else
        {
            li = mitad + 1;
        }
    }
    cout << res << "\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;

    // lectura de los datos y precaululo
    //lectura datos
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        mapa[x + 1][y + 1]++; //x y y pueden empezar desde 0 para no utilizar condiciones en precalc
    }

    cout << endl;

    for (int i = 1; i <= 15; i++)
    {
        for (int j = 1; j <= 15; j++)
        {
            cout << "[" << mapa[i][j] << "]";
        }
    }
    cout << endl;
    cout << endl;

    //precalculo
    for (int i = 1; i <= 15; i++)
    {
        for (int j = 1; j <= 15; j++)
        {
            // n = (n * 2) - n (si los valores de n, no cambiaron, se mantendrá el mismo valor)
            // tu consideras los tres tipos de situaciones, en donde puedes tener
            // en izquierda, arriba ó diagonal
            mapa[i][j] += mapa[i - 1][j] + mapa[i][j - 1] - mapa[i - 1][j - 1];
        }
    }
    cout << endl;

    for (int i = 1; i <= 15; i++)
    {
        for (int j = 1; j <= 15; j++)
        {
            cout << "[" << mapa[i][j] << "]";
        }
    }
    cout << endl;

    while (q--)
    {
        cin >> xo >> yo;
        bs(xo + 1, yo + 1);
    }
}

/*
 * Problema que aplica este algoritmo
 * https://omegaup.com/arena/problem/OMI-2020-Ovejas/ 
*/