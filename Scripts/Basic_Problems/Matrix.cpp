#include<bits/stdc++.h>
using namespace std; 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x = 5, y = 5, i, j;
	bool flag = false;
	int temp;
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			cin >> temp;
			if(temp == 1)
			{
				flag = true;
				break;
			}
		}
		if(flag)
		{
			break;
		}
	}
	int result = abs(i - 2) + abs(j - 2);
	cout << result << "\n";
}
