#include <iostream>
using namespace std;

int escalones;
unsigned int alturas[10000002];

int main()
{
    cin >> escalones;

    for (int i = 0; i < escalones; i++)
    {
        cin >> alturas[i];
    }

    int maximo = alturas[0];
    int tem_var = 1;
    int confirmacion = maximo;
    for (int l = 1; l < escalones; l++)
    {
        tem_var = alturas[l] - alturas[l - 1];
        if (tem_var > maximo)
        {
            maximo = tem_var;
            confirmacion = maximo;
        }

        if (confirmacion == 0 || confirmacion < tem_var)
        {
            maximo += 1;
            confirmacion = maximo;
        }
        
        if (maximo == tem_var)
        {
            confirmacion -= 1;
        }
    }
    cout << maximo;
}