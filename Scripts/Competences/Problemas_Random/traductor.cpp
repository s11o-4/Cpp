#include<bits/stdc++.h>
using namespace std;

long diccionario[1005][2];
long palabras_traducir[10010];

int buscador(int numero, int traducciones){
	int numero_buscar = numero;
	int traduccion = -1;
	for(int i = 0; i < traducciones; i++){
		if(diccionario[i][0] == numero_buscar){
			traduccion = diccionario[i][1];
		}
	}
	return traduccion;
}

int main(){
	int traducciones,traducir;
	cin>>traducciones>>traducir;
	for(int i = 0; i < traducciones; i++){
		cin>>diccionario[i][0];
		cin>>diccionario[i][1];
	}
	for(int i = 0; i < traducir; i++){
		cin>>palabras_traducir[i];
		int traduccion = buscador(palabras_traducir[i], traducciones);
		if(traduccion != -1){
			cout<<traduccion<<"\n";
		}else{
			cout<<"C?\n";
		}
	}
}
