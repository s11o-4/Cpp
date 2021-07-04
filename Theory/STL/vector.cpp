#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v1;
vector<int> v2(5, 5);
int main()
{
    // // Part1. descomentar y comentar parte 2
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v1.push_back(x); // final del vector. tu creas la posicion 0, en el momento
    //     // en el que ingresas un valor a tu vector 1
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
    // sort(v1.begin(), v1.end());
    // // .end() -> apunta al lugar de memoria despues del ultimo elemento
    // // del vector

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
    // v1.pop_back();

    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << "\n";
    // for (int x : v1)
    // {
    //     cout << x << " ";
    // }
    // cout << "\n";

    // PART 2
    cout << v2.front();
    cout << "\n";
    cout << v2.back();
    cout << endl;

    v2.resize(10, 0);
    for (int y : v2)
    {
        cout << y << " ";
    }
    cout << endl;

    v2.clear();
    cout << v2.empty();

    cout << endl;
    v2.push_back(0);
    fill(v2.begin(), v2.end(), 10);
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        v2.push_back(i);
    }
    cout << endl;

    sort(v2.begin(), v2.end());
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
    reverse(v2.begin(), v2.end());
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    sort(v2.begin(), v2.end());
    cout << binary_search(v2.begin(), v2.end(), 5);

    cout << endl
         << endl;

    int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
    vector<int> v(myints, myints + 8);
    sort(v.begin(), v.end()); // 10 10 10 20 20 20 30 30

    vector<int>::iterator low, up;
    low = lower_bound(v.begin(), v.end(), 20);
    up = upper_bound(v.begin(), v.end(), 20);
    cout << "lower_bound at position " << (low - v.begin()) << '\n';
    cout << "upper_bound at position " << (up - v.begin()) << '\n';

    //erase
    vector<int> k;
    int n = 4;
    k.push_back(n);
    cout << k[0] << "\n";
    // k.erase(k.begin() + 1); 
    // cout << k[0] << "\n"; // error porque ya no existe
    k[5] = 10;
    k[3] = 20;
    cout << k[5] << "\n";
    return 0;
}