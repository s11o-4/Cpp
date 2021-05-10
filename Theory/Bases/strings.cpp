#include<bits/stdc++.h>
using namespace std;

int main(){
  string mensaje = "Hello world";
  cout<<mensaje;
  cout<<"\n";
  string hello = mensaje + " Hola mundo";
  cout<<hello;
  string fhello = "Hello";
  string shello = "World";
 
  //append
  string hello_complete = shello.append(fhello);
  cout<<hello_complete;
  cout<<"\n";
  //length();
  string text = "sdfksdjfkdasfjk";
  cout<<text.length();
  cout<<"\n";
  //indices
  cout<<text[0];
  cout<<text[1];
  //replace
  text[0] ='C';
  cout<<"\n";
  cout<<text;

  //get line -> obtain all the informacion about the input data, not only until space
  string complete_name = ""; 
  cout << "Please type your name";
  getline(cin, complete_name);
  cout <<"\n";
  cout << "Your complete name is" << complete_name;
  
  //otras formas de declarar variables:
  //string a{"Nombre de la variable"};
  //string b("Nomrbe de la variable");
  
//------------------------------
//
//
//las funciones son para chars:
//+ strcpy 
//+ strcmp
//+ strrvs - no sirve
//+ strupr - no sirve 
//+ strlwr - no sirve
//+ atoi() - convierte enteros
//+ atof() - convierte flotantes

  char nombre[] = "Ruben";
  char nombre2[10];

  strcpy(nombre2, nombre);
  cout<<nombre2<<endl;

  //strcmp(cadena1, cadena2);//retorna 0
  
  char letra1[] = "aaa";
  char letra2[] = "aaa";

  if(strcmp(letra1, letra2)==0){
    cout<<"Ambas cadenas son iguales";
  }

  char cadena_parse[] = "123";
  int number_cadena = atoi(cadena_parse);

  cout<<"\n"<<number_cadena;

  char cadena_flotante[] = "1.34";
  float number_cadena_flotante = atof(cadena_flotante);
  
  cout<<"\n"<<number_cadena_flotante;

//segunda forma de pasar de ascii a numro:
//
//0 = 48
//9 = 57
//
//Asi que a un char le restas '0' y te dara el numero en entero


/*
 * morgue:
  char segundonombre[] = "Ruben";
  strrev(segundonombr);
  cout<<"\n"<<segundonombre;
*/
   
}
