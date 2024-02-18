#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int result[n + 1];
	for(int i = 1; i <= n; i++)
	{
		int temp; 
		cin >> temp; 
		result[temp] = i;
	}
	for(int i = 1; i <= n; i++)
	{
		cout << result[i] << " "; 
	}
}
