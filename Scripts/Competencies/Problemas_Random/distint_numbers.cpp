#include <iostream>
#include <map>
using namespace std;
map<int, int> bucket;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bucket[x] = 1;
    }
    cout << bucket.size() << endl;
    return 0;
}