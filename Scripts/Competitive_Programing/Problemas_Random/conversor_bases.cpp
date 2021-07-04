#include <bits/stdc++.h>

using namespace std;

int main()
{
    int longitud = 0;
    cin >> longitud;
    int cifra[longitud];
    for (int l = 0; l < longitud; l++)
    {
        cin >> cifra[l];
    }

    int base;
    cin >> base;

    int nuevo_digito = 0;
    for (int i = longitud - 1; i >= 0; i--)
    {
        int digito = cifra[i];
        nuevo_digito += digito * pow(base, i);
    }
    cout << nuevo_digito;
    cout << "\n";
}