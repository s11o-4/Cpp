#include<bits/stdc++.h>
using namespace std;

int filas = 0, columnas = 0;
string simple_mensaje = "";
int indie_i = 0;
string final_result = "";

//Serpiente Feliz
int main(){
  cin>>filas>>columnas;
  for(int j = 0; j < filas; j++){
    string temporal = "";
    cin>>temporal;
    simple_mensaje += temporal;
  }
  //Creo mi matriz
  string main_mensaje[filas][columnas];
  for(int i = 0; i < filas; i++){
    for(int k = 0; k < columnas; k++){
      main_mensaje[i][k] = simple_mensaje[indie_i];
      indie_i++;
    }
  }
  
  int letras_total = filas * columnas;
  bool bandera = false;
  int comienzo = 0;
  int filas_inicio = filas;
  int columnas_inicio = columnas;
 
  while(bandera == false){
    
    if(final_result.length() != letras_total){
      for(int i = comienzo; i < filas_inicio; i++){
	for(int l = comienzo; l < columnas_inicio; l++){
	  final_result += main_mensaje[i][l];
	}
	break;
      }
    }

    if(final_result.length() != letras_total){
      for(int i = comienzo + 1; i < filas_inicio - 1; i++){
	for(int l = (columnas_inicio - 1); l < columnas; l++){
	  final_result += main_mensaje[i][l];
	}
      } 
    }

    if(final_result.length() != letras_total){
      for(int i = (filas_inicio - 1); i < filas_inicio; i++){
	for(int l = (columnas_inicio - 1); l >= comienzo; l--){
	  final_result += main_mensaje[i][l];
	}
      }
    }

    if(final_result.length() != letras_total){
      for(int i = (filas_inicio - 2); i > comienzo; i--){
	final_result += main_mensaje[i][comienzo];
      }
    }
   
    comienzo++;
    filas_inicio--;
    columnas_inicio--;

    int letras_llevadas = final_result.length();
    if(letras_llevadas == letras_total){
      break;
      bandera = true;
    }

  }

/*  
  //Imprimir 
  for(int i = 0; i < filas; i++){ 
    for(int k = 0; k < columnas; k++){
      cout<<"["<<main_mensaje[i][k]<<"]";
    }
    cout<<"\n";
  }
*/
  cout<<final_result;
}
