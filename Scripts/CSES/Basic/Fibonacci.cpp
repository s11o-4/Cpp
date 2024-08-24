#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	cout << n << endl;
	if(n <= 1){
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main(){
	cout << fibonacci(5) << endl;
}
