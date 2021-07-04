#include <iostream>
#include <math.h>
using namespace std;

int fibonacci(int n)
{
    cout << "Fibonacci de " << n << endl;
    //Casos base
    if (n == 0 || n == 1)
        return n;
    //Caso recursivo
    else
    {
        int fn_1 = fibonacci(n - 1);
        cout << "Estoy en " << n << " y regreso de " << n - 1 << endl;
        int fn_2 = fibonacci(n - 2);
        cout << "Estoy en " << n << " y regreso de " << n - 2 << endl;
        return fn_1 + fn_2;
    }
}

int bits[200000];
int n;
void creaSubSets(int k)
{
    //Caso base
    if (k == n) // solo se resuelve, cuando todos tus datos han sido llenados
    {
        //Return o imprimir o evaluar
        for (int i = 0; i < n; i++)
        {
            cout << bits[i];
        }
        cout << endl;
        return;
    }
    //Caso recursivo
    //LLenar de izquierda a derecha
    bits[k] = 0;
    creaSubSets(k + 1); // aumentas el indice, pero al mimso tiempo
    //reduces el valor de tu bit, tu lo mueves de posicion de derecha a izquierda
    //Backtracking
    //llenar de derecha a izquierda
    bits[k] = 1;
    creaSubSets(k + 1);
    bits[k] = 0;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

/*
Podemos representar cualquier numero de una base como una sucesion recursiva 
de productos de esa misma base, hasta llegar a un cero o a la posición cero

si multiplicas varias veces un numero para llegar a su valor, tu puedes 
convertir de una a otroa, dividiendolo 
*/

string number_x = "";
int number_10[100000];
int fnum = 0;
//convierte un numero en cualquier base en base 10
int base = 10;
int base_10(int longitud)
{
    if (longitud == 0)
    {
        fnum += pow(base, longitud) * number_10[longitud];
        return fnum;
    }
    else
    {
        fnum += pow(base, longitud) * number_10[longitud];
        return base_10(longitud - 1);
    }
}

//convierte un numero base 10 en cualquier base
int new_number[100000];
int k = 0;
int base_x(int num_10)
{
    if (num_10 == 0)
    {
        return k;
    }
    new_number[k] = num_10 % base;
    k += 1;
    return base_x(num_10 / base);
}

int main()
{
    // cin >> n;
    n = 3;
    creaSubSets(0);

    //base_10
    cin >> base;
    cin >> number_x;
    int longitud = number_x.size();
    int a = 0;
    for (int i = longitud - 1; i >= 0; i--)
    {
        int str_parseado = number_x[i] - '0';
        number_10[a] = str_parseado;
        a++;
    }
    cout << "convertidor de base " << base << " "
         << "a base 10: " << base_10(longitud - 1);
    cout << "\n";
    int n2 = 0;
    cin >> n2;
    string base_x_final = "";
    int segunda_longitud = base_x(n2);
    for (int i = segunda_longitud - 1; i >= 0; i--)
    {
        base_x_final += to_string(new_number[i]);
    }

    cout << "de base 10 a base " << base << ": " << base_x_final;
    cout << "\n";
    return 0;
}

/*

    * Pilas recursiva de llamadas a funciones 
    * Las funciones en c++ son gracias a una pila recursiva que se llama stack 
    * Backtrading recursivo 
*/