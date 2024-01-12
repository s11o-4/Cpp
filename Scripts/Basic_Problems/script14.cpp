#include<bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(){
  long number1 = 0, number2 = 0;
  cin>>number1>>number2;
  
  string string_number1 = to_string(number1);
  string string_number2 = to_string(number2);

  int length1 = string_number1.size();
  int length2 = string_number2.size(); 

  int general_length = 0;

  if(length1 > length2){
    int missing = length1 - length2;
    for(int i = 0; i < missing; i++){
      string_number2.insert(0, "0");
    }
    general_length = length1;
  }
  if(length2 > length1){
    int missing = length2 - length1;
    for(int i = 0; i < missing; i++){
      string_number1.insert(0, "0");
    }
    general_length = length2;
  }

  if(length1 == length2){
    general_length = length1;
  }

  int acumulator = 0;
  int local_acumulator = 0;
  int sum = 0;
  int length_use = general_length - 1;
  for(int k = length_use; k >= 0; k--){
    int local_number1 = (string_number1[k] - 48);//le resto 48 porque los numeros en ascii van de 48 a 57
    int local_number2 = (string_number2[k] - 48);
    sum = local_number1 + local_number2 + local_acumulator;

    if(sum > 9){
      acumulator++;
      local_acumulator = 1;
    }else{
      local_acumulator = 0;
    }
  }

  cout<<acumulator;
}

/*
//contar hacia adelante o hacia atras depende que te convenga  debes convertir un numero dado en pares
//en otro y contando los movimientos mas rapidos
int main(){
  int digits = 0;
  cin>>digits;
  int real_digits = digits * 2;

  int prices[real_digits] = {};
  for(int i = 0; i < real_digits; i++){
    int temporal = 0;
    cin>>temporal;
    prices[i] = temporal;
  }

  //cout<<"\n";
  int final_result = 0;
  int numbers[10] = {0,9,8,7,6,5,4,3,2,1};
  for(int j = 0; j < real_digits; j+=2){
    if(j != real_digits - 1){
      int first_number = prices[j];
      int second_number = prices[j + 1];

      int first_distance = abs(first_number - second_number);
      //cout<<first_distance<<"\n";
      int second_distance = 0;

      if(first_number > second_number){
	second_distance = (9 - first_number) + (second_number + 1);
	//cout<<second_distance<<"\n";
      }
      else if(second_number > first_number){
	int counter = 0;
	for(int k = 0; k < 10; k++){
	  if(numbers[k] != second_number){
	    counter++;
	  }
	  else{
	    counter++;
	    break;
	  }
	}
	second_distance = ((first_number - 1) + counter);
	//cout<<"counter: "<<counter;
	//cout<<second_distance<<"\n";
      }

      if(first_distance < second_distance){
	//cout<<"\n"<<"first distance: "<<first_distance<<"\n";
	final_result += first_distance;
      }else{
	//cout<<"\n"<<"Second distance: "<<second_distance<<"\n";
	final_result += second_distance;
      }
    }
  }
  cout<<final_result;
}
*/

