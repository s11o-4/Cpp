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

}
