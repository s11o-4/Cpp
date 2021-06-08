#include <bits/stdc++.h>
using namespace std;

int edif = 0;
int altura[100001];
int main()
{
    cin >> edif;
    for (int i = 0; i < edif; i++)
    {
        cin >> altura[i];
    }

    int maximo = 1;
    int local_a = 1;
    int new_indice = 0;
    for (int i = 0; i < edif; i++)
    {
        local_a = 1;
        new_indice = i;
        for (int l = i + 1; l < edif; l++)
        {
            if (altura[l] < altura[l - 1])
            {
                local_a++;
                new_indice = l;
            }
            else
            {
                break;
            }
        }
        i = new_indice;
        maximo = max(maximo, local_a);
    }
    cout << maximo << endl;
}