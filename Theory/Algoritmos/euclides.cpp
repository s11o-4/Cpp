#include <iostream>
using namespace std;
//Este script contiene el algoritmo de euclides, aunque tambien
//incluire un algoritmo para calcular el minimo comun múltiplo
int max_mcd = 0;
int min_mcm = 0;
//Maximo común divisor
int mcd(int n1, int n2)
{
    if (n2 == 0)
    {
        max_mcd = n1;
        return 0;
    }
    return mcd(n2, (n1 % n2));
    // n2 - dividendo
}

// Mínimo común múltiplo
void mcm(int n1, int n2)
{
    mcd(n1, n2);
    int result = (n1 * n2) / max_mcd;
    min_mcm = result;
}

int main()
{
    // No importa si tus datos los ingresas al reves(dividiendo siendo menor
    // que tu divisor).
    // Éstos se van a acomodar a los originales y solo ejecutarás una operacion
    // extra
    // Esto, porque sabes que el resultado siempre te dará 0, por lo anterior mencionado
    // así que tu reciduo siempre te dará tu dividendo y al final terminarás
    // haciendo lo mismo (modulo / divisor), y puesto que el divisor éra mayor
    // estas operaciones se van a acomodar
    int n1, n2;
    cin >> n1 >> n2;
    mcd(n1, n2);
    mcm(n1, n2);
    cout << "mcd: " << max_mcd << endl;
    cout << "mcm: " << min_mcm << endl;
}