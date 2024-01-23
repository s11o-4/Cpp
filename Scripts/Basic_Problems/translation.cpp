#include <bits/stdc++.h>
using namespace std;

int main()
{
	string in1, in2;
	cin >> in1 >> in2;
	reverse(in1.begin(), in1.end());
	if(in1 != in2)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}
