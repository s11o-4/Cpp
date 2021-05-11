#include<bits/stdc++.h>
using namespace std;

int main(){

  //Yo quitando bombas....
  //tuve que obtener la distancia que en realidad re3corri. Tomando en cuenta que pueden darme numeros negativos
  int number1 = 0, number2 = 0, number3 = 0;
  cin>>number1>>number2>>number3;
  
  int final_result = 0;

  int first_distance = abs(number2 - number1), second_distance = abs(number3 - number1);
  if(first_distance < second_distance){
    final_result += abs(number2 - number1);
    final_result += abs(number2 - number3);
  }else{
    final_result += abs(number3 - number1);
    final_result += abs(number3 - number2);
  }
  cout<<final_result;
}
