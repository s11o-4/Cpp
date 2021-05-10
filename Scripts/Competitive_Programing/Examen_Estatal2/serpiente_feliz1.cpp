#include<bits/stdc++.h>
using namespace std;

int main(){

  string config_actual = " ";
  string pass = " ";
  cin>>config_actual>>pass;

  string config_actual_mod = " ";
  string password_mod = " ";

  int longitud1 = config_actual.length();
  int longitud2 = pass.length();

  for(int i = 0; i < longitud1; i++){
    config_actual_mod[i] = config_actual[i] + 32;
  }

  for(int i = 0; i < longitud2; i++){
    password_mod[i] = pass[i] + 32;
  }



  int final_result = 0;
  for(int l = 0; l < longitud1; l++){
    int recorrido_as = 0;
    int recorrido_des = 0;

    if(config_actual_mod[l] != password_mod[l]){

      while(config_actual_mod[l] != password_mod[l]){//Ascendente
	//cout<<"ejecuto el primer while";
	//cout<<config_actual_mod[l]<<" "<<password_mod[l]<<"\n";
	if(config_actual_mod[l] == 'z'){
	  config_actual_mod[l]='a';
	  recorrido_as++;
	}else{
	  config_actual_mod[l] = config_actual_mod[l] + 1;
	  recorrido_as++;
	}
      }

      config_actual_mod[l] = config_actual[l] + 32;
      
      while(config_actual_mod[l] != password_mod[l]){//Descendente
	//cout<<"ejecuto el segundo while";
	//cout<<"\n";
	//cout<<config_actual_mod[l]<<" "<<password_mod[l]<<"\n";

	if(config_actual_mod[l] == 'a'){
	  config_actual_mod[l]='z';
	  recorrido_des++;
	}else{
	  config_actual_mod[l] = config_actual_mod[l] - 1;
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
