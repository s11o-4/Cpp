#include <bits/stdc++.h>
using namespace std;
/*
Los punteros (o apuntadores) 
son variables que se utilizan para almacenar direcciones de memoria

Cada espacio en memoria tiene su propia dirección para poder 
ser referenciado.
el operador &  obtiene la dirección de la variable y se le asigna
al puntero mediante el operador de asignación =

Se usan punteros porque es la forma mas ágil de acceder 
a un elemento, que es obteniendo su posición en memoria.

*/

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

//Segunda forma de cambiar datos
void potencia2(int &number1, int number2) //Recibo el numero
//pero yo indico que quiero que me pase
//su direccion de memoria de la funcion main, para poder modificar su valor original
//y evitar que me genere una direccion alterna a la que yo quiero.
{
    cout << "direccion en memoria de number1 es : " << &number1 << "\n";
    number1 = 10;

    cout << "la direccion en moemoria de mi number2 es: " << &number2 << "\n";
    number2 = 20;
}

int main()
{

    float var = 33.66;     //Una variable cualquiera
    float *ptr_var = &var; //Apuntando un puntero a la variable var

    cout << "Valor de la variable var: " << var << endl;
    cout << "Direccion de la variable var: " << &var << endl;
    cout << "Valor de lo que hay almacenado en la direccion de memoria " << ptr_var << " : " << *ptr_var << endl;

    // Modificando el valor a través del puntero:
    // Tienes que vovler a colocar el "*", para hacer referencia a que 
    // quieres acceder nuevamente al valor de esa direccion en memoria
    *ptr_var = 100.25;
    cout << "Valor de la variable var: " << var << endl;

    cout << "\n";
    //Explicacion práctica qde como funcionan los punteros
    char *apuntador = NULL; //Declaramos un puntero
    //Es recomendable inicializar un puntero en null, para detectar errores fácilmente

    char letra; //Declaramos una variable primitiva

    apuntador = &letra; //Asignamos al apuntador la dirección de memoria de la variable primitiva

    *apuntador = 'x'; //Modificamos la variable a través del apuntador

    cout << letra << "\n"; //Muestra x por pantalla

    /*
    En funciones muchas veces queremos que se modifique el valor que te pasan como argumento
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

    cout << "\n\n";

    int num2 = 5;
    int num3 = 10;
    potencia2(num2, num3);
    cout << num2 << "\n";
    cout << num3 << "\n";
}