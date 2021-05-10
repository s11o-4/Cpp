#include<bits/stdc++.h>
using namespace std;

/*
//problema de troncos, presa y un pueblo que se iba a undir si no fuera por mi 
int main(){
  int town_height = 0, pieces_land = 0; 
  cin>>town_height>>pieces_land;

  int units_water[pieces_land] = {};
  for(int i = 0; i < pieces_land; i++){
    int temporal = 0;
    cin>>temporal;
    units_water[i] = temporal;
  }

  int acumulator = 0;
  for(int j = 0; j < pieces_land; j++){
    acumulator += town_height - units_water[j];
  }
  cout<<acumulator;
}
*/

int main(){
  string grades = "";
  char correct = 'Y';
  char incorrect = 'X';
  cin>>grades;
  
  int acumulator = 0;
  int good_luck = 0;
  int instant_var = good_luck;
  int length = grades.size();

  for(int i = 0; i < length; i++){
    if(grades[i] == correct){
      instant_var++;
      good_luck = good_luck + instant_var;
    }
    if(grades[i] == incorrect){
      acumulator += good_luck;
      good_luck = 0;
      instant_var = 0;
    }
    if(i + 1 == length){
      acumulator += good_luck;
    }
  }
  cout<<acumulator;
}
