#include <bits/stdc++.h>
using namespace std;

struct Personas
{
    int altura = 0;
    int peso = 0;
    int intervalo = 0;
    const bool operator<(const Personas &o_personas)
    {
        if (o_personas.peso == peso)
        {
            return o_personas.altura > altura;
        }
        return o_personas.peso > peso;
    }
};

int cant_olim;
long long goal;
int main()
{
    cin >> cant_olim;
    cin >> goal;

    struct Personas personas[cant_olim];
    for (int i = 0; i < cant_olim; i++)
    {
        cin >> personas[i].altura;
        cin >> personas[i].peso;
    }

    sort(personas, personas + cant_olim);

    // cout << endl;

    // for (int i = 0; i < cant_olim; i++)
    // {
    //     cout << personas[i].peso << " " << personas[i].altura << endl;
    // }

    // cout << endl;

    struct Res
    {
        int intervalos = 0;
        int peso_acu = 0;
        int max_peso = 0;
    };
    struct Res pos_result;
    struct Res result;
    long long cnt = 0;
    bool flag = false;
    int i = 1;
    while (i <= cant_olim)
    {
        cnt += personas[i - 1].altura;
        pos_result.peso_acu += personas[i - 1].peso;
        pos_result.intervalos += personas[i - 1].peso - personas[i - 2].peso;
        pos_result.max_peso = max(pos_result.max_peso, personas[i - 1].peso);
        if (cnt >= goal)
        {
            cnt = 0;
            if (!flag)
            {
                result.max_peso = pos_result.max_peso;
                result.intervalos = pos_result.intervalos;
                result.peso_acu = pos_result.peso_acu;
                flag = true;
            }
            else
            {
                if (pos_result.peso_acu <= result.peso_acu && pos_result.intervalos < result.intervalos)
                {
                    result.max_peso = pos_result.max_peso;
                    result.intervalos = pos_result.intervalos;
                    result.peso_acu = pos_result.peso_acu;
                }
            }
            pos_result.intervalos = 0;
            pos_result.max_peso = 0;
            pos_result.peso_acu = 0;
            continue;
        }
        i++;
    }
    cout << result.max_peso << endl;
}