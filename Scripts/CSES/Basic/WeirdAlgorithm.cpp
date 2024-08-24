#include <bits/stdc++.h>

using namespace std;

int weirdAlgorithm(long long N){
	cout << N << " ";
	if(N == 1){
		return 1;
	}
	else if(N % 2 == 0){
		return weirdAlgorithm(N / 2);
	}
	else{
		return weirdAlgorithm((N * 3) + 1);
	}
}

int main(){
	int N;
	cin >> N;
	weirdAlgorithm(N);
}
