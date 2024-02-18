#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	short int n;
	cin >> n;
	string result = "";
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 != 0)
		{
			result.append("I hate");
		}
		else
		{
			result.append("I love");
		}
		if(i != n)
		{
			result.append(" that ");
		}
		if(i == n)
		{
			result.append(" it");
		}
	}
	cout << result;
}
