#include <bits/stdc++.h>
using namespace std;

int main(){
	long long N;
	cin >> N;
	
	while(N != 1){
		cout << N << " ";
		if(N % 2 == 0){
			N = N / 2;
		} 
		else{
			N = (N * 3) + 1; 
		}
	}
	cout << 1;
}
