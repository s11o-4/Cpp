#include<bits/stdc++.h>
using namespace std;

//Problema de gauss desde el un rango diferente de numeros

float gauss(int num1, int num2){
  int suma  = num1 + num2;
  float resta = num2 - num1;
  float div_mult = (resta / 2) + 0.5;
  float final_result = div_mult * suma;
  return final_result;
}

int main(){
  int ran1 = 0;
  int ran2 = 0;
  cin>>ran1;
  cin>>ran2;
  cout<<gauss(ran1, ran2);
}
