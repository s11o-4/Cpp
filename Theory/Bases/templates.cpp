#include<bits/stdc++.h>
using namespace std;

template <class T> //you can use template or typename. wathever you prefer. It's just an identifier
T division(T a, T b){
  T r = 0;
  r=a/b;
  return r;
}

int main(){
  cout<<'\n'<<division(5, 2);
  cout<<'\n'<<division(5.5, 2.5);
  //cout<<'\n'<<division<int>(5, 2); 
  //cout<<'\n'<<division<double>(5.5, 2.5);
}
