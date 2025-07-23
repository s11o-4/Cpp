#include<bits/stdc++.h>
using namespace std;

int main(){
	string S;
	int N;
	string res = "Yes";
	cin >> S; 
	cin >> N;

	while(N--){
		string tempInput;
		cin >> tempInput;
		for(int i = 0; i < tempInput.length(); i+=S.length()){
			string compr = tempInput.substr(i, S.length());
			if (compr != S){
				res = "No";
				break;
			}
		}
		cout << res << endl;
		res = "Yes";
	}
}
