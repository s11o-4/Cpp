#include<bits/stdc++.h>
using namespace std;

long stack_calif[1005];
long copia_stack_calif[1005];
int numero_calif = 0;
int t_canciones = 0;

int algoritmo_main(){
	sort(copia_stack_calif, copia_stack_calif + numero_calif);
	reverse(copia_stack_calif, copia_stack_calif + numero_calif);
	int prim_num_grande = copia_stack_calif[0];
	int seg_num_grande = 0;
	for(int i = 0; i < numero_calif; i++){
		if(prim_num_grande != copia_stack_calif[i]){
			seg_num_grande = copia_stack_calif[i];
			break;
		}
	}
	int indice = 0;
	int suma = 0;
	int residuo = 0;
	for(int i = 0; i < numero_calif; i++){
		if(prim_num_grande == stack_calif[i]){
			indice = i + 1;
			suma = stack_calif[i] / 2;
			residuo = stack_calif[i] % 2;
			break;
		}
	}
	bool bandera = false;
	for(int j = 0; j < numero_calif; j++){
		if(stack_calif[j] == seg_num_grande && bandera == false){
			stack_calif[j] += residuo;
			stack_calif[j] += suma;
			bandera = true;
			copia_stack_calif[j] = stack_calif[j];
		}else{
		  stack_calif[j] += suma;
			copia_stack_calif[j] = stack_calif[j];
		}
	}
	stack_calif[indice - 1] = 0;
	copia_stack_calif[indice - 1] = 0;
	return indice;
}

int main(){
	cin>>numero_calif>>t_canciones;
	for(int i = 0; i < numero_calif; i++){
		cin>>stack_calif[i];
		copia_stack_calif[i] = stack_calif[i];
	}
	for(int i = 0; i < t_canciones; i++){
		cout<<algoritmo_main()<<"\n";
	}
}
