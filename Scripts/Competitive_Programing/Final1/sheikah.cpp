#include <iostream>
#include <algorithm>
using namespace std;

struct Torres
{
    int altura;
    int distancia;

    const bool operator<(const Torres &o_torre)
    {
        return o_torre.altura > altura;
    }
};

int main()
{
    int cant_torres;
    cin >> cant_torres;
    Torres torres[cant_torres];
    for (int i = 0; i < cant_torres; i++)
    {
        cin >> torres[i].distancia;
        cin >> torres[i].altura;
    }

    sort(torres, torres + cant_torres);

    int maximo = torres[cant_torres - 1].distancia;
    int minimo = torres[cant_torres - 1].distancia;
    long long area = torres[cant_torres - 1].altura;
    for (int i = cant_torres - 2; i >= 0; i--)
    {
        maximo = max(torres[i].distancia, maximo);
        minimo = min(torres[i].distancia, minimo);
        area = max(area, (long long)(torres[i].altura * (maximo - minimo)));
    }
    cout << area << endl;
}