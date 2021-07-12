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
    if (x2 > 16)
    {
        x2 = 16;
    }
    if (y2 > 16)
    {
        y2 = 16;
    }
    // Es menos 1, porque tu lo que quieres saber es si hay ovejas
    // dentro de el rango que creaste. NO si en donde estas hay ovejas
    // si hicieras eso, desde un principio te daría 0. Por eso en la entrada 
    // le restas 1 y aqui haces lo mismo. Porque quieres la corrdenada real
    // ademas. mitad comienza desde lim_inf, como 0. Por lo que 
    // haces que quieras empezar desde la posicion mas baja 
    int suma = mapa[x2][y2] - mapa[x2][y1 - 1] - mapa[x1 - 1][y2] + mapa[x1 - 1][y1 - 1];
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
        // donde tu "centro (solo en algunos casos), será tu x, && tu y"
        // y los rangos dados, por tu mitad
        // tu literalmente tienes un radar cuadrado que va disminuyendo conforme
        // se encuentren elementos, y que se ajustará hasta encontrar el mínimo
        // elemento. Piensalo primero en unidimensional, y luego lo pasas a algo
        // bidimensional
        if (probar(x - mitad, y - mitad, x + mitad, y + mitad))
        {
            // Al tu dividirlo entre dos, cada vez te estás hacercando
            // mas a tu centro. en relacion con la cantidad de ovejas
            res = mitad;
            cout << "mitad vale: " << mitad << "\n";
            ls = mitad - 1;
        }
        else
        {
            // yo se que la oveja, está mas atras,
            // por lo tanto aumento el valor de li
            // para que el rango negativo, aumente
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