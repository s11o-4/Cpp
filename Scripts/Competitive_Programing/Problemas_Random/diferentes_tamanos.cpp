#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int poste[102] = {};
  int n = 0;
  int contador = 0;
  cin>>n;
  for(int i = 1; i <= n; i++){
    cin>>poste[i];
  }
  sort(poste+1, poste+n+1);
  for(int i = 1; i <= n; i++){
    if(poste[i] != poste[i - 1]){//esta es solo la cuenta para el primer termino. ya que siempre existira
      //tu haces una cuenta hacia atras. por lo que el primero del repetido siempre aparecera. Si el primero 
      //estuviera repetido, el que se repetiria sería el segundo. no el primero 
      contador++;
    }
  }
  cout<<contador;
  return 0;
}

/*
int main(){
  int cantidad_postes = 0; 
  cin>>cantidad_postes;

  long final_result = cantidad_postes;
  long tamanos_postes[cantidad_postes];
  for(int l = 0; l < cantidad_postes; l++){
    cin>>tamanos_postes[l];
  }
  for(int i = 0; i < cantidad_postes; i++){
    int contador = 0;
    for(int j = 0; j < cantidad_postes; j++){
      if(tamanos_postes[i] == tamanos_postes[j] && j != i && tamanos_postes[j] != -1){
	contador++;
	tamanos_postes[j] = -1;
      }
    }
    final_result = final_result - (contador);
  }
  cout<<final_result;
}
*/
