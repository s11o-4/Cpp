#include <bits/stdc++.h>
#include<stdlib.h> // Funciona new y delete
using namespace std;
/*
Asignacion dinamica de arreglos 
new: reserva el numero  de bytes solicitados por la delcaracion 
delete: libera un bloque de bytes reservado con anterioridad  
*/

//Prototipo de funcion
void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
    pedirNotas();
    mostrarNotas();
    delete[] calif; // Liberando el espacio en bytes de calif
    return 0;
}

void pedirNotas(){
    cout<<"Digite el numero de calificaciones: ";
    cin>>numCalif;

    calif = new int[numCalif]; // Crear el arreglo de tipo dinámico
    
    for(int i = 0; i < numCalif; i++){
        cout<<"ingresa una nota";
        cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\n\nMostrando notas del Usuario: \n";
    for(int i = 0; i < numCalif; i++){
        cout<<calif[i]<<endl;
    }
}