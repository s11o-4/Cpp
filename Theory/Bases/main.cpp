#include<bits/stdc++.h>
using namespace std;

int main(){
	string cadena = "dkjfsdfhgksd";
	cadena.erase(0, 1);
	cout<<cadena;
	cout<<"\n";
	cadena.replace(0,1, "Reemplazo hasta el indice 1");
	cout<<cadena;
	int indice = cadena.find('1');
	cout<<"El indice del numero 1 es: "<<indice<<"\n";
	int indice_no = cadena.find("sdfsd");
	cout<<"\n"<<indice_no<<"\n";
}
