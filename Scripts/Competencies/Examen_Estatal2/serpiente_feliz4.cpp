#include<bits/stdc++.h>
using namespace std;

//Final version Serpiente Feliz 
int rows, columns, indie_rows, indie_columns;
int counter; 
char main_matrix[22][22];
bool validation[22][22];
int main(){
  cin>>rows>>columns;
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
      cin>>main_matrix[i][j];
    }
  }

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
      cout<<"["<<main_matrix[i][j]<<"]";
    }
    cout<<"\n";
  }

  int total_words = rows * columns;
  string final_result = "";
  while(counter != total_words){
    while(!validation[indie_rows][indie_columns] && indie_columns < columns){
      final_result += main_matrix[indie_rows][indie_columns];
      validation[indie_rows][indie_columns] = true;

      indie_columns++;
      counter++;
    }

    indie_rows++;
    indie_columns--;

    while(!validation[indie_rows][indie_columns] && indie_rows < rows){
      final_result += main_matrix[indie_rows][indie_columns];
      validation[indie_rows][indie_columns] = true;

      indie_rows++;
      counter++;
    }

    indie_rows--;
    indie_columns--;

    while(!validation[indie_rows][indie_columns] && indie_columns >= 0){
      final_result += main_matrix[indie_rows][indie_columns];
      validation[indie_rows][indie_columns] = true;

      indie_columns--;
      counter++;
    }

    indie_rows--;
    indie_columns++;

    while(!validation[indie_rows][indie_columns] && indie_rows >= 1){
      final_result += main_matrix[indie_rows][indie_columns];
      validation[indie_rows][indie_columns] = true;
      indie_rows--;
      counter++;
    }

    indie_rows++;
    indie_columns++;

  }
  cout<<"\n";
  cout<<"Resultado: "<<final_result;
}
