#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

//	char dict[27] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	string dict = " abcdefghijklmnopqrstuvwxyz";

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n; 
		int n1 = n, n2 = n, n3 = n;
		n1-=2;
		if(n1 > 26){ n1 = 26; }	
		n2 = n2 - n1 - 1;
		if(n2 > 26){ n2 = 26; }
		n3 = n3 - n2 - n1;
		cout << dict[n3] << dict[n2] << dict[n1] << endl;
	}
}
