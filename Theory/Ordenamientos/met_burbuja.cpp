#include<bits/stdc++.h>
using namespace std; 
//Ya lo hacias, pero tiene nombre ...


//Comparas cada posicion de tu array, hasta conseguir
//la mas pequeña en la posicion mas baja. 
//Se logra ocn dos arrays 
int main(){
    int numeros[] = {9,767,4576,5,3,53,4,35,2,5,3,5,24,2,4};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);
    for(int i = 0; i < longitud; i++){
        for(int l = i; l < longitud - 1; l++){
            if(numeros[l + 1] < numeros[i]){
                int tem_var = numeros[i];
                numeros[i] = numeros[l + 1];
                numeros[l + 1] = tem_var;
            }
        }
    }
    for(int i = 0; i < longitud; i++){
        cout<<"\n";
        cout<<"["<<numeros[i]<<"]";
    }
    cout<<"\n";
}