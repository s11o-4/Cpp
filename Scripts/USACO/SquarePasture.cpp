#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

//	freopen("square.in", "r", stdin);
//	freopen("square.out", "w", stdout);

	int arrx[4];
	int arry[4];
	for(int i = 0; i < 4; i++)
	{
		cin >> arrx[i];
		cin >> arry[i]; 
	}	
	int minx = arrx[0];
	int maxx = arrx[0];
	int miny = arry[0];
	int maxy = arry[0]; 
	for(int i = 0; i < 4; i++)
	{
		if(arrx[i] < minx)
		{
			minx = arrx[i];
		}
		if(arry[i] < miny)
		{
			miny = arry[i];
		}
		if(arrx[i] > maxx)
		{
			maxx = arrx[i]; 
		}
		if(arry[i] > maxy)
		{
			maxy = arry[i];
		}
	}
	if(maxy <= (maxx - minx + miny))
	{
		cout << pow((maxx - minx), 2);
	}
	else
	{
		cout << pow((maxy - miny), 2);
	}
}
