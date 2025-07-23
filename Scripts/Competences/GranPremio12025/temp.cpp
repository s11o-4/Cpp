ude <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int ingredientsN;

	cin >> ingredientsN;

	int ingredients[ingredientsN]; 
	for (int i = 0; i < ingredientsN; i++){
		cin >> ingredients[i]; 
	}

	int ordersN;
	cin >> ordersN;
	int toReduce[ingredientsN] = {0};
	for(int i = 0; i < ordersN; i++){
		for (int j = 0; j < ingredientsN; j++){
			int temp;
			cin >> temp;
			toReduce[j] = toReduce[j] + temp;
		}
	}

	int day = 1;
	int finalOrder = 1;
	
	bool flag = true;
	while(flag){
		for(int i = 0; i < ingredientsN; i++){
			ingredients[i] = ingredients[i] - toReduce[i];
			if (ingredients[i] <= 0){
				flag = false;
				break;
			}
		}
		day++;
	}	

	cout << "day: " << day << endl;

    return 0;
}
