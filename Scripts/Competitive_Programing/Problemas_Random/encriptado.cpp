#include<bits/stdc++.h>
using namespace std;

int main(){
  string abecedario = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  string nuevo_abecedario = "";
  cin>>nuevo_abecedario;
  cin.ignore(256, '\n');
  string mensaje = "";
  getline(cin, mensaje);

  int longitud = mensaje.length();
  string mensaje_encriptado = "";
  for(int i = 0; i < longitud; i++){
    int posicion = abecedario.find(mensaje[i]);
    if(posicion != -1 || mensaje[i]){
      mensaje_encriptado += nuevo_abecedario[posicion];
    }
    if(mensaje[i] == ' '){
      mensaje_encriptado += " ";
    }
  }
  cout<<mensaje_encriptado;
}

