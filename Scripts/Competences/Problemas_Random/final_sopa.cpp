#include<bits/stdc++.h>
using namespace std;

string sopa[105];
string palabras[55];
int filas, columnas;

bool verificar(int i, int j, int cf, int cc, string palabra){
  for(int p = 0; p < palabra.size(); p++){
    if(sopa[i + (p * cf)][j + (p * cc)] != palabra[p]){
      return false;
    }
  }
  return true;
}

int procesar(string palabra, int cf, int cc){
  int res = 0;
  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      int ultC = j + ((int)palabra.size() * cc) - cc;
      int ultR = i + ((int)palabra.size() * cf) - cf;
      if(ultC >= 0 && ultC < columnas && ultR >= 0 && ultR < filas){
	if(verificar(i, j, cf, cc, palabra)){
	  res++;
	}
      }
    }
  }
  return res;
}

int procesar(string palabra){
  int res = 0;
  res += procesar(palabra, 0, 1);
  res += procesar(palabra, 0, -1);
  res += procesar(palabra, 1, 0);
  res += procesar(palabra, -1, 0);

  //Diagonales
  res += procesar(palabra, -1, -1);
  res += procesar(palabra, -1, 1);
  res += procesar(palabra, 1, 1);
  res += procesar(palabra, 1, -1);
  return res;
}

int main(){
  cin>>filas>>columnas;
  for(int i = 0; i < filas; i++){
    cin>>sopa[i];
  }
  int numero_palabras = 0;
  cin>>numero_palabras;
  for(int l = 0; l < numero_palabras; l++){
    cin>>palabras[l];
    cout<<procesar(palabras[l])<<"\n";
  }
}
