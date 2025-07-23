#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	long long ingredientsN;

	cin >> ingredientsN;

	long long ingredients[ingredientsN]; 
	for (long long i = 0; i < ingredientsN; i++){
		cin >> ingredients[i]; 
	}

	long long ordersN;
	cin >> ordersN;
	long long orders[ordersN][ingredientsN];
	for(long long i = 0; i < ordersN; i++){
		for (long long j = 0; j < ingredientsN; j++){
			long long temp;
			cin >> temp;
			orders[i][j] = temp;
		}
	}

	///for(long long i = 0; i < ordersN; i++){
	///	for (long long j = 0; j < ingredientsN; j++){
	///		cout << "[" << orders[i][j] << "]";
	///	}
	///	cout << endl;
	///}

	long long day = 0;
	long long finalOrder = 0;

	bool flag = true;
	while(flag){
		day++;
		finalOrder = 0;
		for (long long i = 0; i < ordersN; i++){
			finalOrder = i + 1;
			for(long long j = 0; j < ingredientsN; j++){
				ingredients[j] = ingredients[j] - orders[i][j];  
				if (ingredients[j] < 0){
					flag = false;
					break;
				}
			}
			if(!flag) {
				break;
			}
		}
	}		

	cout << day << " " << finalOrder << endl;

	return 0;
}
