
#include <bits/stdc++.h>
using namespace std;

struct Personas
{
    int altura;
    int peso;

    const bool operator<(const Personas &o_personas)
    {
        if (o_personas.peso == peso)
        {
            return o_personas.altura > altura;
        }
        return o_personas.peso > peso;
    }
};

struct Answer
{
    int dist;
    int pers;
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

    struct Answer answer[1];
    answer[0].dist = personas[1].peso - personas[0].peso;

    map<int, int> result;
    unsigned long long int cnt = 0;
    bool flag = false;
    // cout << endl;
    for (int i = 1; i < cant_olim; i++)
    {
        if(!flag)
        {
            result[0] = personas[i].peso - personas[i - 1].peso;
            flag = true;
        }
        if()
    }
    // cout << result << endl;
}