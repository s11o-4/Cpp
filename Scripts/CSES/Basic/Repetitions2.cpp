#include <bits/stdc++.h>
using namespace std;

string input;
int main(){
	cin >> input;
	int res = 1, count = 0;
	for(int i = 1; i < input.size(); i++){
		if(input[i] == input[i -  1]){
			count++;
		}
		res = max(res, count);
	}
	cout << res << endl;
}
