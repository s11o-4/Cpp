#include <stdio.h>
#include <iostream>
#include <queue>
#include <stack>

//resulta que existen funciones...
//problema - https://omegaup.com/arena/problem/Pilas-y-colas/
using namespace std;

stack<int> pila;
queue<int> cola;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    if (c == 'P')
    {
        for (int i = 0; i < n; i++)
        {
            string op = "";
            cin >> op;
            if (op == "PUSH")
            {
                int v;
                cin >> v;
                pila.push(v);
            }
            else
            {
                // top retorna un entero
                cout << pila.top() << "\n";
                pila.pop();
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            string op = "";
            cin >> op;
            if (op == "PUSH")
            {
                int v;
                cin >> v;
                cola.push(v);
            }
            else
            {
                //sinónimo de top, en colas
                int resultado = cola.front();
                cout << resultado << "\n";
                cola.pop();
            }
        }
    }
}
