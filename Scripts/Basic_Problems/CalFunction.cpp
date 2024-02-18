#include <bits/stdc++.h>
using namespace std;

//tiene truco... -> Intentalo con un simple bucle
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long n, result; 
	cin >> n;
	
	if(n % 2 == 0)
	{
		result = n / 2;
	}
	else
	{
		result = (n - 1) / 2;
		result = result - n;
	}
	cout << result;
}
