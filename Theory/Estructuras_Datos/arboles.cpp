#include <bits/stdc++.h>
using namespace std;
/*
    Arboles 
    Longitud de camino = ramas || cantidad de nodos - 1
    Altura de un nodo = desde abajo, hacia arriba
    Profundidad = Obtienes el nivel en el que se encuentre 
    nodos hermanos - mismo nivel y mismo padre
    Orden - cantidad de hijos que puede tener un padre (2 - 0,1,2)
    arboles 2 -> arboles binarios

    Arbol binario de búsqueda 
    Es aquel en el que dado un nodo, todos sus datos del subarbol 
    izquierdo, son menores, mientras que los del lado derecho son mayores 

*/

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
};

Nodo *crearNodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

//insertar
void insertar_Nodo(Nodo *&arbol, int n)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo; // ojo. En la segunda ejecucion. tu modificas
        //el valor de tu arbol izquierdo || derecho. NO el de tu arbol main
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz)
        {
            insertar_Nodo(arbol->izq, n);
        }
        else
        {
            insertar_Nodo(arbol->der, n);
        }
    }
}

//mostrar
void mostrar_nodos(Nodo *cpy_arbol)
{
    if (cpy_arbol == NULL)
    {
        return;
    }
    else
    {
        mostrar_nodos(cpy_arbol->der);
        cout << cpy_arbol->dato << "\n";
        mostrar_nodos(cpy_arbol->izq);
    }
}

//mostrar en pre-orden - primero raiz, luego izquerda, y luego parte derecha
void PreOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        cout << arbol->dato << " - ";
        PreOrden(arbol->izq);
        PreOrden(arbol->der);
    }
}
//in-orden - izquierda, raiz, derecho
void InOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        InOrden(arbol->izq);
        cout << arbol->dato << " - ";
        InOrden(arbol->der);
    }
}

// PostOrden -> izquierdo, derecho y al final la raiz
void PostOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        PostOrden(arbol->izq);
        PostOrden(arbol->der);
        cout << arbol->dato << " - ";
    }
}


//busqueda
bool busqueda(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return false;
    }
    else if (n == arbol->dato)
    {
        return true;
    }
    else if (n < arbol->dato)
    {
        busqueda(arbol->izq, n);
    }
    else
    {
        busqueda(arbol->der, n);
    }
}

int main()
{
    Nodo *arbol = NULL;
    insertar_Nodo(arbol, 10);
}