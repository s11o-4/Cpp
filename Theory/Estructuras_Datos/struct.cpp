#include <bits/stdc++.h>
using namespace std;

struct Estructura1
{
    int numb1;
    string cadena;
    double num2;
};

struct Estructura2
{
    int numero;
    void saludar()
    {
        cout << "Hello"
             << "\n";
    }
};

struct Estructura3{
    int number; 
    string name;
};

struct Estructura4{
    Estructura3 objeto_anidado;  
};

int main()
{
    struct Estructura1 obj1 = {10, "hola", 13.23}; //El uso de struct no es necesario, pero se ve mas elegante
    cout << obj1.cadena << "\n";
    cout << obj1.num2 << "\n";
    cout << obj1.numb1 << "\n";

    struct Estructura2 obj2;
    obj2.saludar();
    obj2.numero = 10101;
    cout << obj2.numero << "\n";

    //Clase interna
    class Clase_Interior
    {
    public:
        string saludo = "Hola desde una clase dentro de una funcion";
    };
    Clase_Interior objeto_clase_interior;
    cout << objeto_clase_interior.saludo<<"\n";

    //Struct interno
    struct Estructura_Interna{
        int numero1;
        string cadena;
    };
    struct Estructura_Interna objeto_struct_interno = {10, "hellou"};
    cout<<objeto_struct_interno.numero1<<"\n";

    //Estructuras anidadas
    Estructura4 obj4;
    obj4.objeto_anidado.name = "Ruben";
    cout<<obj4.objeto_anidado.name<<"\n";

    Estructura3 obj3;
    //No imprimira nada, puesto que ese objeto le pertenece al strcut
    //4, no al 3. Esta anidado. No heredado. Declaras la misma variable 
    //pero en otra estructura, basandote en la anterior
    cout<<"El nombre, desde la estructura 3, es : "<<obj3.name<<"\n";
}


/*
typedef struct ejemplo Ejemplo;
define Ejemplo como un sinónimo de ejemplo.
Una forma alternativa de definir una estrutura
*/