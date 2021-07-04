#include <iostream>
#include <stdio.h>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

//Datos y id's
priority_queue<pair<int, string>> p2;
// si quieres usar algun objeto del tipó struct tendrás que sobrecargar
// el operator (si es pair). porque recuerda que siempre los ordena
// priority_queue<pair<string, int>> p2; - esto lo ordenaria TamAño de string
// reto - crea un priority queue con un struct
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string op = "";
        cin >> op;
        if (op == "PUSH")
        {
            int v;
            cin >> v;
            string s;
            cin >> s;
            // p2.push(make_pair(v, s)); // -> 2da forma de crear un pair
            p2.push(pair<int, string>(v, s));
        }
        else
        {
            pair<int, string> resultado = p2.top();
            cout << resultado.first << " " << resultado.second << endl;
            p2.pop();
        }
    }

    /*
    7
    PUSH 1 Hola
    PUSH 2 Galaga
    PUSH 3 Galaxy 
    PUSH 4 CompetitivePrograming
    PUSH 3 Galaga 
    POP
    POP
    */
}