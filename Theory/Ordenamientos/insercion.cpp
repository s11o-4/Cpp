//Ordenamiento por Insercion
#include<bits/stdc++.h>
using namespace std;

//Vas recorriendo tu array hasta que encuentres 
//que se cumpla la condicion que el numero de la izquierda
//sea menor del que estas actualmente

int main()
{
    int numeros[] = {5, 4, 3, 2, 1};

    //Algoritmo del Ordemnamiento por Insercion
    for (int i = 0; i < 5; i++)
    {
        int pos = i;
        int aux = numeros[i]; // Numero que arrastro
        while (pos > 0 && numeros[pos - 1] > aux)
        {
            numeros[pos] = numeros[pos - 1]; //Numero que switcheo hacia la derehca, o presente
            pos--; // Recorrido hacia la izquierda
        }
        numeros[pos] = aux; //Fijo a mi numero
    }

    cout << "\nOrden Ascendente: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }

    cout << "\nOrden Descente: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << numeros[i] << " ";
    }
    cout << "\n";

    return 0;
}


/*
//Segunda forma de hacerla:
//Me la invente. Es una combinacion entre metodo burbuja y metodo por insercion
#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[] = {5,4,3,2,1};
    int longitud = sizeof(array) / sizeof(array[0]);
    cout<<"Longitud: "<<longitud<<"\n";
    for(int i = 0; i < longitud; i++){
        int pos_actual = i;
        int mov_var = array[i];
        while(pos_actual > 0 && array[pos_actual - 1] > array[pos_actual]){
            array[pos_actual] = array[pos_actual - 1];
            array[pos_actual - 1] = mov_var;
            pos_actual--;
        }
        array[pos_actual] = mov_var;
    }   
    for(int i = 0; i < longitud; i++){
        cout<<"["<<array[i]<<"]";
    }
    cout<<"\n";
*/