#include <bits/stdc++.h>
using namespace std;
/*
Crear una pila: 
1. Crear el espacio en memoria para almacenar un nodo
2. Cargar el valor dentro del nodo (dato)
3. Cargar el puntero pila dentro del nodo (*siguiente)
4. Asignar nuevo elemento a la pila
*/

struct Nodo
{
    int dato;
    Nodo *siguiente; // Puntero, para poder acceder a la posicion en
    //memoria de mis siguientes datos, el cual cada nodo, tendra dos datos
};

void agregarPila(Nodo *&pila, int n) //Quiero que el espacio en memoria de pila,
//sea de main, pero que obtenga tambien, el dato de eso que me esten pasando
//para yo poder usarlo
{
    Nodo *nuevo_nodo = new Nodo(); // Si tu tamaño no es variable.
    // si no tiene el new..., ocurrira un desbordamiento de memoria
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila; //uso el dato de pila aquí (*)
    pila = nuevo_nodo;            //modifico su valor aqui (&)
    //pila siempre apuntara al actual
}

void sacarPila(Nodo *&pila, int &n)
{
    Nodo *aux = pila;
    n = aux->dato;         // Solo asigno a n, mas no uso n
    pila = aux->siguiente; // aqui borro
    delete aux;            // borro la copia
}

void mostrarPIla(Nodo *pila)
{
    while (pila != NULL)
    {
        int valor = pila->dato;
        cout << valor << "\n";
        pila = pila->siguiente;
    }
}

//elimina un nodo concreto de tu pila
bool elimina(Nodo *&pila, int n)
{
    if (pila != NULL)
    {
        if (pila->siguiente->dato == n)
        {
            pila->siguiente = pila->siguiente->siguiente;
            return true;
        }
        else if (pila->dato == n)
        {
            pila = pila->siguiente;
            return true;
        }
        else
        {
            elimina(pila->siguiente, n);
        }
    }
    else
    {
        return false;
    }
    return true;
}

int main()
{
    Nodo *pila = NULL;
    int n1;
    cout << "Digite un numero \n";
    cin >> n1;
    agregarPila(pila, n1);
    cout << "Digite otro numero \n";
    cin >> n1;
    agregarPila(pila, n1);

    cout << "\n Mostrando elementos de la piña \n";
    mostrarPIla(pila);

    cout << "\n Eliminando elementos de la pila \n";
    while (pila != NULL)
    {
        sacarPila(pila, n1);

        if (pila != NULL)
        {
            cout << n1 << ", ";
        }
        else
        {
            cout << n1 << ". ";
        }
    }
    cout << "\n";
    return 0;
}
