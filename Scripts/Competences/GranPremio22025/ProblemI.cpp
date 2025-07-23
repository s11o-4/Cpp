#include <bits/stdc++.h>
using namespace std;

int main(){
  int q, x, k, result, min, max;
  cin >> q;
  while(q--){
    result = 1;
    cin >> x >> k;
    min = x; 
    max = x;
    while(max < k){
      result++;
      int temp = min;
      min = max;
      max = temp + max;
    }
    cout << result << endl;
  }
}
