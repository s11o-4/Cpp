#include <bits/stdc++.h>
using namespace std;

struct Torre
{
    int altura = 0;
    int distancia = 0;

    const bool operator<(const Torre &o_torre)
    {
        return o_torre.distancia > distancia;
    }
};

int cant_torres;
int main()
{
    cin >> cant_torres;
    struct Torre torres[cant_torres];

    for (int i = 0; i < cant_torres; i++)
    {
        int distancia, altura;
        cin >> distancia >> altura;
        torres[i].altura = altura;
        torres[i].distancia = distancia;
    }

    sort(torres, torres + cant_torres);

    int min_puntero = 0;
    int max_puntero = cant_torres - 1;
    long long area = 0;
    long long cnt = 0;
    while (min_puntero < max_puntero)
    {
        cnt = torres[max_puntero].distancia - torres[min_puntero].distancia;
        if (torres[max_puntero].altura < torres[min_puntero].altura)
        {
            cnt = cnt * torres[max_puntero].altura;
        }
        else
        {
            cnt = cnt * torres[min_puntero].altura;
        }

        if (cnt > area)
        {
            area = max(cnt, area);
            min_puntero += 1;
        }
        else
        {
            max_puntero -= 1;
        }
    }
    cout << area << endl;
}