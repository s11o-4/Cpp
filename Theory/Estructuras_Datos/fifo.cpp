#include <bits/stdc++.h>
using namespace std;

/*
    Insertar elementos en una cola
    1. Crear el espacio en memoria para almacenar un nodo.
    2. Asignar ese nuevo nodo al dato que queremos insertar.
    3. Asignar los punteros frente y fin hacia el nuevo nodo.
*/

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

bool cola_vacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo; // Despues de la priemra ejecucion
        //frente y fin, son el mismo nodo. Por lo que su siguiente será el
        //mismo.
    }

    fin = nuevo_nodo;
    cout << "Elemento: " << n << " insertado a cola correctamente\n";
}

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n)
{
    n = frente->dato;
    Nodo *aux = frente;

    if (frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
    {
        frente = frente->siguiente; // Aqui es cuando en verdad elimino
    }

    delete aux; // Aqui elimino la copia
}

// Reto - elimianr un nodo en especifico. Recrea este script..., porque es
// un asco..., lo mismo para lifo
// void eliminar_nodo(Nodo *&frente, int n)
// {
//     Nodo *cpy_frente = frente;
//     Nodo *cpy_cola = NULL;
//     while (cpy_frente != NULL)
//     {
//         if (cpy_frente->siguiente->dato == n)
//         {
//             cpy_frente = cpy_frente->siguiente->siguiente;
//             frente = cpy_frente;
//         }
//         else if (cpy_frente->dato == n)
//         {
//             cpy_frente = cpy_frente->siguiente;
//             frente = cpy_frente;
//         }
//         else
//         {
//             cpy_frente = cpy_frente->siguiente;
//         }
//     }
// }

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;

    cout << "Digite un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    cout << "Digite un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    // cout << "\n";
    // cout << "eliminar nodo en especifico";
    // eliminar_nodo(frente, dato);

    cout << "\n";
    cout << "Quitando los elementos de la cola: ";

    while (frente != NULL)
    {
        suprimirCola(frente, fin, dato);

        if (frente != NULL)
        {
            cout << dato << ", ";
        }
        else
        {
            cout << dato << ".\n";
        }
    }
}
