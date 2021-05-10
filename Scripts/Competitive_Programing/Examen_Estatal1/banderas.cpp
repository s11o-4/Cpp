#include<bits/stdc++.h>
using namespace std;

//Banderas
int main(){
  unsigned long long int main_number = 0;
  cin>>main_number;

  string main_binario = "";

  bool binflag = false;
  while(binflag == false){
    main_binario += to_string(main_number % 2);
    main_number = main_number / 2;
    if(main_number == 0){
      binflag = true;
    }
  }

  unsigned long long int longitud = main_binario.length();
  unsigned long long int cantidad_unos[longitud] = {};
  unsigned long long int k = 0;
  unsigned long long int acumulator = 0;
  for(unsigned long long int a = 0; a < longitud; a++){
    if(main_binario[a] == '1'){
      acumulator += 1;
    }else if(main_binario[a] == '0'){
      if(acumulator != 0){
        cantidad_unos[k] = acumulator;
	k+=1;
	acumulator = 0;
      }
    }
  }
  cantidad_unos[k + 1] = acumulator;

  unsigned long long int final_cantidad_unos[longitud] = {};
  unsigned long long int x = 0;
  for(unsigned long long int j = 0; j < longitud; j++){
    if(cantidad_unos[j] != 0){
      final_cantidad_unos[x] = cantidad_unos[j];
      x++;
    }
  }


  unsigned long long int d = 0; 
  unsigned long long int p = 0;
  while(p < longitud){
    if(main_binario[p] == '0'){
      cout<<"I"<<"\n";
      p++;
    }if(main_binario[p] == '1'){
      if(final_cantidad_unos[d] % 2 == 0){
	string local_cantidad0 = "";
	for(long long int h = 0; h < (final_cantidad_unos[d] / 2); h++){
	  local_cantidad0 += "00";
	  cout<<local_cantidad0<<"\n";
	}
	for(long long int g = 0; g < (final_cantidad_unos[d] / 2); g++){
	  if((g + 1 == final_cantidad_unos[d] / 2) and (final_cantidad_unos[d + 1] == 0)){
	    cout<<local_cantidad0;
	    local_cantidad0.erase(0,2);
	  }else{ 
	    cout<<local_cantidad0<<"\n";
	    local_cantidad0.erase(0,2);
	  }
	}
	p = (p + (cantidad_unos[d] - 1));
	p++;
	d++;
      }else{
	string local_cantidad0 = "";
	long long int dividir = (final_cantidad_unos[d] / 2) + 1;
	for(long long int h = 0; h < dividir; h++){
	  local_cantidad0 += "00";
	  cout<<local_cantidad0<<"\n";
	}
	for(long long int g = 0; g < (final_cantidad_unos[d] - dividir); g++){
	  if((g + 1 == final_cantidad_unos[d] - dividir) and (final_cantidad_unos[d + 1] == 0)){
	    local_cantidad0.erase(0,2);
	    cout<<local_cantidad0;
	  }else{
            local_cantidad0.erase(0,2);
	    cout<<local_cantidad0<<"\n";
	  }
	}
	p = (p + (cantidad_unos[d] - 1));
	p++;
	d++;
	continue;
      }
    }
  }
}
