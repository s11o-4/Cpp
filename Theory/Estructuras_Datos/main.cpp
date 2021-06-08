#include <bits/stdc++.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *izq;
    Nodo *der;
    Nodo *padre;
};

Nodo *crear_nodo(int n, Nodo *padre)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;
    return nuevo_nodo;
}

void insertar(Nodo *&arbol, int n, Nodo *&padre)
{
    if (arbol == NULL)
    {
        arbol = crear_nodo(n, padre);
    }
    else
    {
        int dato_raiz = arbol->dato;
        if (dato_raiz > n)
        {
            insertar(arbol->izq, n, arbol);
        }
        else if (dato_raiz < n)
        {
            insertar(arbol->der, n, arbol);
        }
    }
}

void mostrar(Nodo *raiz)
{
    if (raiz != NULL)
    {
        mostrar(raiz->izq);
        cout << raiz->dato << "\n";
        mostrar(raiz->der);
    }
}

Nodo *menor(Nodo *derecha)
{
    if (derecha->izq != NULL)
    {
        menor(derecha->izq);
    }
    else
    {
        return derecha;
    }
    return derecha;
}

void reemplazar(Nodo *eliminar, Nodo *reemplazo)
{
    //todo esto igual se podria hacer con un nodo auxiliar, pero así
    //se ve mas elegante
    if (eliminar->padre)
    {
        if (eliminar->padre->der == eliminar)
        {
            eliminar->padre->der = reemplazo;
        }
        if (eliminar->padre->izq == eliminar)
        {
            eliminar->padre->izq = reemplazo;
        }
        if (reemplazo)
        {
            reemplazo->padre = eliminar->padre;
        }
    }
}

void destruir(Nodo *nodo_ident)
{
    nodo_ident = NULL;
}

void eliminar_nodo2(Nodo *nodo_ident)
{
    if (nodo_ident->der && nodo_ident->izq)
    {
        Nodo *new_nodo_eliminar = menor(nodo_ident->der);
        nodo_ident->dato = new_nodo_eliminar->dato;
        eliminar_nodo2(new_nodo_eliminar);
    }
    else if (nodo_ident->der)
    {
        reemplazar(nodo_ident, nodo_ident->der);
    }
    else if (nodo_ident->izq)
    {
        reemplazar(nodo_ident, nodo_ident->izq);
    }
    else
    {
        reemplazar(nodo_ident, NULL);
        destruir(nodo_ident);
    }
}

//identificar nodo
void eliminar_nodo(Nodo *arbol, int n)
{
    if (arbol != NULL)
    {
        if (arbol->dato == n)
        {
            eliminar_nodo2(arbol);
        }
        else if (arbol->dato > n)
        {
            eliminar_nodo(arbol->izq, n);
        }
        else if (arbol->dato < n)
        {
            eliminar_nodo(arbol->der, n);
        }
        else // este else no es necesario 
        {
            return;
        }
    }
}

int main()
{
    Nodo *arbol = NULL;
    Nodo *padre = NULL;
    insertar(arbol, 10, padre);
    insertar(arbol, 8, padre);
    insertar(arbol, 7, padre);
    insertar(arbol, 9, padre);
    insertar(arbol, 5, padre);
    insertar(arbol, 4, padre);
    insertar(arbol, 6, padre);
    insertar(arbol, 12, padre);
    insertar(arbol, 11, padre);
    insertar(arbol, 13, padre);
    insertar(arbol, 15, padre);
    insertar(arbol, 20, padre);
    insertar(arbol, 14, padre);
    mostrar(arbol);
    cout << "\n";
    eliminar_nodo(arbol, 13);
    eliminar_nodo(arbol, 25);
    mostrar(arbol);
}