#include<bits/stdc++.h>
using namespace std;

int main(){

  int filas = 0,columnas = 0;
  cin>>filas>>columnas;

  char arr[filas][columnas];
  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      cin>>arr[i][j];
    }
  }

  int filas_recorrer = filas - 1;
  int columnas_recorrer = columnas - 1;
  int D = 1;
  int I = -1;
  int B = 1;
  int R = -1;
  bool verificar_camino[columnas];
  bool bandera = false;

  for(int i = 0; i <= columnas_recorrer; i++){

    int posicion_filas = filas_recorrer;
    int posicion_columnas = i;
    char comienzo = arr[posicion_filas][posicion_columnas];
    bandera = false;

    while(comienzo != 'X' && bandera == false){
      if(comienzo == 'D'){
	posicion_columnas = posicion_columnas + D;
	if(posicion_columnas <= columnas_recorrer){
	  comienzo = arr[posicion_filas][posicion_columnas];
	}else{
	  bandera = true;
	}
      }
      if(comienzo == 'I'){
	posicion_columnas = posicion_columnas + I;
	if(posicion_columnas >= 0){
	  comienzo = arr[posicion_filas][posicion_columnas];
	}else{
	  bandera = true;
	}
      }
      if(comienzo == 'B'){
	posicion_filas = posicion_filas + B;
	if(posicion_filas <= filas_recorrer){
	  comienzo = arr[posicion_filas][posicion_columnas];
	}else{
	  bandera = true;
	}
      }
      if(comienzo == 'R'){
	posicion_filas = posicion_filas + R;
	if(posicion_filas >= 0){
	  comienzo = arr[posicion_filas][posicion_columnas];
	}else{
	  bandera = true;
	}
      }
    }
    if(comienzo == 'X'){
      verificar_camino[i] = true;
    }else{
      verificar_camino[i] = false;
    }
  }

  int final_result = 0;
  for(int i = 0; i <= columnas_recorrer; i++){
    if(verificar_camino[i] == true){
      final_result = i + 1;
      break;
    }
  }
  cout<<final_result;
}
