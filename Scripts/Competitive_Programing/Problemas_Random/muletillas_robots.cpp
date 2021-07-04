#include <bits/stdc++.h>

using namespace std;
map<int, int> bucket;
// cual de los numeros ingresados, es el que se repite mas veces
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bucket[x] = bucket[x] + 1;
    }
    int maximo = 0;
    int resp = 0;
    for (pair<int, int> p : bucket)
    {
        if (p.second > maximo)
        {
            maximo = p.second;
            resp = p.first;
        }
    }
    cout << resp << endl;
    return 0;
}
//https://omegaup.com/arena/problem/Muletillas-de-robots/#problems