#include <bits/stdc++.h>
using namespace std;

struct Inter_taxis
{
    int persona, pos, a_d;

    const bool operator<(const Inter_taxis &o_inter_taxis)
    {
        if (o_inter_taxis.pos == pos)
        {
            return o_inter_taxis.a_d < a_d;
        }
        return o_inter_taxis.pos > pos;
    }
};

int main()
{
    int n;
    cin >> n;
    struct Inter_taxis inter_taxis[200002];
    for (int i = 1; i <= n; i++)
    {
        int llega, salida;
        cin >> llega >> salida;
        inter_taxis[i].persona = i;
        inter_taxis[i].a_d = 1;
        inter_taxis[i].pos = llega;

        inter_taxis[i + n].persona = i;
        inter_taxis[i + n].a_d = -1;
        inter_taxis[i].pos = salida + 1;
    }

    sort(inter_taxis + 1, inter_taxis + (n * 2 + 1));

    int tax_usados = 0;
    int cnt = 0;
    for (int i = 1; i <= n * 2; i++)
    {
        cnt += inter_taxis[i].a_d;
        tax_usados = max(cnt, tax_usados);
    }

    cout << tax_usados << endl;
}