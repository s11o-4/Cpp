#include "bits/stdc++.h"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string word;
	cin >> word;
	int uppercounter = 0, lowercounter = 0;
	for(int i = 0; i < word.length(); i++)
	{
		if(islower(word[i]))
		{
			lowercounter++;
		}
		else
		{
			uppercounter++;
		}
	}
	if(uppercounter > lowercounter)
	{
		transform(word.begin(), word.end(), word.begin(), ::toupper);
	}
	else
	{
		transform(word.begin(), word.end(), word.begin(), ::tolower);
	}
	cout << word;
}
