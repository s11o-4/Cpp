#include<bits/stdc++.h>
using namespace std;

int main(){
  int filas,columnas;
  cin>>filas>>columnas;

  string cuarto[columnas + 1][filas + 1];
  if(filas > 1 && columnas > 1){
    int numero_posiciones_alacran = 0;
    cin>>numero_posiciones_alacran;
    for(int i = 1; i <= numero_posiciones_alacran; i++){
      int columna_local = 0, fila_local = 0;
      cin>>columna_local>>fila_local;
      cuarto[fila_local][columna_local] = "X";
    }  
  /*
  for(int j = 1; j <= filas; j++){
    for(int l = 1; l <= columnas; l++){
      cout<<"["<<cuarto[j][l]<<"]";
    }
    cout<<"\n";
  }
  cout<<"\n";*/
    int final_result = 0;
    for(int i = 1; i < columnas; i+=1){
      for(int l = 1; l <= filas; l+=2){
	if(cuarto[i][l] != "X"){
	  //cout<<"Estoy en i "<<i<<" y en l : "<<l<<"\n";
	  ////Cama hacia la izquierda
	  if(l - 1 >= 1){
	    if(cuarto[i][l - 1] != "X" && cuarto[i + 1][l] != "X" && cuarto[i + 1][l - 1] != "X"){
	      final_result++;
	    }
	  }
	  //Cama hacia la derecha
	  if(l + 1 <= columnas){
	    if(cuarto[i][l + 1] != "X" && cuarto[i + 1][l] != "X" && cuarto[i + 1][l + 1] != "X"){
	      final_result++;
	    }
	  }
	  //cout<<"Y el contador vale: "<<final_result<<"\n";
	}
      }
    }
    cout<<final_result;
  }else{
    int no_importa = 0;
    cin>>no_importa;
    int no_importa2 = 0;
    while(cin >> no_importa2){
      break;
    }
    cout<<0;
  }
 }
