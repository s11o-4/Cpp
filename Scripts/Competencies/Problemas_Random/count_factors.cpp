#include <iostream>

using namespace std;

int criba[1000002];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 1000002;
    int limite = n / 2;
    for (int i = 2; i <= limite; i++)
    {
        if (!criba[i])
        {
            for (int l = i; l <= n; l += i)
            {
                criba[l] += 1;
            }
        }
    }

    while (cin >> n)
    {
        if (n != 0)
        {
            cout << n << " : " << max(criba[n], 1) << endl;
        }
        else
        {
            break;
        }
    }
}
