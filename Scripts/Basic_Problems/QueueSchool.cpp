#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t;
	string queue;
	cin >> n >> t >> queue;
	int c = 0;
	while(c < t)
	{
		for(int i = 0; i < queue.length() - 1; i++)
		{
			if(queue [i] == 'B' and queue [i + 1] == 'G')
			{
				queue[i] = 'G';
				queue[i + 1] = 'B';
				i++;
			}
		}
		c++;
	}
	cout << queue;
}
