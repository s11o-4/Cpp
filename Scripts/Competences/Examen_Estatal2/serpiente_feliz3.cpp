#include<bits/stdc++.h>
using namespace std;

char arre[22][22];
int n, m, a, b, contador;
bool visitado[22][22];
string respuesta = "";

//Serpiente Feliz - clave 
int main(){
  cin>>n>>m;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      cin>>arre[i][j];
    }
  }
  a=1;
  b=1;
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= m; j++){
      cout<<"["<<arre[i][j]<<"]";
    }
    cout<<"\n";
  }
  while(contador<n*m){
    //b -> filas

    //n -> filas
    //m -> columnas 

    //a -> columnas
    while(!visitado[b][a] && a <= m){
      respuesta+=arre[b][a];
      visitado[b][a]=true;
      a++;//a se tendra que pasar para que se deje de ejecutar
      contador++;
    }
    a--;//disminuyo columnas
    b++;//aumento filas
    while(!visitado[b][a] && b <= n){
      respuesta+=arre[b][a];
      visitado[b][a] = true;
      b++;
      contador++;
    }
    a--;//disminuyo columnas
    b--;//disminuyo filas
    while(!visitado[b][a] && a >= 1){//1 parara no guardar basura. 
      respuesta+=arre[b][a];
      visitado[b][a] = true;
      a--;
      contador++;
    }
    a++;//aumento columnas
    b--;//disminuyo filas
    while(!visitado[b][a] && b >= 1){
      respuesta+=arre[b][a];
      visitado[b][a]=true;
      b--;
      contador++;
      cout<<"B, es igual a: "<<b<<"\n";
    }
    b++;//2 -> tan solo recorro todo mi inicio un espacio hacia la derecha y hacia abajo
    a++;//2
    cout<<"Termine la ejecucion. "<<"b, vale: "<<b<<" y a vale: "<<a<<"\n";
  }
  cout<<respuesta;
  return 0;
}
