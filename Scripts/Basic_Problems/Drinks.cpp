#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	float result = 0;
	for(int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		result += temp;
	}
	result = result / n; 
	cout << result;
}
