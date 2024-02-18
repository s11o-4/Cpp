#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, temp1 = 0, temp2; 
	int groupcounter = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> temp2;
		if(temp1 != temp2) 
		{
			groupcounter++;
		}
		temp1 = temp2;
	}
	cout << groupcounter;
}
