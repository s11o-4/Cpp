#include <bits/stdc++.h>
using namespace std;

int main()
{
    long edificios;
    cin >> edificios;
    long alturas[edificios];
    long mayor = -1;
    bool primer_menor = true;
    long *contador;
    contador = new long[edificios];
    long hijo_mayor = -1;
    int a = -1;
    for (long i = 0; i < edificios; i++)
    {
        cin >> alturas[i];

        if (alturas[i] >= mayor)
        {
            mayor = alturas[i];
            hijo_mayor = alturas[i];
            a += 1;
        }
        else if (alturas[i] < hijo_mayor)
        {
            if (primer_menor)
            {
                primer_menor = false;
                contador[a] += 1;
            }
            hijo_mayor = alturas[i];
            contador[a] += 1;
        }
    }

    sort(contador, contador + edificios);
    reverse(contador, contador + edificios);
    if (contador[0] == 0)
    {
        cout << 1;
    }
    else
    {
        cout << contador[0];
    }
    delete[] contador;
}