#include <set>
#include <iostream>

using namespace std;
set<int> numbers;
int main()
{
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        numbers.insert(x); // no los repite. solo aparecerán 1 vez
    }
    for(int x : numbers)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << numbers.size();
    return 0;
}