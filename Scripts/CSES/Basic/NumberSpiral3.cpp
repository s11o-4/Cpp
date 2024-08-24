#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll formula(ll n){
	n--;
	return ((n * n)  + n + 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll N;
	cin >> N;
	while(N--){
		ll y, x;
		cin >> y >> x;
		
		ll res;
		if(x > y){
			if(x % 2 != 0){
				res = formula(x) + (x - y);
			}
			else{
				res = formula(x) - (x - y);
			}
		}
		else {
			if( y % 2 != 0){
				res = formula(y) - (y - x);
			}
			else{
				res = formula(y) + (y - x);
			}
		}

		cout << res << endl;
	}
}
