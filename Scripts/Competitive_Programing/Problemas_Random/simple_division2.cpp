#include <iostream>
using namespace std;
int modulo, n, i, a, k, actual, anterior;
int mcd(int uno, int dos)
{
    if (dos == 0)
        return uno;
    return mcd(dos, uno % dos);
}
int main()
{
    do
    {
        cin >> anterior;
        if(anterior == 0)return 0;
        cin >> actual;
        modulo = abs(actual - anterior);
    } while (actual == 0);

    return 0;
}