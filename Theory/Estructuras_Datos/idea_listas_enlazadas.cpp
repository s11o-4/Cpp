#include <bits/stdc++.h>
using namespace std;

/*
    Insertar elementos en una lista 
    1. Crear un nuevo nodo 
    2. Asignar a nuevo_nodo->dato el elemento que queremos incluir en la lista 
    3. Crear dos nodos auxiliares y asignar lista al primero de ellos
    4. Insertar el elemento a la lista
*/

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while (aux1 != NULL && aux1->dato < n)
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1) //Lista (el puntero), no se va a cambiar
    //hasta que que tu tengas un valor menor a tu tope de la lista
    //Todo esto es un algoritmo (de extraccion), de tipo "el mas pequeño
    //es el primero en salir"
    {
        lista = nuevo_nodo;
        cout << "me ejecuto cuando el nuevo dato es menor, igual, o es la priemera ejecucion\n ";
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
    cout << "Elemento " << n << " insertado a lista correctamente\n";
}

int main()
{
    Nodo *lista = NULL;

    int dato;
    cout << "Digite un numero: ";
    cin >> dato;
    insertarLista(lista, dato);
    cout << "Digite un numero: ";
    cin >> dato;
    insertarLista(lista, dato);
    cout << "Digite un numero: ";
    cin >> dato;
    insertarLista(lista, dato);

    return 0;
}
