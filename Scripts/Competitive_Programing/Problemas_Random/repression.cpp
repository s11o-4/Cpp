#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int acu[3];
    int i = 0;
    while (i < 3)
    {
        cin >> acu[i];
        i++;
    }

    int longitud = sizeof(acu) / sizeof(acu[0]);
    sort(acu, acu + 3);
    int res = 0;
    for (int i = 2; i >= 1; i--)
    {
        res += acu[i];
    }
    cout << res << "\n";
}