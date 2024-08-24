#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	while(N--){
		ll y, x;
		cin >> y >> x;
	
		ll prev = 0;  
		if(y > x){
			prev = (y - 1) * (y - 1);
			if(y % 2 == 0){
				prev += (2 * y - x);
			}
			else{
				prev += x;
			}
		}
		else{
			prev = (x - 1) * (x - 1);
			if(x % 2 == 0){
				prev += (y);
			}
			else{
				prev += (2 * x - y);
			}
		}
		cout << prev << endl;
	}
}
