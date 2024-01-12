#include<bits/stdc++.h>
using namespace std;
//Contando pokemon
int main(){
  int movimientos_disponibles;
  cin>>movimientos_disponibles;

  int valores_ataque[movimientos_disponibles] = {};
  for(int i = 0; i < movimientos_disponibles; i++){
    int temporal = 0;
    cin>>temporal;
    valores_ataque[i] = temporal;
  }

  int especies_pokemon;
  cin>>especies_pokemon;
  int salud_pokemon[especies_pokemon] = {};
  for(int i = 0; i < especies_pokemon; i++){
    int temporal = 0;
    cin>>temporal;
    salud_pokemon[i] = temporal;
  }

  int valores_destreza[movimientos_disponibles] = {};
  for(int k = 0; k < movimientos_disponibles; k++){
    for(int l = 0; l < especies_pokemon; l++){
      if(valores_ataque[k] >= salud_pokemon[l]){
	valores_destreza[k] += 1;
      }
    }
  }

  for(int p = 0; p < movimientos_disponibles; p++){
    cout<<valores_destreza[p]<<" ";
  }
}
