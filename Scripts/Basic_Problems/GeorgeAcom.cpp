#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, p, q, c = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> p >> q;
		if(q - p >= 2)
		{
			c++;
		}
	}
	cout << c;
}
