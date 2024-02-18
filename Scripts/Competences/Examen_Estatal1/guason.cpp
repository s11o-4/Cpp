#include<bits/stdc++.h>
using namespace std;

int main(){
  int filas, columnas; 
  cin>>filas>>columnas;

  char lago[filas][columnas];
  char lago_infectado[filas][columnas];
  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      cin>>lago[i][j];
      lago_infectado[i][j] = lago[i][j];
    }
  }

  int segundos = 0;
  cin>>segundos;

  int contador = 0;
  while(contador < segundos){
    for(int i = 0; i < filas; i++){
      for(int j = 0; j < columnas; j++){
	if(lago[i][j] == 'X'){
	  //columnas
	  if(j + i < columnas && lago[i][j + 1] == '.'){
	    lago_infectado[i][j + 1] = 'X';
	  }
	  if(j - 1 >= 0 && lago[i][j - 1] == '.'){
	    lago_infectado[i][j - 1] = 'X';
	  }
	  //filas
	  if(i + 1 < filas && lago[i + 1][j] == '.'){
	    lago_infectado[i + 1][j] = 'X';
	  }
	  if(i - 1 >= 0 && lago[i - 1][j] == '.'){
	    lago_infectado[i - 1][j] = 'X';
	  }
	}
      }
    }
    for(int i = 0; i < filas; i++){
      for(int j = 0; j < columnas; j++){
	lago[i][j] = lago_infectado[i][j];
      }
    }
    contador++;
  }
 
  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      cout<<lago[i][j];
    }
    if(i + 1 != filas){
      cout<<'\n';
    }
  }
}
