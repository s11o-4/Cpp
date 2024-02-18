#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string in1, in2, result = "";
	cin >> in1 >> in2;
	
	for(int i = 0; i < in1.length(); i++)
	{
		if(in1[i] == in2[i])
		{
			result.append("0");
		}
		else
		{
			result.append("1");	
		}
	} 
	cout << result; 
}
