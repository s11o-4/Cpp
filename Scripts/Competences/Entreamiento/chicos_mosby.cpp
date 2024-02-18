#include <bits/stdc++.h>
using namespace std;

long long N;
long long M;
long long times;
int main()
{
    cin >> N >> M;
    times = N * M;

    long long result = 0;
    unsigned long long limit = N * M;
    while (limit > 0)
    {
        long long cuadrado_min = min(N, M);
        long long cuadrado_max = max(N, M);
        long long tmp = cuadrado_min * cuadrado_min;
        long long aux = limit / tmp;
        result += aux;
        tmp = tmp * aux;
        limit = limit - tmp;

        long long aux2 = cuadrado_min * aux;

        N = cuadrado_min;
        M = cuadrado_max - aux2;
    }
    cout << result << endl;
}