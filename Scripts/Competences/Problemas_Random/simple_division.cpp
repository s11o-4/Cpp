#include <iostream>
using namespace std;

int cant_num, menor;
int numbers[1002];
/*
    Problema
    Encuentra un numero que divida a todos, y que su reciduo sea el mismo para todos los 
    numeros

    casos ejemplo:
    4
    701 1059 1417 2312
    
    5
    14 23 17 32 122

    out1 - 179
    out2 - 3
*/
int main()
{
    cin >> cant_num;
    for (int i = 0; i < cant_num; i++)
    {
        int tem_var = 0;
        cin >> tem_var;
        tem_var = abs(tem_var);
        numbers[i] = tem_var;
    }

    menor = numbers[0];
    for (int l = 0; l < cant_num; l++)
    {
        if (numbers[l] < menor)
        {
            menor = numbers[l];
        }
    }
    int modulo = 1;
    int temp_modulo;
    for (int i = 1; i <= menor; i++)
    {
        int l = 1;
        bool bandera = false;
        while (l < cant_num)
        {
            temp_modulo = numbers[l] % i;
            if (numbers[l - 1] % i != temp_modulo)
            {
                break;
            }
            if (l + 1 == cant_num)
            {
                bandera = true;
            }
            l++;
        }
        if (bandera)
        {
            modulo = max(modulo, i);
        }
    }
    cout << modulo << endl;
}