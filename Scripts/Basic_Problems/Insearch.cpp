#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 0;
	bool flag = false;
	while(i < n)
	{
		int temp;
		cin >> temp;
		if(temp == 1)
		{
			cout << "HARD";
			flag = true;
			break;
		}
		i++;
	}
	if(!flag)
	{
		cout << "EASY";
	}
}
