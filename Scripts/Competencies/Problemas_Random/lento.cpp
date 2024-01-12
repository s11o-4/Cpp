#include <bits/stdc++.h>
using namespace std;

int num_fichas = 0;
int main()
{
    cin >> num_fichas;
    int *valores = NULL;
    valores = new int[num_fichas];
    int acumulador;
    for (int i = 0; i < num_fichas; i++)
    {
        cin >> valores[i];
    }
    sort(valores, valores + num_fichas);
    reverse(valores, valores + num_fichas);
    if (num_fichas % 2 != 0)
    {
        int fichas_elegir = (num_fichas / 2) + 1;
        for (int i = 0; i < fichas_elegir; i++)
        {
            acumulador += valores[i];
        }
    }
    else
    {
        int fichas_elegir = num_fichas / 2;
        for (int i = 0; i < fichas_elegir; i++)
        {
            acumulador += valores[i];
        }
    }
    cout << acumulador;
}