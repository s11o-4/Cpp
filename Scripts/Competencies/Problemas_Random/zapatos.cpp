#include<bits/stdc++.h>
using namespace std;

int main(){
  int derecha_zapatos = 0;
  cin>>derecha_zapatos;
  long double tallas_derecha[derecha_zapatos];
  for(int i = 0; i < derecha_zapatos; i++){
    cin>>tallas_derecha[i];
  }
  int izquierda_zapatos = 0;
  cin>>izquierda_zapatos;
  long double tallas_izquierda[izquierda_zapatos];
  for(int i = 0; i < izquierda_zapatos; i++){
    cin>>tallas_izquierda[i];
  }
  int pares = 0;
  sort(tallas_derecha, tallas_derecha + derecha_zapatos);
  sort(tallas_izquierda, tallas_izquierda + izquierda_zapatos);
  int corta = 0;
  int larga = 0;
  if(derecha_zapatos > izquierda_zapatos){
    corta = izquierda_zapatos;
    larga = derecha_zapatos;
    for(int l = 0; l < corta; l++){
      for(int j = 0; j < larga; j++){
        if(tallas_izquierda[l] == tallas_derecha[j]){
   	  pares++;
	  tallas_derecha[j] = -1;
	  break;
        }  
      }
    }
  }
  else if(derecha_zapatos < izquierda_zapatos){
    corta = derecha_zapatos;
    larga = izquierda_zapatos;
    for(int l = 0; l < corta; l++){
      for(int j = 0; j < larga; j++){
        if(tallas_derecha[l] == tallas_izquierda[j]){
	  pares++;
	  tallas_izquierda[j] = -1;
	  break;
        }  
      }
    }
  }
  else{
    corta = izquierda_zapatos;
    larga = derecha_zapatos;
    for(int l = 0; l < corta; l++){
      for(int j = 0; j < larga; j++){
        if(tallas_izquierda[l] == tallas_derecha[j]){
	  pares++;
	  tallas_derecha[j] = -1;
	  break;
        }  
      }
    }
  }
  cout<<pares;
}
