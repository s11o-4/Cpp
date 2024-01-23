#include <bits/stdc++.h>
using namespace std;

int main()
{
	int year;
	cin >> year;
	bool flag = false;
	int counter = 0;
	while(!flag)
	{
		year++;
		string year_string = to_string(year);
		for(int i = 0; i < 4; i++)
		{
			if(year_string.find(year_string[i], (i + 1)) != -1)
			// Es incongruente que pases como argumento un tercer argumento
			// ya que no puedes buscar algo que exceda un caracter
			{
				counter = 0;
				break;
			}
			else
			{
				counter++;
			}
		}
		if(counter == 4)
		{
			cout << year;
			flag = true;
		}
	}
}
