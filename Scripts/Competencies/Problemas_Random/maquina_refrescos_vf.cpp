#include <iostream>
#include <algorithm>
using namespace std;

struct rangos
{
    int valor;
    int a_d = 0;

    const bool operator<(const rangos &c_rangos)
    {
        return c_rangos.valor > valor;
    }
};

int canchas;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> canchas;
    int longitud = canchas * 2;
    struct rangos local_aumento[longitud];
    int a = 0;
    for (int i = 0; i < canchas; i++)
    {
        cin >> local_aumento[a].valor;
        local_aumento[a].a_d++;

        int mod_data;
        cin >> mod_data;
        mod_data = mod_data + 1;
        local_aumento[a + 1].valor = mod_data;
        local_aumento[a + 1].a_d--;
        a += 2;
    }

    sort(local_aumento, local_aumento + longitud);

    // cout << endl;
    // for (int i = 0; i < longitud; i++)
    // {
    //     cout << local_aumento[i].valor << " : " << local_aumento[i].a_d << endl;
    // }
    // cout << endl;

    int maximo = 0;
    int result = 0;
    for (int i = 0; i < longitud; i++)
    {
        if (local_aumento[i].valor == local_aumento[i + 1].valor && local_aumento[i].a_d != -1)
        {
            maximo += local_aumento[i + 1].a_d;
            result = max(maximo, result);
            maximo += local_aumento[i].a_d;
            i += 1;
            continue;
        }
        if (local_aumento[i].a_d != -1)
        {
            maximo += local_aumento[i].a_d;
        }
        else
        {
            result = max(maximo, result);
            maximo += local_aumento[i].a_d;
        }
    }

    cout << result << "\n";
}
