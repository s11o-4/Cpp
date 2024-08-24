#include<bits/stdc++.h>
using namespace std;

unsigned long long gauss;
int main(){
	long long N;
	cin >> N;
	gauss = (N * (N + 1)) / 2;
	N--;
	while(N--){
		int temp;
		cin >> temp;
		gauss -= temp;
	}
	cout << gauss;
}
