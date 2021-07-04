#include <iostream>
#include <algorithm>

using namespace std;

struct Rangos
{
    int nac_fall;
    int a_d = 0;

    const bool operator<(Rangos &other_rangos)
    {

        return other_rangos.nac_fall > nac_fall;
    }
};

const bool debug = false;

int cant_moscas;

int main()
{
    cin >> cant_moscas;

    int longitud = cant_moscas * 2;
    struct Rangos mortalidad[longitud];

    for (int i = 0; i < longitud; i += 2)
    {
        int in1, in2;
        cin >> in1 >> in2;
        if (in1 != in2)
        {
            mortalidad[i].nac_fall = in1;
            mortalidad[i].a_d += 1;

            mortalidad[i + 1].nac_fall = in2;
            mortalidad[i + 1].a_d -= 1;
        }
    }

    sort(mortalidad, mortalidad + longitud);

    int maximo = 0;
    int result = 0;

    int pares[longitud];
    int i2 = 0;

    if (debug)
    {
        cout << endl;
        for (int i = 0; i < longitud; i++)
        {
            cout << mortalidad[i].nac_fall << " : " << mortalidad[i].a_d << " \n ";
        }
        cout << endl;
    }

    int last_value = 0;
    for (int i = 0; i < longitud; i++)
    {
        if (mortalidad[i].a_d == 1 && mortalidad[i].nac_fall != mortalidad[i + 1].nac_fall && mortalidad[i].nac_fall != mortalidad[i - 1].nac_fall)
        {
            maximo += 1;
            last_value = mortalidad[i].nac_fall;
        }
        else if (mortalidad[i].a_d == mortalidad[i + 1].a_d && mortalidad[i].a_d == 1)
        {
            maximo += 1;
            last_value = mortalidad[i].nac_fall;
        }
        else
        {
            if (mortalidad[i].a_d == -1 && mortalidad[i].nac_fall != mortalidad[i - 1].nac_fall && mortalidad[i].nac_fall != mortalidad[i + 1].nac_fall)
            {
                if (maximo == result)
                {
                    if (last_value == pares[i2 - 1])
                    {
                        pares[i2 - 1] = mortalidad[i].nac_fall;
                        i2++;
                    }
                    else
                    {
                        pares[i2] = last_value;
                        i2++;
                        pares[i2] = mortalidad[i].nac_fall;
                        i2++;
                    }
                }

                if (maximo > result)
                {
                    i2 = 0;
                    pares[i2] = last_value;
                    i2++;
                    pares[i2] = mortalidad[i].nac_fall;
                    i2++;
                }

                result = max(maximo, result);
                maximo -= 1;
            }
            else if (mortalidad[i].a_d == mortalidad[i - 1].a_d && mortalidad[i].a_d == -1)
            {
                maximo -= 1;
            }
        }
    }

    if (debug)
    {
        cout << endl;
    }

    cout << result << "\n";
    int limite = i2 - 1;
    for (int i = 0; i < limite; i += 2)
    {
        cout << pares[i] << " " << pares[i + 1] << " ";
    }
}
