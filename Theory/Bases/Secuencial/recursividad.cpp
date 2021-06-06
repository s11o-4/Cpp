#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        num = 1;
    }
    else
    {
        num = num * factorial(num - 1);
    }
    return num;
}
//Segunda forma mas limpia
// int factorial(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

//Imprimir desde el numero de la izquierda, hasta el número de la derecha
void imprimir(int izq, int der)
{
    if(izq == der)
    {
        cout << izq << "\n";
        return;
    }
    cout << izq << " ";
    imprimir(izq + 1, der);
}

int main()
{
    cout << factorial(5) << endl;
    imprimir(1, 10);
}