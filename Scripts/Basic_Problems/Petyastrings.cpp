#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string dict = {'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z'};

	string in1, in2;

	cin >> in1 >> in2;

	transform(in1.begin(), in1.end(), in1.begin(), ::tolower);
	transform(in2.begin(), in2.end(), in2.begin(), ::tolower);
	//in1 = tolower(in1);
	//in2 = tolower(in2);

	int c1 = 0;
	int c2 = 0;
	if(in1 != in2)
	{
		int i = 0;
		while(i < in1.length())
		{
			if(in1[i] != in2[i])
			{
				c1 = dict.find(in1[i]);
				c2 = dict.find(in2[i]);
				break;
			}
			i++;
		}	
//		cout << "c1: " << c1 << "\n";
//		cout << "c2: " << c2 << "\n";
 		if(c1 < c2)
		{
			cout << -1 << "\n";
		}
		if(c1 > c2)
		{
			cout << 1 << "\n";
		}
		if(c1 == c2)
		{
			cout << 1 << "\n";
		}
	}	
	else
	{
		cout << 0 << "\n";
	}
}
