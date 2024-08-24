#include<bits/stdc++.h>
using namespace std;

string s, t, censoring;

int main(){

	//freopen("censor.in", "r", stdin);
	//freopen("censor.out", "w", stdout);

	cin >> s >> t;
	for(int i = 0; i < s.length(); i++){
		censoring+=s[i];
		
		if(censoring.length() > t.length() && 
		   censoring.substr(censoring.length() - t.length()) == t){
			censoring.erase(censoring.length() - t.length(), t.length());
		}
	}
	cout << censoring; 
}
