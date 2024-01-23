#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, counter = 0, output = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		counter -= temp;
		cin >> temp;
		counter += temp;
		output = max(counter, output);			
	}
	cout << output;
}
