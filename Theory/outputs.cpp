#include<bits/stdc++.h>
using namespace std;

/*
setw(10) -> numero de posiviones que quieres que tenga uno tras otro 
std::cout.setf(std::ios_base::adjustfield, std::ios_base::left); -> permanente, alineacion a la izquierda
*/

int main(){
  int number1 = 232;
  int number2 = 5345;
  
  cout<< setw(5) << number1;
  cout<<"\n";
  cout<< setw(5) << number2;
  
  cout<<"\n";
  float numberf = 3.1415131;
  cout<<setprecision(4)<<numberf;
  
  cout<<"\n";
  double numberd = 4.24234234;
  cout<< setprecision(5) << numberd;

  cout<<"\n";
  cout<<hex<<number1; // -> eso es lo mismo a escribir cout << std::oct << number ;
}






