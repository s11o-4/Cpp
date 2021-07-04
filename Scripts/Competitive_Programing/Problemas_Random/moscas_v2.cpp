#include <iostream>

using namespace std;

int linea[60002];

int maximo = 0;
int cant_moscas = 0;
int result = 0;

int main()
{

    cin >> cant_moscas;

    for (int i = 0; i < cant_moscas; i++)
    {

        int x, y;

        cin >> x;
        cin >> y;

        linea[x]++;
        linea[y]--;
    }

    for (int i = 0; i < 60001; i++)
    {
        maximo += linea[i];

        if (maximo > result)
            result = maximo;
    }

    cout << result << endl;

    int i2 = 0;
    int i3 = 0;

    for (int i = 0; i < 60001; i++)
    {
        if (i3 == result && i3 + linea[i] < result)
            //estado justamente preciso
            cout << i2 << " " << i << "\n";

        if (i3 < result && i3 + linea[i] == result)
            //estado justamente previo
            i2 = i;

        i3 += linea[i];
    }
}