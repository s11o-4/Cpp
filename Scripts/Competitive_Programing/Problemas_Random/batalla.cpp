#include <bits/stdc++.h>
using namespace std;

int unidades_ejercito = 0;
int mi_bando_fuerzas[55];
int contrario_fuerzas[55];
int main()
{
    long final_result = 0;
    cin >> unidades_ejercito;
    for (int i = 0; i < unidades_ejercito; i++)
    {
        cin >> mi_bando_fuerzas[i];
        cin >> contrario_fuerzas[i];
    }
    for (int i = 0; i < unidades_ejercito; i++)
    {
        for (int l = 0; l < unidades_ejercito; l++)
        {
            if (mi_bando_fuerzas[i] > contrario_fuerzas[l] && contrario_fuerzas[l] != -1)
            {
                final_result += mi_bando_fuerzas[i];
                contrario_fuerzas[l] = -1;
                break;
            }
        }
    }
    cout << final_result;
}