#include<bits/stdc++.h>
using namespace std;

int main(){
  int numero_nombres  = 0; 
  cin>>numero_nombres;
  string nombres[numero_nombres];
  for(int i = 0; i < numero_nombres; i++){
    string local_string = "";
    cin>>local_string;
    int longitud_local = local_string.length();
    for(int l = 0; l < longitud_local; l++){
      local_string[l] = ::toupper(local_string[l]);
    }
    bool encontrado = false;
    for(int j = 0; j < numero_nombres; j++){
      if(nombres[j] == local_string){
	encontrado = true;
      }
    }
    if(encontrado == false){
      nombres[i] = local_string;
    }
  }
  int a = 0;
  int final_result = 0;
  while(a < numero_nombres){
    if(nombres[a] != ""){
      final_result++;
    }
    a++;
  }
  cout<<final_result;
}
