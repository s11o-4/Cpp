#include <bits/stdc++.h>
using namespace std;

int main()
{
	//std::cout << "NO" << std::endl;
	//std::cin >> n;

	int c;
	cin >> c;
	
	while(c--)
	{
		int n;
		cin >> n;
		int x = n, y = n, z = n;

		x = x - 1 - 1;
		if (x > 26) { x = 26; } 
		y = y - x - 1;
		if (y > 26) { y = 26; } 
		z = z - x - y;

		//cout << x << std::endl;
		//cout << y << std::endl;
		//cout << z << std::endl;

		char abecedario [26] = {'a','b','c','d','e'
			,'f','g','h','i','j','k','l','m','n','o','p','q',
				'r','s','t','u','v','w','x','y','z'};

		char lx = abecedario[x-1];
		char ly = abecedario[y-1];
		char lz = abecedario[z-1];
		cout << lz << ly << lx << std::endl;


		//string result = lx + ly + lz;
		//std::cout << lz << std::endl;
	}
}

