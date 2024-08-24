#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);
	
	vector<int> input(3);

	for(int i = 0; i < 3; i++){
		cin >> input[i];
	}

	sort(input.begin(), input.end());

	int min_mov = 2;
	int max_mov = max(input[1] - input[0], input[2] - input[1]) - 1;
	
	if(input[1] - input[0] == 2 || input[2] - input[1] == 2){
		min_mov = 1;
	}
	if(input[1] - input[0] == 1 && input[2] - input[1] == 1){
		min_mov = 0;
	}

	cout << min_mov << endl;
	cout << max_mov << endl;
}
