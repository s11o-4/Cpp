#include <iostream>//Siempre trata de ahorrar todo el espacio que puedas!
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int filas, columnas;
  cin>>filas>>columnas;

  char sopa_letras[filas][columnas];

  //llenado
  for(int i = 0; i < filas; i++){
    for(int l = 0; l < columnas; l++){
      cin>>sopa_letras[i][l];//cada letra nueva la toma como otro valor de entrada. Por eso funciona
    }
  }

  //palabras a buscar
  int numero_palabras = 0;
  cin>>numero_palabras;

  string plabras_buscar[numero_palabras];
  for(int i = 0; i < numero_palabras; i++){
    cin>>plabras_buscar[i]; 
  }

  //Primera busqueda ascendente
  int pb = 0; 
  int numero_apariciones[numero_palabras];
  for(int m = 0; m < numero_palabras; m++){//Recuerda. en un array siempre es mejor inicializarlo, o almacenara datos arrayibitriarios. 
    //SI quieres iniciar la cuenta desde 0, se lo tienes que indicar!
    numero_apariciones[m] = 0;
  }

  while(pb < numero_palabras){

    string palabra_buscar = plabras_buscar[pb];
    int longitud_palabra_buscar = palabra_buscar.length();
    char letra_identificadora = palabra_buscar[0];

    for(int i = 0; i < filas; i++){
      for(int l = 0; l < columnas; l++){
	if(letra_identificadora == sopa_letras[i][l]){
	  //derecha
	  if(l + longitud_palabra_buscar <= columnas){
	    string cadena_a_comparar = "";
	    for(int p = l; p < l + longitud_palabra_buscar; p++){
	      cadena_a_comparar += sopa_letras[i][p];
	    }
	    if(cadena_a_comparar == palabra_buscar){
	      numero_apariciones[pb]++;
	    }
	  }
	  //abajo
	  if(i + longitud_palabra_buscar <= filas){
	    string cadena_a_comparar = "";
	    for(int p = i; p < i + longitud_palabra_buscar; p++){
	      cadena_a_comparar += sopa_letras[p][l];
	    }
	    if(cadena_a_comparar == palabra_buscar){
	      numero_apariciones[pb]++;
	    }
	  }
	  //diagonal abajo derecha
	  if(l + longitud_palabra_buscar <= columnas && i + longitud_palabra_buscar <= filas){
	    string cadena_a_comparar = "";
	    int a = l;
	    for(int p = i; p < i + longitud_palabra_buscar; p++){
	      cadena_a_comparar += sopa_letras[p][a];
	      a++;
	    }
	    if(cadena_a_comparar == palabra_buscar){
	      numero_apariciones[pb]++;
	    }
	  }
	  //diagonal arriba derecha
	  if(l + longitud_palabra_buscar <= columnas && i - longitud_palabra_buscar  + 1 >= 0){
	    string cadena_a_comparar = "";
	    int a = l;
	    for(int p = i; p > i - longitud_palabra_buscar; p--){
	      cadena_a_comparar += sopa_letras[p][a];
	      a++;
	    }
	    if(cadena_a_comparar == palabra_buscar){
	      numero_apariciones[pb]++;
	    }
	  }
	}
      }
    }  
    pb++; 
  }
  pb = 0;

  while(pb < numero_palabras){

    string palabra_buscar = plabras_buscar[pb];
    reverse(palabra_buscar.begin(), palabra_buscar.end());
    int longitud_palabra_buscar = palabra_buscar.length();
    char letra_identificadora = palabra_buscar[0];

    for(int i = 0; i < filas; i++){
      for(int l = 0; l < columnas; l++){
	if(letra_identificadora == sopa_letras[i][l]){
	  //derecha
	  if(l + longitud_palabra_buscar <= columnas){
	    string cadena_a_comparar = "";
	    for(int p = l; p < l + longitud_palabra_buscar; p++){
	      cadena_a_comparar += sopa_letras[i][p];
	    }
	    if(cadena_a_comparar == palabra_buscar){
	      numero_apariciones[pb]++;
	    }
	  }
	  //abajo
	  if(i + longitud_palabra_buscar <= filas){
	    string cadena_a_comparar = "";
	    for(int p = i; p < i + longitud_palabra_buscar; p++){
	      cadena_a_comparar += sopa_letras[p][l];
	    }
	    if(cadena_a_comparar == palabra_buscar){
	      numero_apariciones[pb]++;
	    }
	  }
	  //diagonal abajo derecha
	  if(l + longitud_palabra_buscar <= columnas && i + longitud_palabra_buscar <= filas){
	    string cadena_a_comparar = "";
	    int a = l;
	    for(int p = i; p < i + longitud_palabra_buscar; p++){
	      cadena_a_comparar += sopa_letras[p][a];
	      a++;
	    }
	    if(cadena_a_comparar == palabra_buscar){
	      numero_apariciones[pb]++;
	    }
	  }
	  //diagonal arriba derecha
	  if(l + longitud_palabra_buscar <= columnas && i - longitud_palabra_buscar + 1 >= 0){
	    string cadena_a_comparar = "";
	    int a = l;
	    for(int p = i; p > i - longitud_palabra_buscar; p--){
	      cadena_a_comparar += sopa_letras[p][a];
	      a++;
	    }
	    if(cadena_a_comparar == palabra_buscar){
	      numero_apariciones[pb]++;
	    }
	  }
	}
      }
    }  
    pb++; 
  }
  for(int l = 0; l < numero_palabras; l++){
    cout<<numero_apariciones[l]<<"\n";
  }
}
