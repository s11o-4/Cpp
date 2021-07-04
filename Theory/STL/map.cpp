#include <map>
#include <iostream>
using namespace std;
map<int, int> m;
pair<string, int> par("Hola", 5);
map<string, int> ms;

int main()
{
    //cout << par.first << " " << par.second;
    m[3] = 5;
    m[-3] = 1;
    cout << m[-3] << endl;
    cout << m[2] << endl;
    // creaste un tipo de dato pair para recorrer tu map
    for (pair<int, int> p : m) // for each 
    {
        cout << p.first << " "; // word 
        cout << p.second << endl; // definition
    }
    ms["Hola"] = -2;
    string s = "Hola";
    cout << ms[s] << endl;

    cout << "indice 10: " << m[10] << "\n"; // - acabo de crear un indice 10
    if (m.find(3) != m.end())
    {
        cout << "Existe\n";
    }
    else
    {
        cout << "No existe\n";
    }
    m.erase(3);
    if (m.find(3) != m.end())
    {
        cout << "Existe\n";
    }
    else
    {
        cout << "No existe\n";
    }
    return 0;
}
