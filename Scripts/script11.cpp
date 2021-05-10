#include<bits/stdc++.h>
using namespace std;

/*
//problema de conjuros
//necesito ver cual fue el conjuro que no le llego al chavo porque 
//tiene muy mala suerte
//
//problemas que tuve: no sabia como me iban a mandar los datos y no me habia
//dado cuenta que cada espacio representa un enter...:(
//y otros mas tecnicos...
int main(){
  int potencia_recibida = 0;
  int conjuros_enviados = 0;

  cin>>potencia_recibida>>conjuros_enviados;

  int potencias_conjuros[conjuros_enviados] = {};

  for(int i = 0; i < conjuros_enviados; i++){
    int variable_cambiante = 0;
    cin>>variable_cambiante;
    potencias_conjuros[i] = variable_cambiante;
  }

  bool bandera = false;
  
  int acumulador = 0;
  int final_result = 0; 
  while(bandera == false){
    for(int j = 0; j < conjuros_enviados; j++){
      acumulador = 0;
      for(int a = 0; a < conjuros_enviados; a++){
        acumulador += potencias_conjuros[a];
      }
      acumulador = acumulador - potencias_conjuros[j];
      if(acumulador == potencia_recibida){
	bandera = true;
	final_result = potencias_conjuros[j];
	break;
      }
    }
  }
  cout<<final_result;
}

*/


//problema del niño de las canicas 
//necesito saber a partir de que niño logro obtener las canicas que queria
int main(){
  int want_obtain = 0, friends = 0;
  cin>>want_obtain>>friends;

  int marbles[friends] = {};
  for(int i = 0; i < friends; i++){
    int var_unst = 0;
    cin>>var_unst;
    marbles[i] = var_unst;
  }

  int acumulator = 0;
  int key_friend_number = 0;
  for(int j = 0; j < friends; j++){
    acumulator += marbles[j];
    if(acumulator >= want_obtain){
      key_friend_number = j + 1;
      break;
    }
  }
  cout<<key_friend_number;

}






