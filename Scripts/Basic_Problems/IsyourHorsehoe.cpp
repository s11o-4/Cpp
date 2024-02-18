#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[4];
	int temp, result = 0;
	for(int i = 0; i < 4; i++)
	{
		cin >> arr[i];
		for(int j = 0; j < i; j++)
		{
			if(arr[j] == arr[i])
			{
				result++;
				break;
			}
		}
	}
	cout << result;
}
