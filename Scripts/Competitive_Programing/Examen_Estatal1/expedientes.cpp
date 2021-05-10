#include<bits/stdc++.h>
using namespace std;

int main(){
  int number = 0;
  cin>>number;
  long cadena1[number] = {};
  long cadena2[number] = {};

  for(long i = 0; i < number; i++){
    long temporal = 0;
    cin>>temporal;
    cadena1[i] = temporal;
  }
  for(long i = 0; i < number; i++){
    long temporal = 0;
    cin>>temporal;
    cadena2[i] = temporal;
  }

  bool bandera = false;
  long final_movimientos = 0;
  while(bandera == false){
    for(long i = 0; i < number; i++){

      if(cadena1[i] == cadena2[i]){
	continue;
      }else{
	final_movimientos++;
	for(int j = 0; j < number; j++){
	  if(cadena2[j] == cadena1[i]){
	    long guardar = cadena2[i];
	    cadena2[i] = cadena2[j];
	    cadena2[j] = guardar;
	  }
	}
      }

    }
    bandera = true;
  }
  cout<<final_movimientos;
}
