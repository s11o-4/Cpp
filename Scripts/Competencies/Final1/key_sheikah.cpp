#include <bits/stdc++.h>
using namespace std;

struct ura
{
    int h, d;
    const bool operator<(const ura &a)
    {
        if (h == a.h)
        {
            return d < a.d;
        }
        return h < a.h;
    }
};

ura arre[100002];
int n, minimo, maximo;
long long int max_area;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arre[i].d >> arre[i].h;
    }
    sort(arre + 1, arre + n + 1);
    minimo = arre[n].d;
    maximo = arre[n].d;
    max_area = (long long int)arre[n].h;

    cout << endl;
    for (int i = n; i >= 1; i--)
    {
        cout << arre[i].h << " " << arre[i].d << "\n";
    }
    cout << endl;

    cout << "max_area antes: " << max_area << endl
         << endl;
    for (int i = n - 1; i >= 1; i--)
    {
        minimo = min(minimo, arre[i].d);
        cout << "minimo: " << minimo << endl;
        maximo = max(maximo, arre[i].d);
        cout << "maximo: " << maximo << endl;
        // Tu tomas el anterior. porque tu cuadrado siempre debe de ir
        // desde el segundo mas pequeño
        max_area = max(max_area, (long long int)(arre[i].h * (maximo - minimo)));
        // Tu calculas el area de las dos primas torres mas áltas.
        // luego de esto, si resulta ser que otra torre que se encontraba
        // mas lejos que tus dos primeras y su altura
        // multiplicada por su altura, te mas que la de las
        // dos torres mas áltas, entonces se va a actualizar.
        // la torre en si no importa tanto. Al final es que sea la segunda torre
        // mas alta y que el área sea mayor
        cout << "max_area: " << max_area << endl;
    }
    cout << max_area << " " << endl;
}