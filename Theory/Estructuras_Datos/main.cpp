#include <bits/stdc++.h>
using namespace std;

//fifo

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertar_nodo(Nodo *&pila, int num){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = num;
    Nodo *aux1 = pila;
    Nodo *aux2;
    while(aux1 != NULL && aux1->dato < num){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if(aux1 == pila){
        pila = nuevo_nodo;
    }else{
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
}

void mostrar_nodos(Nodo *&pila){
    Nodo *temp_nodo = pila;
    while(temp_nodo != NULL){
        cout<<temp_nodo->dato<<"\n";
        temp_nodo = temp_nodo->siguiente;
    }
}

int main()
{
    Nodo *pila = NULL;
    insertar_nodo(pila, 1534);
    insertar_nodo(pila, 5466);
    insertar_nodo(pila, 133);
    insertar_nodo(pila, 7786);
    insertar_nodo(pila, 154);
    insertar_nodo(pila, 543);
    insertar_nodo(pila, 5);
    insertar_nodo(pila, 4);
    insertar_nodo(pila, 2);
    insertar_nodo(pila, 1);
    insertar_nodo(pila, 3);
    mostrar_nodos(pila);
}