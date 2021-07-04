#include <bits/stdc++.h>
using namespace std;
int mapa[1003][1003];
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
    if (x2 > 1001)
    {
        x2 = 1001;
    }
    if (y2 > 1001)
    {
        y2 = 1001;
    }
    int suma = mapa[x2][y2] - mapa[x2][y1 - 1] - mapa[x1 - 1][y2] + mapa[x1 - 1][y1 - 1];
    if (suma > 0)
    {
        return true;
    }
    return false;
}
void bs(int x, int y)
{
    int res, mitad, li = 0, ls = 1001;
    while (li <= ls)
    {
        mitad = (li + ls) / 2;
        // cout << "estoy en: " << mapa[mitad] << "\n";
        if (probar(x - mitad, y - mitad, x + mitad, y + mitad))
        {
            res = mitad;
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
    for (int i = 1; i <= 1001; i++)
    {
        for (int j = 1; j <= 1001; j++)
        {
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
