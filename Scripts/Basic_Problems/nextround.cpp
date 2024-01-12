#include<bits/stdc++.h>
using namespace std;

int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	int result = 0;
	cin >> n >> k;
	int temp[n];
	for(int i = 0; i < n; i++){
		cin >> temp[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(temp[k - 1] <= temp[i] and temp[i] > 0)
		{
			result++;
		}
	}
	cout << result << "\n";
}
