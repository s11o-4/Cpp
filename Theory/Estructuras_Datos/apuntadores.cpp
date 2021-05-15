#include <bits/stdc++.h>
using namespace std;

int funcion(int valor)
{
    valor = valor + 10; //Se le suma 10
    return valor;
}
int funcionPunteros(int *valor)
{
    *valor = *valor + 10; //Se le suma 10 a la posición en memoria
    return *valor;
}
int main()
{
    //Explicacion práctica qde como funcionan los punteros
    char *apuntador = NULL; //Declaramos un puntero
    //Es recomendable inicializar un puntero en null, para detectar errores fácilmente

    char letra; //Declaramos una variable primitiva

    apuntador = &letra; //Asignamos al apuntador la dirección de memoria de la variable primitiva

    *apuntador = 'x'; //Modificamos la variable a través del apuntador

    cout << letra << "\n"; //Muestra x por pantalla

    /*
    Para solucionar esto, si queremos que el valor cambie definitivamente, 
    usamos punteros para pasar no el valor del parámetro sino una
    referencia a éste (paso por referencia). Veamos:
    */
    int numero = 10;

    cout << "Antes de funcion " << numero << "\n"; //10

    funcion(numero); //Se pasa por valor

    cout << "Despues de funcion " << numero << "\n"; //10

    cout << "Antes de funcionPunteros " << numero << "\n"; //10

    funcionPunteros(&numero); //Se envía la dirección de memoria y la función resuelve la referencia

    cout << "Despues de funcionPunteros " << numero << "\n"; //20 (10+10)

    system("pause");

}