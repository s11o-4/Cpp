#include <iostream>
#include <algorithm>
using namespace std;

int canchas;
int final_rangos[100001];
struct rangos
{
    int inicio;
    int limite;

    const bool operator<(const rangos &a_comparar)
    {
        return a_comparar.inicio > inicio;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> canchas;
    struct rangos local_rangos[canchas + 1];
    int a = 0;
    for (int i = 0; i < canchas; i++)
    {
        int in1, in2;
        cin >> in1 >> in2;
        local_rangos[i].inicio = in1;
        local_rangos[i].limite = in2;
        // final_rangos[a] = in1;
        // final_rangos[a + 1] = in2;
        // a += 2;
    }

    sort(local_rangos, local_rangos + canchas);

    for (int i = 0; i < canchas; i++)
    {
        int index1 = local_rangos[i].inicio, index2 = local_rangos[i].limite;
        final_rangos[index1] += 1;
        final_rangos[index2] -= 1;
    }
    cout << "\n";

    for (int i = 0; i < canchas * 2; i++)
    {
        cout << final_rangos[i] << " ";
    }
    cout << "\n";
    // sort(final_rangos, final_rangos + canchas * 2);
    cout << endl;
    for (int i = 0; i < canchas; i++)
    {
        cout << local_rangos[i].inicio << " : " << local_rangos[i].limite << "\n";
    }

    // cout << endl;

    // for (int i = 0; i < canchas * 2; i++)
    // {
    //     cout << final_rangos[i] << " ";
    // }

    cout << "\n";
}