#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, h, counter = 0;
	cin >> n >> h;
	for(int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if(temp > h)
		{
			counter += 2;
		}
		else
		{
			counter++;
		}
	}
	cout << counter;
}
