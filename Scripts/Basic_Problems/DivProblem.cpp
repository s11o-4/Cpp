#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; 
	cin >> n;

	//Solucion 1
	// b - a % b
//	for(int i = 0; i < n; i++)
//	{
//		int temp1, temp2, result = 0;
//		cin >> temp1 >> temp2;
//		if(temp1 % temp2 != 0)
//		{
//			result = temp2 - temp1 % temp2;
//		}
//		cout << result << endl; 
//	}
	//Solucion 2 (mas rapida)
	// (ceil(a / b) * a) - b
	for(int i = 0; i < n; i++)
	{
		int temp1, temp2, result = 0;
		cin >> temp1 >> temp2;
		if(temp1 % temp2 != 0)
		{
			temp2 = temp2 * ((temp1 / temp2) + 1);
			result = temp2 - temp1;
		}
		cout << result << endl;
	}
}
