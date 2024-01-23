#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int mod = x % 5;	
	int result = x / 5;
	if(mod != 0)
	{
		result++;
	}
	cout << result;
}
