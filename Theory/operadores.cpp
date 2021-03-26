#include<bits/stdc++.h>
using namespace std;

int main(){
  /*
  Aumento con operadores:
  ++x
  x++
  x+=1
  x=x+1
  j=j-1
  
  Operadores Lógicos
  !(a==5) -> not
  not(a==5)
  (a==b) and (a==b)
  (a==b) && (a==b)
  (a==b) or (a==b)

  (a==b) or (a==b)
  (a==b) || (a==b)
  
  (a==b) xor (a==b)
  (a==b) ^ (a==b)

  invertir bits!
  c = (~a)

  Desplazar bits! 
  c = (a << 1) -> desplaza los bits de a, una posicion hacia la izquierda.
  c = (a >> 1) -> desplaza los bits de a, una posicion hacia la derecha. 

  */
  int a = 35;
  int number = (a << 1);
  cout<<number;

  cout<<"\n";

  //Operador condicional ?
  
  int x = 5, y = 3, c = 0;
  c = (x > y)?x:y;
  cout<<c;
  cout<<"\n";
  string mayor;
  mayor = (x > y)?"X es mayor que y":"Y es mayor que X";
  cout<<mayor;
  
  //Casting -> Ojo solo es temporal

  cout<<"\n";
  int h = 3;
  int k = 5;
  float result = float(h) / float(k);
  cout<<result;

}







