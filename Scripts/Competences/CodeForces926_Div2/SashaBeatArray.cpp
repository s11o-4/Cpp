#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int min = arr[0];
		sort(arr, arr + n);
//		for(int i = 0; i < n; i++)
//		{
//			if(arr[i] < min)
//			{
//
//			}
//		}
//		for(int i = 0; i < n; i++)
//		{
//			cout << "[" << arr[i] << "]";
//		}
		int result = 0;
		for(int i = 1; i < n; i++)
		{
			result += (arr[i] - arr[i - 1]);	
			//cout << "result vale: " << result << endl;
		}
		cout << result << endl;
	}
}
