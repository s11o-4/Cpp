#include<bits/stdc++.h>
using namespace std;

int main(){
  int i = 0;
  while(i <= 10){
    cout<<"Numero "<<i<<" de ejecucion"<<"\n";
    i++;
  }
  int guiones = 0;
  cin>>guiones;
  string guiones_str = "-";
  while(guiones != 0){
   guiones_str += "-";
   guiones--;
  }
  cout<<guiones_str;
}
