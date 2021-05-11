#include<bits/stdc++.h>
using namespace std;

//Recibo parametros por referencia, indico esto con el simbolo& -> indica que el parametro modificado 
//dentro de mi funcion, de igual forma sera modificado el valor que  me manden como argunmento
//& -> TOMA AL ARGUMENTO Y A LOS PARAMETROS COMO LA MISMA VARIABLE
inline void triplica(int& a, int& b, int& c){
  a*=3;
  b*=3;
  c*=3;
}

int main(){
  int x=1, y=2, z=3;
  triplica(x, y, z);
  cout<<x<<'\t'<<y<<'\t'<<z<<'\t';

  return 0;
}

/*
int multiplica(int a, int b = 1){} -> valores por default 
*/



/*
Cuando tu declaras una funcion esta debe de realziar una copia de los argumentos, cambiar el flujo
de la ejecucion del programa, devolver valores, inicializar variables, etc...

Funciones inline -> el codigo de la funcion se incrusta en el lugar donde es invocada y es el comilador
el que se encarga de ajustar los argumentos, parámetros y valor de retorno. 
inline no es como tal una funcion. ya que no existe el intercambio de argumentos a parametros y valores
de retorno 
*/
