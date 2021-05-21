//Busqueda Secuencial

//a[5] = {3,4,2,1,5}; dato = 4;

#include <iostream>
using namespace std;

//Recorro cada elemento hasta encontrarlo (poco eficiente)
int main()
{
    int a[] = {3, 4, 2, 1, 5};
    int i, dato;
    bool band = false;

    dato = 4;
    //Busqueda Secuencial
    i = 0;
    while ((band == false) && (i < 5))
    {
        if (a[i] == dato)
        {
            band = true;
        }
        i++; //Siempre le sumara uno extra
    }

    if (band == false)
    {
        cout << "El numero a buscar no existe en el arreglo" << endl;
    }
    else if (band == true)
    {
        cout << "El numero a sido encontrado en la pos: " << i - 1 << endl;
    }

    return 0;
}
