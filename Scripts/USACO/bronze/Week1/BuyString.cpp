#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, c0, c1, h;
	string s;
	cin >> t;
	while(t--)
	{
		cin >> n >> c0 >> c1 >> h >> s;
		int cant0 = 0, cant1 = 0; 
		for(int i = 0; i < n; i++)
		{
			if(s[i] == '0')
			{
				cant0++;
			}
			else
			{
				cant1++; 
			}
		}
		int prec1 = (cant0 * c0) + (cant1 * c1);
		int prec2;
		if(c0 < c1)
		{
			prec2 = ((cant0 + cant1) * c0) + (cant1 * h);
		}
		else
		{
			prec2 = ((cant0 + cant1) * c1) + (cant0 * h);  
		}
		cout << min(prec1, prec2) << endl; 
	}
}
