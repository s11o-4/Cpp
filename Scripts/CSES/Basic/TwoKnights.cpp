#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll N;
	cin >> N;

	for(ll i = 1; i <= N; i++){
		ll res = ((i * i) * (i * i - 1)) / 2;
		res -= 4*((i - 1) * (i - 2));
		cout << res << endl;
	}
}
