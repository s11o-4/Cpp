#include <bits/stdc++.h>
using namespace std;

//lifo

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertar_nodo(Nodo *&pila, int num)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = num;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void mostrar_nodos(Nodo *&pila){
    Nodo *aux = pila;
    while(aux != NULL){
        cout<<aux->dato<<"\n";
        aux = aux->siguiente;
    }
}

int main()
{
    Nodo *pila = NULL;
    insertar_nodo(pila, 10);
    insertar_nodo(pila, 43);
    insertar_nodo(pila, 43);
    insertar_nodo(pila, 1123);
    mostrar_nodos(pila);
}