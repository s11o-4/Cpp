#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, result = 0, c = 0, temp;
	int c2 = 0;
	int fresult = 0;
	cin >> n;
	while(c < n){
		result = 0;
		c2 = 0;
		while(c2 < 3)
		{
			cin >> temp;
			if(temp == 1)
			{
				result++;
			}
			c2++;
		}	
		if(result >= 2)
		{
			fresult++;
		}
		c++;
	}
	cout << fresult << "\n";
} 

