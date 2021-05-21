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

/*

Reto (eliminar, vaciar y eliminar uno en especifico)

#include <bits/stdc++.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertar_nodo(Nodo *&pila_datos, int num)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = num;

    Nodo *aux1 = pila_datos;
    Nodo *aux2;

    while (aux1 != NULL && aux1->dato < num)
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (aux1 == pila_datos)
    {
        pila_datos = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
}

void mostrar_nodos(Nodo *&pila_datos)
{
    Nodo *aux = pila_datos;
    cout << "El contenido de tu lista enlazada ascendente es: \n";
    while (aux != NULL)
    {
        cout << aux->dato << "\n";
        aux = aux->siguiente;
    }
}

void vaciar_pila(Nodo *&pila_datos)
{
    while (pila_datos != NULL)
    {
        pila_datos = pila_datos->siguiente;
    }
    cout << "Se eliminaron todos los datos correctamente \n";
}

//Reto - borrar un nodo en especifio
Nodo *inicio_acumuladora;
Nodo *final_acumuladora;

void acumuladora(int num)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = num;
    nuevo_nodo->siguiente = NULL; // por defecto ya es NULL, pero por 
    //elegancia, yo lo escribo
    if (inicio_acumuladora == NULL)
    {
        inicio_acumuladora = nuevo_nodo;
    }
    else
    {
        final_acumuladora->siguiente = nuevo_nodo;
    }
    final_acumuladora = nuevo_nodo;
}

void eliminar_nodo_especifico(Nodo *&pila_datos, int dato_eliminar)
{
    Nodo *auxiliar = pila_datos;
    while (auxiliar != NULL)
    {
        if (auxiliar->dato != dato_eliminar)
        {
            acumuladora(auxiliar->dato);
        }
        auxiliar = auxiliar->siguiente;
    }

    //Reemplazo la anterior pila, por la buena (la que ya no tiene 
    //el elemento)
    pila_datos = inicio_acumuladora;
}

int main()
{
    Nodo *pila_datos = NULL;
    insertar_nodo(pila_datos, 121);
    insertar_nodo(pila_datos, 367);
    insertar_nodo(pila_datos, 324);
    insertar_nodo(pila_datos, 11);
    mostrar_nodos(pila_datos);
    //vaciar_pila(pila_datos);
    mostrar_nodos(pila_datos);
    eliminar_nodo_especifico(pila_datos, 367);
    mostrar_nodos(pila_datos);
}
*/