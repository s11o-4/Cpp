#include <bits/stdc++.h>
using namespace std;

string s, t, censoring; 
int main(){
	freopen("censor.in", "r", stdin);
	freopen("censor.out", "w", stdout);

	cin >> s >> t;

	for(int i = 0; i < s.size(); i++){
		censoring += s[i];
		if(censoring.size() >= t.size() &&
		   censoring.substr(censoring.size() - t.size()) == t){
			censoring.erase(censoring.size() - t.size());
		}
	}

	cout << censoring;
}
