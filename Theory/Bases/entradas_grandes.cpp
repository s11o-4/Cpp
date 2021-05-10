#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 0;
  int numero = 0;
  int suma = 0; 
  //El llamado a estas  funciones tiene el objetivo de modificar el comportameinto de la entrada y salida basicamente la sincronizacion con operaciones de printf y scanf heredadas del su predecesor el Lenguaje C.

  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  cin>>n;
  
  for (int i=1; i<=n; i++){
    cin >>numero;
    suma+=numero;
  }
  cout << suma;
  return 0;
}
