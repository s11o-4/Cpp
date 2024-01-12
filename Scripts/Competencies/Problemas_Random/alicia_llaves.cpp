#include <bits/stdc++.h>
using namespace std;

int chapas, llaves;
int tam_chapas[100002];
int tam_llaves[100002];

int busqueda(int n = 0)
{
    if (n < llaves)
    {
        int x = tam_llaves[n];
        int result = 0;
        int menor = 0;
        int mayor = chapas;
        int mitad;
        int a = 0;
        int limite = log2(chapas);
        while (a <= limite && menor != mayor)
        {
            mitad = (menor + mayor) / 2;
            if (tam_chapas[mitad] == x)
            {
                result = mitad + 1;
                break;
            }
            else if (tam_chapas[mitad] > x)
            {
                mayor = mitad;
            }
            else
            {
                menor = mitad;
            }
            a++;
        }
        cout << result << " ";
        busqueda(n += 1);
    }
    return 0;
}

int main()
{
    cin >> chapas;
    for (int i = 0; i < chapas; i++)
    {
        cin >> tam_chapas[i];
    }
    cin >> llaves;
    for (int l = 0; l < llaves; l++)
    {
        cin >> tam_llaves[l];
    }
    busqueda();
}

/*
Entrada :

1 <= N, M <= 100,000

si tratas de hacer O(n²) (comparar dato por dato). tendras 
100,000 * 100,000 = 10¹⁰ -> TLE   -> Tu limite de operaciones por segundo
es de 10⁸ con relación a su tiempo en omega

*/