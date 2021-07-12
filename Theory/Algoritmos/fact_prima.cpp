#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int criba[1000000];
vector<int> primos;

// Algoritmo, para saber cuantos numeros pueden crear la factorización prima
// de x número
int main()
{
    int n;
    cin >> n;
    int limite = n / 2;

    for (int i = 2; i <= limite; i++)
    {
        if (!criba[i])
        {
            for (int l = i; l < n; l += i)
            {
                criba[l]++;
            }
        }
    }

    int q, solicitud;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> solicitud;
        if (solicitud < 2)
        {
            cout << "0\n";
        }
        else
        {
            cout << max(criba[solicitud], 1) << endl;
        }
    }

    return 0;
}
