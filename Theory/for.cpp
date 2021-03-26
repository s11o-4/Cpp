#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int i = 0; i <= 5; i++){
    cout<<i<<"\n";
  }

  //Bucle en rangos -> me sirve para recorrer cadenas
  string cadena = "AbcdefgjsdjfsdAsaasasaaasA"; 
  int number_a = 0; 
  for(char a : cadena){
    if((a == 'A') or (a == 'a')){
      number_a ++;
    }
  }
  cout<<"Cantidad de a "<<number_a; 
}

// break -> detiene la ejecucion de tu busqueda. No tiene que llevar ; 
// continue -> Te lleva al comienzo de la ejecucion de tu bucle. Volviendo a comenzar y ojo. se salta todo lo que este debajo porque 
// volvio a comenzar
