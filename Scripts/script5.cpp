#include<bits/stdc++.h>
using namespace std;
//Problemas con condicionales
//Que numero es mayor
//Dadas tres medidas saber si construir un triangulo es posible
//Decir si el punto de trazo de un circulo es posible en un rectangulo 
/*
int main(){
  float number_a = 0, number_b = 0;
  cin>>number_a;
  cin>>number_b;
  if(number_a == number_b){
    cout<<"a == b";
  }
  else if(number_a > number_b){
    cout<<"a > b";
  } 
  else{
    cout<<"a < b";
  }
}
*/
/*
int main(){
  int a, b, c = 0;
  cin>>a;
  cin>>b;
  cin>>c;
  int major = 0;
  int check = 0;
  if((a > b) and (a > c)){
    major = a;
    check = b + c;
  }
  else if((b > a) and (b > c)){
    major = b;
    check = a + c;
  }
  else{
    major = c;
    check = b + a;
  }
 
  if (check > major){
    cout<<"TRIANGULO";
  }else{
    cout<<"IMPOSIBLE";
  }
}
*/
int main(){
  const int PI = 3.1416;

  int ca = 0, cb = 0;
  cin>>ca;
  cin>>cb;
  int width = 0, height = 0;
  cin>>width;
  cin>>height;
  int center_x = 0, center_y = 0;
  cin>>center_x;
  cin>>center_y;
  int radio = 0;
  cin>>radio;
  
  int area_circule = PI * (radio * radio);
  int area_rectangle = width * height;

  int limit_distance_x = center_x - ca;
  int limit_distance_y = center_y - cb;

  int limit_radio = width - center_x;

  if(area_circule < area_rectangle){
 
    
    if(limit_radio >= radio){
      if(limit_distance_x >= radio){
        if(limit_distance_y >= radio){
          cout<<"CORRECTO"; 
        }else{
          cout<<"INCORRECTO"; 
        }
      }else{
        cout<<"INCORRECTO";
      }  
    }else{
      cout<<"INCORRECTO";
    }
  
  }else{
    cout<<"INCORRECTO";	
    //cout<<"El area del circulo es mas grande que la del rectangulo"; 
  }
  
}

