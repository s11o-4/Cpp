#include <bits/stdc++.h>
using namespace std;

struct Unique_range
{
    int fila = 0;
    int a_d = 0;

    const bool operator<(const Unique_range &other_range)
    {
        return other_range.fila < fila;
    }
};

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    struct Unique_range local_range[5001];
    int limit = K * 2;
    for (int i = 0; i < limit; i += 2)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        y2++;
        local_range[y1].fila = x1;
        local_range[y1].a_d += 1;
        local_range[y2].fila = x2;
        local_range[y2].a_d -= 1;
    }
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "[" << local_range[i].a_d << "]";
    }
    cout << endl;
    sort(local_range, local_range + 5001);
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "[" << local_range[i].a_d << "]";
    }
    cout << endl;
}
