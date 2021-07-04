#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int criba[100];

int solicitud;

int main()
{
    int longitud = sizeof(criba) / sizeof(criba[0]);
    for (int i = 0; i < longitud; i++)
    {
        criba[i] = 0;
    }

    int maximo = longitud / 2;
    //si tu ultimo elemento es primo, igual lo quieres tomar en cuenta, por eso es '='
    for (int i = 2; i <= maximo; i++)
    {
        if (!criba[i])
        {
            for (int l = i; l < longitud; l += i)
            {
                criba[l]++;
            }
        }
    }
    int q;
    cin >> q;
    for (int l = 0; l < q; l++)
    {
        cin >> solicitud;
        cout << max(criba[solicitud], 1);
    }

    return 0;
}
