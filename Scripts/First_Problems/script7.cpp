#include<bits/stdc++.h>
using namespace std;

int main(){
  int max = 0, sum_total = 0, families = 0;
  bool flag = false;
  cin>>max;

  do{
    cin>>families;
    sum_total += families;
    if (sum_total > max){
      sum_total = sum_total - families;
      flag = true;
    } 
    else if(sum_total == max){
      flag = true;
    }
  }while(flag != true);

  cout << sum_total;
}
