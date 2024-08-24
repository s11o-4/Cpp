#include<bits/stdc++.h>
using namespace std;

int main(){
	int a = 10, b = 11;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}
