// en este ejercico debes escribir la función completa
#include<bits/stdc++.h>

using namespace std;

/*
void precio(double precio, double& iva, double& precioFinal){
    iva = (precio * 16) / 100;
    precioFinal = precio + iva;
    cout<<iva<<" "<<precioFinal;
}
*/
void redondear(double& a, double& b, double& c){
  int redondeoa = floor(a), redondeob = floor(b), redondeoc = floor(c);
  double decimala = abs(redondeoa - a), decimalb = abs(redondeob - b), decimalc = abs(redondeoc - c);
  
  double i = .1;
  double primer_decimala = 0, segundo_decimalb = 0, tercer_decimalc = 0;
  bool bandera = false;

  while(bandera == false){

    if((i > decimala) and (primer_decimala == 0)){
      primer_decimala = i - .1;

      bool local_flag = false;
      double k = .01;
      while(local_flag == false){
	if((primer_decimala + k > decimala) and (primer_decimala + k != decimala)){
	  if(k - .01 >= .05){
	    primer_decimala = primer_decimala + .1;
	    local_flag = true;
	  }
	  local_flag = true;
	}
	k += .01;
      }
    }

    if((i > decimalb) and (segundo_decimalb == 0)){
      segundo_decimalb = i - .1; 

      bool local_flag = false;
      double k = .01;
      while(local_flag == false){
	if((segundo_decimalb + k > decimalb) and (segundo_decimalb + k != decimalb)){//ojo que aqui pasaron cosas raras. SI tu comparas a un double con un float asi tengan el mismo valor le dara preferencia al double solo por ser de tipo double. igualmente si le sumas algo float a algo double. Aparte algo mas: si en tu espresion no es mayor pero tampoco es menor, osea es igual, lo va a interpretar como true en lugar de como false. por eso se explicito. 
	  if(k - .01 >= .05){
	    segundo_decimalb = segundo_decimalb + .1;
	    local_flag = true;
	  }
	  local_flag = true;
	}
	k += .01;
      }     
      
    }

    if((i > decimalc) and (tercer_decimalc == 0)){
      tercer_decimalc = i - .1;

      bool local_flag = false;
      double k = .01;
      while(local_flag == false){
	cout<<"\n"<<" "<<tercer_decimalc + k<<" > "<<decimalc<<"\n";
	double evaluar = k + tercer_decimalc;
	if((decimalc < evaluar) and (decimalc != evaluar)){
	  cout<<"\n"<<" "<<tercer_decimalc + k<<" > "<<decimalc<<"\n";
	  if(k - .01 >= .05){
	    tercer_decimalc = tercer_decimalc + .1;
	    local_flag = true;
	  }
	  local_flag = true;
	}
	k += .01;
      }
    }
    i += .1;

    if((primer_decimala) and (segundo_decimalb) and (tercer_decimalc) != 0){
      bandera = true;
    }

  }

  a = redondeoa + primer_decimala;
  b = redondeob + segundo_decimalb;
  c = redondeoc + tercer_decimalc;
}
int main(){
    double a = 0, b = 0, c = 0;
    cin>>a>>b>>c;
    redondear(a, b, c);
    cout<<a<<" "<<b<<" "<<c;
}
