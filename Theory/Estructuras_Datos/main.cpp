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

//solucion de ATS
void eliminarnodo(Nodo *&lista, int n)
{
    if (lista != NULL)
    {
        Nodo *aux_borrar;
        Nodo *anterior = NULL;

        aux_borrar = lista;

        while ((aux_borrar != NULL) && (aux_borrar->dato != n))
        {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }
        if (aux_borrar == NULL)
        {
            cout << "<<Elemento no encontrado>>";
        }
        else if (anterior == NULL)
        {
            lista = lista->siguiente;
            delete aux_borrar;
        }
        else
        {
            // no es lo mismo iterarte a ti mismo como puntero
            // que otro puntero toma tu valor y acceda a tí.
            // en el momento en el que anterior se vuelve igual a aux_borrar
            // igualmente se volvera igual a lista. El valor de lista
            // no cambio cuando lo recorriste..., porque no estabas como tal
            // recorriendo lista..., tu estabas recorriendo a aux_borrar, pero
            // ambos llegan al mismo punto. digamos que uno sufre para que 
            // no le pase nada al otro
            anterior->siguiente = aux_borrar->siguiente; // borras ese nodo intermedio 
            delete aux_borrar;
        }
    }
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
    cout << endl;
    cout << "test de solucion ats\n";
    eliminarnodo(pila_datos, 11);
    mostrar_nodos(pila_datos);
    cout << endl;
}