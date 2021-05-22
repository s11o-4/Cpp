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

void mostrar_nodos(Nodo *arbol, int cont)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrar_nodos(arbol->der, cont++);
        bool bandera = false;
        for (int i = 0; i < cont; i++)
        {
            if(bandera == false){
                cout<<"me ejecuto\n";
                cout<<"contador vale: "<<cont<<"\n";
                bandera = true;
            }
            cout << "   ";
            cout<<"estoy imprimiendo los espacios de : "<<arbol->dato<<"\n";
        }   
        cout << arbol->dato << endl;
        mostrar_nodos(arbol->izq, cont++);
    }
}

int main()
{
    Nodo *arbol = NULL;
    insertar_Nodo(arbol, 10);
}