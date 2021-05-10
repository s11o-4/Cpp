#include<bits/stdc++.h> //Esto igualmente es un macros -> pega eñ texto contenido en un fichero
using namespace std;
#define VALOR 50 // macros
#define FOR(A,B) for(A = 0 ; A < B ; A++)

//sort && reverse
int main(){//el ultimo indice de sort, no se tomara en cuenta sort acomoda los valores 
  int array[5] = {8,6,99,22,20};
  sort(array, array + 5);
  for(int i = 0; i < 5; i++){
    cout<<" "<<array[i]<<" ";
  }
  cout<<"\n";
  int array_2[5] = {8,6,99,22,20};
  sort(array_2 + 1, array_2 + 4);
  for(int i = 0; i < 5; i++){
   cout<<" "<<array_2[i]<<" ";
  } 
  //reverse solo invierte los indices
  cout<<"\n"; 
  int reverse_array[5] = {8,6,99,22,20};
  reverse(reverse_array, reverse_array + 5);
  for(int i = 0; i < 5; i++){
  cout<<" "<<reverse_array[i]<<" ";
  }
  cout<<"\n";
  int reverse_array2[5] = {1,5,3,5,3};
  reverse(reverse_array2, reverse_array2 + 5);
  for(int i = 0; i < 5; i++){
    cout<<" "<<reverse_array2[i]<<" ";
  }
/*
//Lenght in an array 
  int array[5] = {8,6,99,22,20};
  sort(array, array + 5);
  int longitud = sizeof(array) / sizeof(array[0]);
  for (int i = 0; i < longitud; i++){
    cout<<array[i]<<"\t";
  }
  cout<<"\n";
  reverse(array, array + 5);
  for (int i = 0; i < longitud; i++){
    cout<<array[i]<<"\t";
  }
*/
}

