#include<bits/stdc++.h>
using namespace std;

int main(){
  int dec_number = 10;
  int bin_number = 0b1010;
  int oct_number = 012;
  int hex_number = 0xA;

  cout<<"\n";
  cout<<dec_number;
  cout<<"\n";
  cout<<bin_number;
  cout<<"\n";
  cout<<oct_number;
  cout<<"\n";  
  cout<<hex_number;
  cout<<"\n";
  
  cout<<1.34e19f;

}

/*
constexpr float exp(float x, int n) -> constexpr indica que el valor que retornadra sera constante y que se puede obtener en compilacion
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
};
 *
 * */
