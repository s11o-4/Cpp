#include <bits/stdc++.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
};

Nodo *crear_nodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;
}

void insertar_nodo(Nodo *&arbol, int dato)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crear_nodo(dato);
        arbol = nuevo_nodo;
    }
    else
    {
        int valor_raiz = arbol->dato;
        if (valor_raiz < dato)
        {
            insertar_nodo(arbol->der, dato);
        }
        if (valor_raiz > dato)
        {
            insertar_nodo(arbol->izq, dato);
        }
    }
}

int main()
{
    Nodo *arbol = NULL;
    insertar_nodo(arbol, 10);
}