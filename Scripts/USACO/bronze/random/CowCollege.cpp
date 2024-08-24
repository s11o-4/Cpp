#include <bits/stdc++.h>
using namespace std;

map<long long, long long> input;
int main(){
	long long N;
	cin >> N;

	for(long long i = 0; i < N; i++){
		long long temp;
		cin >> temp;
		input[temp]++;
	}
	
	map<long long, long long> :: iterator it = input.end();
	pair<long long, long long> cows_highest_income = { 0 , 0 };
	long long max_income = 0;
	while(it != input.begin()){
		it--;
		long long aux = it->first * it->second;
		if(aux > max_income){
			cows_highest_income.first = it -> first;
			cows_highest_income.second = it -> second;
			max_income = aux;
			continue;
		}
		if((aux + (it->first * cows_highest_income.second) >= max_income)){
			max_income = aux + (it -> first * cows_highest_income.second);
			cows_highest_income.first = it -> first;
			cows_highest_income.second = (it -> second) + cows_highest_income.second;
			continue;
		}
	}

	cout << max_income << " " << cows_highest_income.first << endl;
}
