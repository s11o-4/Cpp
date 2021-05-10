#include<bits/stdc++.h>
using namespace std;

int main(){
  int total_inst = 0;
  cin>>total_inst;
  int inst_numeros[total_inst];
  char inst_letras[total_inst];

  for(int i = 0; i < total_inst; i++){
    cin>>inst_numeros[i]>>inst_letras[i];
  }

  for(int i = 1; i <= total_inst; i++){
    int i_disminuido = i - 1;//esto no cambia
    int local_posicion = i - 1;//esto si
    while(local_posicion < total_inst){
      if(inst_numeros[local_posicion] == i){
	int numero_temp = inst_numeros[i_disminuido];
	char letra_temp = inst_letras[i_disminuido]; 
	inst_numeros[i_disminuido] = inst_numeros[local_posicion];
	inst_letras[i_disminuido] = inst_letras[local_posicion];
	inst_numeros[local_posicion] = numero_temp;
	inst_letras[local_posicion] = letra_temp;
      }
      local_posicion++;
    }
  }

  int final_result = 1;
  char caracter_local = inst_letras[0];
  for(int i = 0; i < total_inst; i++){
    if(caracter_local != inst_letras[i] && i >= 3){
      final_result++;
      caracter_local = inst_letras[i];
    }
    if(caracter_local != inst_letras[i] && i < 3){
      caracter_local = inst_letras[i];
    }
  }
  
  cout<<final_result;

}
