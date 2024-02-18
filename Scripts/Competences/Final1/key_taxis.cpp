#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct parejas
{
    int pos, sum, persona;
    const bool operator<(const parejas &a)
    {
        if (pos == a.pos)
        {
            return sum < a.sum;
        }
        return pos < a.pos;
    }
};

queue<int> q;
parejas arre[200002];
int taxis[100002];
int n, a, b, aux, numero, num;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        arre[i].pos = a;
        arre[i].sum = 1;
        arre[i].persona = i;
        arre[n + i].pos = b + 1;
        arre[n + i].sum = -1;
        arre[n + i].persona = i;
    }
    sort(arre + 1, arre + (2 * n + 1));

    for (int i = 1; i <= 2 * n; i++)
    {
        aux += arre[i].sum;
        numero = max(numero, aux);
    }

    cout << "taxis : " << numero << endl;
    
    for (int i = 1; i <= numero; i++)
    {
        q.push(i);
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        if (arre[i].sum == -1)
        {
            q.push(taxis[arre[i].persona]);
        }
        else
        {
            num = q.front();
            taxis[arre[i].persona] = num;
            q.pop();
        }
    }
    cout << numero << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << taxis[i] << " ";
    }
    return 0;
}