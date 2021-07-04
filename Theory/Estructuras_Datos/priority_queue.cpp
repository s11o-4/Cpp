#include <stdio.h>
#include <iostream>
#include <queue>
#include <stack>

//resulta que existen funciones...
//problema - https://omegaup.com/arena/problem/Pilas-y-colas/
using namespace std;

stack<int> pila;
queue<int> cola;
priority_queue<int> prioridad;
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
    else if (c == 'C')
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
                prioridad.push(v);
            }
            else
            {
                int resultado = prioridad.top();
                cout << resultado << "\n";
                prioridad.pop();
            }
        }
        /*
        casos de prueba para priority queue
        6 D
        PUSH 1 
        PUSH 5
        PUSH 3
        POP
        PUSH 7
        POP

        6 L 
        PUSH 10
        PUSH 15
        PUSH 12
        PUSH 1
        POP
        10
        PUSH 13
        
        */
    }
}
