#include<bits/stdc++.h>
using namespace std;
/*
 *Found the MCM
int main(){
  int numa = 0, numb = 0, result = 0;
  cin>>numa>>numb;
  while(numa != numb){
    if(numa > numb){
      numa = numa - numb;
    }else{
      numb = numb - numa;
    }
  }
  result = numa;
  cout<<result;
}

*/
/*
 * Count decending in 2 until 0
int main(){
  int number = 0;
  cin>>number;

  cout<<number<<" ";
  while(number != 0){
    number -= 2;
    cout<<number<<" ";
  }
}
*/

/*
 * counting ascending but from 1
int main(){
  int number = 0;
  cin>>number;
  int i = 1;
  while(i != number){
    cout<<i<<" ";
    i+=2;
  }
  cout<<i<<" ";
}
*/

int main(){
  int height = 0, stairs = 0, i = 1;
  cin>>height>>stairs;
  do{
    cout<<i<<" ";
    i+=stairs;
  }while(i < height);
}
