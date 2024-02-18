#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	map<int, string> dictio;
	dictio[1] = "a";
	dictio[2] = "b";
	dictio[3] = "c";
	dictio[4] = "d";
	dictio[5] = "e";
	dictio[6] = "f";
	dictio[7] = "g";
	dictio[8] = "h";
	dictio[9] = "i";
	dictio[10] = "j";
	dictio[11] = "k";
	dictio[12] = "l";
	dictio[13] = "m";
	dictio[14] = "n";
	dictio[15] = "o";
	dictio[16] = "p";
	dictio[17] = "q";
	dictio[18] = "r";
	dictio[19] = "s";
	dictio[20] = "t";
	dictio[21] = "u";
	dictio[22] = "v";
	dictio[23] = "w";
	dictio[24] = "x";
	dictio[25] = "y";
	dictio[26] = "z";
	int t;
	cin >> t;
	while(t--)
	{
		string result = "";
		int nums[3] = {1, 1, 1};
		int n;
		cin >> n;
		for(int c = 2; c >= 0; c--)
		{
			for(int i = 2; i <= 26; i++)
			{
				if(nums[0] + nums[1] + nums[2] == n)
				{
					break;
				}
				nums[c]++; 
			}	
		}
		result += dictio[nums[0]] + dictio[nums[1]] + dictio[nums[2]];
		cout << result << endl;
	}
}
