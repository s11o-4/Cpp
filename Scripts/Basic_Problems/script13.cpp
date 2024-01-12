#include<bits/stdc++.h>
using namespace std;

/*
//enctriptar una cadena de texto con ayuda del abecedario. es la letra que le sigue a la que hay
//la segunda solucin era usar su codigo ascii
int main(){
  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string text_in = "";
  getline(cin, text_in);
 
  string text_encrypted = "";
  for(int i = 0; i < text_in.size(); i++){
    int index = alphabet.find(text_in[i]); 
    if(index == 25){
      text_encrypted += alphabet[0];
    }
    else if((index >= 0) and (index < 25)){
      text_encrypted += alphabet[index + 1];
    }
    else{
      text_encrypted += " ";
    }
  }
  cout<<text_encrypted;
}
*/

//problemas de calorias
int main(){
  int train_calories = 0, binge = 0; 
  cin>>train_calories>>binge;

  int total_calores = 0;
  for(int i = 0; i < binge; i++){
    int temporal = 0;
    cin>>temporal;
    total_calores += temporal;
  }

  int sessions_training = 0;
  int counter = 0;
  while(sessions_training < total_calores){
    sessions_training += train_calories;
    counter++;
  }
  cout<<counter;
}
