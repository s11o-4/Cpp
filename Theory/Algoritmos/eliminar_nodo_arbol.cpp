#include <bits/stdc++.h>
using namespace std;
/*
    Eliminar nodos 
    Necesitas saber cual es el padre de tu nodo.
*/

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};

Nodo *crearNodo(int n, Nodo *padre)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;
    return nuevo_nodo;
}

//insertar
void insertar_Nodo(Nodo *&arbol, int n, Nodo *padre)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo; // ojo. En la segunda ejecucion. tu modificas
        //el valor de tu arbol izquierdo || derecho. NO el de tu arbol main
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz)
        {
            insertar_Nodo(arbol->izq, n, arbol); // arbol siempre valdra el nodo anterior
            //si es la primera ejecucion, valdrá el padre principal
        }
        else
        {
            insertar_Nodo(arbol->der, n, arbol);
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

// post-order -> izquierdo, derecho y al final la raiz
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
    else
    {
        if (n == arbol->dato)
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
}

/*
    tres tipos de situaciones:
        1. Cuando es un nodo unico (esta solo)
        2. Cuando es un nodo con un hijo 
        3. cuando es un nodo con dos hijos  
*/

//funcion para determinar el nodo mas izquierdo posible
Nodo *minimo(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return NULL;
    }
    else
    {
        if (arbol->izq != NULL)
        {
            return minimo(arbol->izq);
        }
        else
        {
            return arbol;
        }
    }
}

void reemplazar(Nodo *arbol, Nodo *nuevo_nodo)
{
    if (arbol->padre)
    {
        if (arbol->dato == arbol->padre->izq->dato)
        //si el nodo es izquierdo.
        {
            arbol->padre->izq = nuevo_nodo;
        }
        else if (arbol->dato == arbol->padre->der->dato)
        //si el nodo es derecho.
        {
            arbol->padre->der = nuevo_nodo;
        }
    }
    if (nuevo_nodo) // estas lineas sirven para cuando eliminas
    //un nodo individual. para que así el nodo individual no tenga padre
    {
        nuevo_nodo->padre = arbol->padre;
    }
}

void destruir_nodo(Nodo *nodo)
{
    nodo->izq = NULL;
    nodo->der = NULL;
    delete nodo;
}

void eliminar_nodo2(Nodo *nodo_eliminar)
{
    //si tiene dos hijos
    if (nodo_eliminar->izq && nodo_eliminar->der)
    {
        //despues de saber que tiene lado derecha e izquierda, implemento
        //una funcion para conocer el nodo mas izquierdo posible
        Nodo *menor = minimo(nodo_eliminar->der);
        nodo_eliminar->dato = menor->dato;
        eliminar_nodo2(menor);
    }

    //eliminar un nodo, si tiene un hijo izquierdo o un solo hijo derecho
    else if (nodo_eliminar->izq)
    {
        reemplazar(nodo_eliminar, nodo_eliminar->izq);
        destruir_nodo(nodo_eliminar);
    }
    else if (nodo_eliminar->der)
    {
        reemplazar(nodo_eliminar, nodo_eliminar->der);
        destruir_nodo(nodo_eliminar);
    }

    //eliminar un nodo solito (una hoja)
    else
    {
        reemplazar(nodo_eliminar, NULL);
        destruir_nodo(nodo_eliminar);
    }
}

//identifico donde esta el nodo que quiero eliminar
void eliminar_nodo(Nodo *nodo, int n)
{
    if (nodo == NULL)
    {
        return;
    }
    else if (n < nodo->dato)
    {
        eliminar_nodo(nodo->izq, n);
    }
    else if (n > nodo->dato)
    {
        eliminar_nodo(nodo->der, n);
    }
    else
    {
        eliminar_nodo2(nodo);
    }
}

int main()
{
    Nodo *arbol = NULL;
    insertar_Nodo(arbol, 10, NULL);
    insertar_Nodo(arbol, 5, NULL);
    insertar_Nodo(arbol, 3, NULL);
    insertar_Nodo(arbol, 8, NULL);
    insertar_Nodo(arbol, 7, NULL);
    insertar_Nodo(arbol, 6, NULL);
    insertar_Nodo(arbol, 15, NULL);
    insertar_Nodo(arbol, 18, NULL);
    mostrar_nodos(arbol);
    eliminar_nodo(arbol, 18);
    cout << "\n";
    mostrar_nodos(arbol);
}