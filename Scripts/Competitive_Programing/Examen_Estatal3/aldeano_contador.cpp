#include<bits/stdc++.h>
using namespace std;

int letras = 0;
string palabra = "";
int final_counter = 0;
int main(){
  cin>>letras;
  cin>>palabra;

  string palabras_depurar = "";
  string local_string_invertida = "";
  string local_string = "";
  int h = 0;
  for(int l = 0; l < letras; l++){
    for(int i = l; i < letras; i++){
      local_string_invertida = "";
      local_string += palabra[i];
      
      for(int j = i;  j >= l; j--){
        local_string_invertida += palabra[j];
      }
      if(local_string_invertida == local_string){
	palabras_depurar += local_string + '.';
	final_counter++;
      }
    }
    local_string = "";
  }

  int final_longitud = palabras_depurar.length();
  string main_palabras[final_longitud][final_longitud];
 
  int a = 0;
  for(int i = 0; i < final_longitud; i++){
    if(palabras_depurar[i] != '.'){
      main_palabras[a][0] += palabras_depurar[i];
    }else{
      a++;
    }
  }
  for(int b = 0; b < final_longitud; b++){
    for(int l = b + 1; l < final_longitud; l++){
      if(main_palabras[b][0] == main_palabras[l][0] && main_palabras[b][0] != "" && main_palabras[l][0] != ""){
	main_palabras[l][0] = "";
	final_counter--;
      }
    }
  }
  cout<<final_counter;
  /*for(int i = 0; i < final_longitud; i++){
    for(int j = 0; j < final_longitud; j++){
      cout<<"["<<main_palabras[i][j]<<"]";
    }
    cout<<"\n";
  }*/
}
