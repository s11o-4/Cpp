#include<bits/stdc++.h>
using namespace std;

void banderas(int cantidad_unos, bool verificador_espacios){
  int local_residuo = cantidad_unos % 2;
  if(local_residuo == 0){
    string letras_o = "";
    for(int i = 0; i < cantidad_unos / 2; i++){
      letras_o.append("OO");
      cout<<letras_o;
      cout<<"\n";
    }
    for(int i = 0; i < cantidad_unos / 2; i++){
      cout<<letras_o;
      letras_o.erase(0,2);
      if(i + 1 != cantidad_unos / 2){
        cout<<"\n";
      }else{
	if(verificador_espacios != true){
	  cout<<"\n";
	}
      }
    }

  }else{
    string letras_o = "OO";
    int nuevo_numero_local = cantidad_unos - 1;
    for(int i = 0; i < nuevo_numero_local / 2; i++){
      cout<<letras_o;
      cout<<"\n";
      letras_o.append("OO");
    }

    cout<<letras_o<<"\n";
    letras_o.erase(0,2);

    for(int i = 0; i < nuevo_numero_local / 2; i++){
      cout<<letras_o;
      letras_o.erase(0,2);
      if(i + 1 != nuevo_numero_local / 2){
        cout<<"\n";
      }else{
	if(verificador_espacios != true){
	  cout<<"\n";
	}
      }
    }
  }
}

int main(){
  unsigned long long int numero = 0;
  cin>>numero;

  unsigned long long numero_maleable = numero;
  int residuo = 0;
  int contador = 0; 
  bool verificador_espacios = false;
  while(numero_maleable != 1){
    residuo = numero_maleable % 2;
    numero_maleable = numero_maleable / 2;
    if(residuo == 0){
      banderas(contador, verificador_espacios);
      contador = 0;
      cout<<"I\n";
    }
    else if(residuo == 1){
      contador++;
    }
    if(numero_maleable == 1){
      contador++;
      verificador_espacios = true;
      banderas(contador, verificador_espacios);
      contador = 0;
    }
  }
}
