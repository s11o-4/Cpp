#include <bits/stdc++.h>

using namespace std;

// ifstream fin("notlast.in");
// ofstream fout("notlast.out");

map<string, int> bucket;
map<int, string> names;
map<int, int> cnt;
int main()
{
    bucket["Bessie"] = 0;
    bucket["Elsie"] = 0;
    bucket["Daisy"] = 0;
    bucket["Gertie"] = 0;
    bucket["Annabelle"] = 0;
    bucket["Maggie"] = 0;
    bucket["Henrietta"] = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int cant;
        cin >> s >> cant;
        bucket[s] += cant;
    }
    int i = 0;
    int last = 0;
    string name = "";

    cout << "\ncubeta: \n";
    for (pair<string, int> x : bucket)
    {
        cout << x.first << " " << x.second << "\n";
    }
    cout << endl;

    for (pair<string, int> p : bucket)
    {
        names[p.second] = p.first;
        cnt[p.second]++;
    }
    cout << endl;
    cout << "contador: \n";
    for (pair<int, int> p : cnt)
    {
        cout << "counter first: " << p.first << " counter second: " << p.second << "\n";
    }

    cout << endl;
    cout << "Names: \n";
    for (pair<int, string> x : names)
    {
        cout << "number: " << x.first << " string: " << x.second << "\n";
    }
    cout << endl;

    if (names.size() == 1)
    {
        cout << "Tie\n";
        return 0;
    }
    int c = 0;
    for (pair<int, string> p : names) // un iterador pair, ordena
    //en este caso ordenara respecto a su numero. Y cada vez que iteres 
    //igual lo ordenara
    {
        if (i > 0)
        {
            if (last != p.first)
            {
                c = cnt[p.first];
                name = p.second;
                //en el momento en el que cambia, pasando 
                //el primero, sabras que estas en el segundo de 
                //menor a mayor
                break;
            }
        }
        last = p.first;
        i++;
    }
    if (c > 1) // no puede haber mas de una vaca con la misma 
    // produccion. Por ejemplo la vacas con produccion 7, no podrán
    // ser las segundas, porque existen tres vacas que lograron esa misma produccion
    {
        cout << "Tie\n";
    }
    else
    {
        cout << name << endl;
    }
    return 0;

    /*
Input:
10
Bessie 1
Maggie 13
Elsie 3
Elsie 4
Henrietta 4
Gertie 12
Daisy 7
Annabelle 10
Bessie 6
Henrietta 5
    */
}
