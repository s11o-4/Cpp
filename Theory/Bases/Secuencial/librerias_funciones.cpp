#include<bits/stdc++.h>
using namespace std;

int main(){
   
  //absoluta 
  float number1 = 2.69554; 
  int absolute = abs(number1);
  cout<<absolute; 
  
  cout<<"\n";
  
  //potencia
  int number2 = 10;
  int result_numer2 = pow(number2, 2);
  cout<<result_numer2;

	cout<<"\n";

	//logaritmos
	int logaritmo = log10(100); // el 10 es la base de tu logaritmo.
	cout<<logaritmo;

	cout<<"\n";

	//raiz cuadrada
	int cuadrada = sqrt(9);
	cout<<cuadrada;

	cout<<"\n";

	//redondeo inverso -> numero mas cercano pequeño -> floor -> suelo
	int redondeo_inverso = floor(10.65);
	cout<<redondeo_inverso;

	cout<<"\n";

	//redondeo ascendente -> numero mas cercano grande -> ceil: hacer techo
	int redondeo_grande = ceil(10.2);
	cout<<redondeo_grande;


	cout<<"\n";

	//redondeo normal -> al numero que este más prócimo
	int redondeo_normal = round(45.5);
	cout<<redondeo_normal;


	cout<<"\n";

	//valores minimos y maximos
	int number5 = 10, number6 = 11;
	int maximo = max(number5, number6); //min
	cout<<maximo;

	cout<<"\n";

	//funciones con strings
	string cadena = "jsdfksdfkashfkjsadfhaskdjfh";
	int longitud = cadena.size();
	cout<<longitud;

	cout<<"\n";

	//insertar un string
	cadena.insert(3, "insercion");
	cout<<cadena;

	cout<<"\n";

	//borrar
	cadena.erase(0, 2);
	cout<<cadena;

	cout<<"\n";

	//  reeemplazar -> 2° parametro indica cuantos caracteres
	//  tendra que cambiar de tu cadena. si la longitud de tu cadena es mayor solo agregara mas no reeplazara
	cadena.replace(0,100,"Cambio");
	cout<<cadena;

	cout<<"\n";

	cout<<cadena;
	//encontrar una cadena
	int posicion = cadena.find('C'); // -> si no encuentra devuelve -1
	int posicion_limite = cadena.find('C', 3);
	cout<<posicion;

	cout<<"\n";

	cout<<posicion_limite;

	//buscar de derecha a izquierda -> .rfind()  -> lo mismo primero colocas el caracter y luego (opcional), colocas una posicion 
	//especifica


	//Devolver subcadenas
	cout<<"\n";
	string cadena2 = "Yo soy la cadena numero2";
	string subcadena_cadena2 = cadena2.substr(0,6);

	cout<<subcadena_cadena2;

	//Parsing 
	int parseo = 0;
	string numero_convertir = "12";
	float parseo2 = 0;
	string float_convertir = "12.121";

	cout<<"\n";

	stringstream(numero_convertir)>>parseo;
	cout<<parseo;

	cout<<"\n";

	stringstream(float_convertir)>>parseo2;
	cout<<parseo2;

}

