#include<bits/stdc++.h>
using namespace std;
//Este es un programa que leerá los datos hasta que yo me detenga
int main(){

 int numero = 0;
 int contador = 0;
 int suma = 0;
 while(cin >> numero){
   suma+=numero;
   contador++;
 }
 cout << "\nConte: "<< contador;
 cout << "\nSume: " << suma;
 return 0;
}




