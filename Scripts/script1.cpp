#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//problema de Gauss, de 1 - 9


int gauss(int n){
  int result = 0;
  result = n*(n+1)/2;
  return result;
}

int main(){
  int num_to_send = 0;
  cin>>num_to_send;
  int final_result = 0;
  final_result = gauss(num_to_send);
  cout<<final_result;
}


