//Busqueda Binaria
#include <iostream>
using namespace std;

/*
< Necesitas siempre tener ordenado a tu array >
    Como funciona:
    1. El primer paso que tu siempre harás, es sacar el punto medio 
    de tus dos rangos de numeros. Los cuales en la priemra ejecucion, siempre 
    seran el mas bajo y el mas alto
    2. Una ves que ya sacaste la mitad de todo tu conjunto de datos.., (si es 
    impar no pasa nada, ya que se redondeara al valor mas bajo por 
    defecto, y el algoritmo funcionara igual). Tendrás tres posbiblidades posibles
    O el numero que buscas esta por arriba, o esta por abajo de la mitad de tu 
    mitad, o ya lo encontraste(lo cual no pasa...). 
    3. Date cuenta que al hacer eso, tu ya redujiste tu array a la mitad. osea 
    x / 2. Lo cual se repetira hasta que lo encuentres. Porque cuando sepas 
    si esta mas arriba o mas abajo, entonces solo tendras que programar los dos 
    tipos de situaciones. 
    4. Si tu numero esta mas abajo que la posicion mitad, entonces tu mayor 
    sera la mitad, y tu menor se mantendra. 
    5. Si tu numero esta mas arriba que la posicion mitad, entonces tu menor 
    sera la mitad y tu mayor se va a mantener

    notas:
    Este patron se repetira hasta que se encuentre el numero. Pero toma en 
    cuenta, que tu siempre irás reduciendo el rango. 2 a la x. tambien 
    toma en cuenta, que no porque una ves vue menor siempre lo sera. 
    Puede que te pases, pero entonces irás delimitando tus rangos.

    En resumen, cuando tu determinas si tu numero es mas grande al que estas 
    ahora, estas ascendiendo el contador. y cuando es mas pequeño, estas 
    reduciendo en uno tu contador.., porque sabes que nunca te dara decimal 
    A no ser que sean flotantes.., ahi se pone mas "dificil"

    Ahora ya sabes porque tiene que estar ordenado.  

    Tu busqueda nunca será mayor que la longitud de tu array o cadena 
    de valores. porque?, -> tu reduces tu cadena cada vez a la mitad, jamas se 
    va a sobrepasar. Aun asi lo colocas para que sea mas expresivo
    Tu te pueds dar cuenta que no encontro el elemento, cuando 
    el numero de ejecuciones, se excede a la cantidad de elementos de 
    tu array

    Tu array ademas de estar ordenado, no se puede saltar numeros.
    Esta directamente relacionados los numeros con los indices
*/
int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int inf, sup, mitad, dato, i;
    char band = 'F';

    dato = 5;
    //Algoritmo de la Busqueda Binaria
    inf = 0;
    sup = 5;
    i = 0;
    
    while ((inf <= sup) && (i < 5)) //Si tu dejas 
    //aquí solamente el primer condicional. tu programa 
    //crasheara si no existe el elemento en el array.
    {
        mitad = (inf + sup) / 2;
        cout<<"Mitad por defecto: "<<mitad<<"\n";
        if (numeros[mitad] == dato)
        {
            band = 'V';
            cout<<"Boom!, se encontro"<<"\n";
            break;
        }
        if (numeros[mitad] > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
            cout<<"Mitad de cuando es mayor: "<<mitad<<"\n";
        }
        if (numeros[mitad] < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
            cout<<"Mitad cuando es menor: "<<mitad<<"\n";
        }
        i++;
    }

    if (band == 'V')
    {
        cout << "El numero se encontro en la pos: " << mitad << endl;
    }
    else
    {
        cout << "El numero NO se encontro";
    }
    return 0;
}
