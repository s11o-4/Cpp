#include <iostream>
#include <map>
#include <utility>
// #include <algorithm>
using namespace std;

int long_list;
int pel_rent;
long long costo_renta;
long long *list_pel = NULL;
map<int, int> pel_act;
map<int, int> acu_pel;
int main()
{
    cin >> long_list >> pel_rent >> costo_renta;
    list_pel = new long long[long_list];
    for (int i = 0; i < long_list; i++)
    {
        cin >> list_pel[i];
        int local_index = list_pel[i];
        if (i < pel_rent)
        {
            pel_act[local_index] += 1;
        }
        else
        {
            acu_pel[local_index] += 1;
        }
    }

    int start = pel_act.size();

    long long res_pagar = 0;
    int val_to_change = 0;
    int minimo = 0;
    for (int i = start; i < long_list; i++)
    {
        bool bandera = false;

        // cout << "peli a rentar: " << list_pel[i] << " \n ";
        // cout << endl;

        // si en las pel act, no encuentra la nueva pelicula
        if (pel_act.find(list_pel[i]) == pel_act.end())
        {
            res_pagar += costo_renta;
            for (pair<int, int> i_pel_act : pel_act)
            {
                // si existe en la siguientes
                if (acu_pel.find(i_pel_act.first) != acu_pel.end())
                {
                    int compare = acu_pel[i_pel_act.first];

                    if (bandera == false)
                    {
                        minimo = compare;
                        val_to_change = i_pel_act.first;
                        bandera = true;
                    }
                    else
                    {
                        if (minimo > compare)
                        {
                            minimo = compare;
                            val_to_change = i_pel_act.first;
                        }
                    }
                }
                else
                {
                    val_to_change = i_pel_act.first;
                    break;
                }
            }
            pel_act.erase(val_to_change);
            pel_act[list_pel[i]] = 0;
        }

        acu_pel[list_pel[i]] -= 1; //-> a considerar. si ya la vio, deberia de reducirse de la lista

        // for (pair<int, int> z : pel_act)
        // {
        //     cout << z.first << " ";
        // }
        // cout << endl;
    }
    cout << res_pagar << "\n";
}