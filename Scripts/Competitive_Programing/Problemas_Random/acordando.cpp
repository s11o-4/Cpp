#include<bits/stdc++.h>
using namespace std;

int main(){
  long perimetro = 0;
  int cantidad_longitudes = 0;
  cin>>perimetro>>cantidad_longitudes;
  int longitudes[cantidad_longitudes];
  for(int i = 0; i < cantidad_longitudes; i++){
    cin>>longitudes[i];
  }
  int contador1 = 1;
  int contador2 = 1;
  bool bandera = false;
  sort(longitudes, longitudes + cantidad_longitudes);
  for(int i = cantidad_longitudes - 1; i >= 0; i--){
    bool confirmacion = false;
    int suma = longitudes[i];
    for(int l = i; l >= 0; l--){
      if(longitudes[l] != longitudes[i]){
        suma += longitudes[l];
        contador1++;	
      }
      if(suma >= perimetro){
	confirmacion = true;
	break;
      }
    }
    if(bandera == false){
      contador2 = contador1;
      bandera = true;
    }else{
      if(contador1 < contador2 && contador1 != 1 && confirmacion == true){
	contador2 = contador1;
      }
    }
    contador1 = 1;
  }
  cout<<contador2;
}
