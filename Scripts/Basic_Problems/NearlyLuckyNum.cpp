#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string input_string;
	cin >> input_string;
	int i = 0, c = 0;
	bool flag = false;
	while(i < input_string.length())
	{
		if(input_string[i] == '7' or input_string[i] == '4')
		{
			c++;
		}	
		if(c == 4 or c == 7) 
		{
			flag = true;
		}	
		else
		{
			flag = false;
		}
		i++;
	}
	if(!flag)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}	
}
