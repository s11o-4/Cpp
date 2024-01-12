#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int i = 0;
	string input = "";
	string results = "";
	string middleresult = "";
	int c;
	char aux;
	while(i < n){
		cin >> input;
		aux = input[1];
		c = 1;
		if(input.size() > 10) 
		{
			while(input[input.size() - 1] != aux)
			{
				c++;
				aux = input[c];
			}
			middleresult = to_string(input.size() - 2);
			results = input[0] + middleresult + input[input.size() - 1];
			cout << results << "\n";
		}
		else
		{
			cout << input << "\n";
		}
		i++;
	}
}
