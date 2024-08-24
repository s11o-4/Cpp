#include <bits/stdc++.h>
using namespace std;

vector<int> numbers;
int main(){
	int N;
	cin >> N;
	
	N-=1;

	while(N--){
		int temp;
		cin >> temp;
		numbers.push_back(temp);
	}

	sort(numbers.begin(), numbers.end());
	
	int i = 0;

	while(i < numbers.size()){
		if(numbers[i] != (i + 1)){
			break;
		}
		i++;
	}	

	cout << i + 1 << endl;
}
