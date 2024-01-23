#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string input;
	cin >> n >> input;
	int anton = 0; int danik = 0;
	for(int i = 0; i < input.length(); i++)
	{
		if(input[i] == 'A')
		{
			anton++;
		}	
		else
		{
			danik++;
		}	
	}
	if(anton > danik)
	{
		cout << "Anton";
	}
	else if(danik > anton)
	{
		cout << "Danik";
	}
	else
	{
		cout << "Friendship"; 
	}	
}
