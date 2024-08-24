#include <bits/stdc++.h>

using namespace std;

void NumberSpiral(long long Y, long long X)
{
	if (Y > X) {
		long long ans = (Y - 1) * (Y - 1);
		long long add = 0;

		cout << "ans: " << ans << endl;

		if (Y % 2 != 0) {
			add = X;
			cout << "add Y % 2: " << add << endl;
		}
		else {
			add = 2 * Y - X;
			cout << "add 2 * Y - X: " << add << endl;
		}
		cout << (ans + add) << endl;
	}
	else {
		long long ans = (X - 1) * (X - 1);
		long long Nadd = 0;

		if (X % 2 == 0) {
			Nadd = Y;
		}
		else {
			Nadd = 2 * X - Y;
		}
		cout << (ans + Nadd) << endl;
	}
}

int main()
{
	int N; 
	cin >> N;
	while(N--){
		int x, y;
		cin >> x >> y;
		NumberSpiral(x, y);
	}
}
