#include<bits/stdc++.h>
using namespace std;

int main(){
  char letter;
  string encr;
  cin>>letter>>encr;
  int len = encr.size();
  bool flag = false;
  for(int i = 0; i < len; i++){
    if(encr[i] == letter){
      cout<<"CONTENIDO";
      flag = true;
      break;
    }
  }
  if(flag == false){
    cout<<"FALTANTE";
  }
}
