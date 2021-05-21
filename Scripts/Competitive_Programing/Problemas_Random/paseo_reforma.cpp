#include <bits/stdc++.h>
using namespace std;

int main()
{
    long edificios;
    cin >> edificios;
    long alturas[edificios];
    long mayor;
    bool inicio_flag = false;
    long *contador;
    contador = new long[edificios];
    long hijo_mayor;
    int a = 0;
    for (long i = 0; i < edificios; i++)
    {
        cin >> alturas[i];
        if (inicio_flag == false)
        {
            mayor = alturas[i];
            hijo_mayor = alturas[i];
            inicio_flag = true;
            contador[a]++;
        }
        else
        {
            if (alturas[i] > mayor)
            {
                mayor = alturas[i];
                hijo_mayor = alturas[i];
                a++;
                contador[a]++;
            }
            else if (alturas[i] < hijo_mayor && alturas[i] != hijo_mayor)
            {
                hijo_mayor = alturas[i];
                contador[a]++;
            }
        }
    }
    long longitud = sizeof(contador) / sizeof(contador[0]);
    long result = contador[0];
    for (long i = 0; i <= longitud; i++)
    {
        if(result < contador[i]){
            result = contador[i];
        }
    }
    cout<<result;
    delete[] contador;
}