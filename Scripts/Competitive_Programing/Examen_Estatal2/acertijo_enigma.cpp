#include<bits/stdc++.h>
using namespace std;

int main(){
  string config_actual = "";
  string pass = "";
  cin>>config_actual>>pass;

  int longitud = config_actual.length();

  int final_result = 0;
  for(int l = 0; l < longitud; l++){
    int recorrido_as = 0;
    int recorrido_des = 0;
    char saved = config_actual[l];

    if(config_actual[l] != pass[l]){

      while(config_actual[l] != pass[l]){//Ascendente
	if(config_actual[l] == 'Z'){
	  config_actual[l]='A';
	  recorrido_as++;
	}else{
	  config_actual[l] = config_actual[l] + 1;
	  recorrido_as++;
	}
      }

      config_actual[l] = saved;
      
      while(config_actual[l] != pass[l]){//Descendente
	
	if(config_actual[l] == 'A'){
	  config_actual[l]='Z';
	  recorrido_des++;
	}else{
	  config_actual[l] = config_actual[l] - 1;
	  recorrido_des++;
	}
      }

      if(recorrido_as < recorrido_des){
	final_result += recorrido_as;
      }else{
	final_result += recorrido_des;
      }

    }
  }
  cout<<final_result;
}
