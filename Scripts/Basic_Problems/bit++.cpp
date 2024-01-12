#include<bits/stdc++.h>
using namespace std; 

int main()
{
	int x = 0;
	int n; 
	cin >> n;
	string opr;
	for(int i = 0; i < n; i++)
	{
		cin >> opr;
			if((opr[0] == '+' and opr[1] == '+') or (opr[1] == '+' and opr[2] == '+'))
			{
				x++;
			}
			if((opr[0] == '-' and opr[0] == '-') or (opr[1] == '-' and opr[2] == '-'))
			{
				x--;
			}
	}
	cout << x << "\n";
}
