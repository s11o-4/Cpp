#include "bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	int c = 0;
	while(c < k)
	{
		if(n % 10 == 0)
		{
			n = n / 10;
		}
		else
		{
			n--;
		}
		c++;
	}
	cout << n;
}
