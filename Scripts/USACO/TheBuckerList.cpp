#include <bits/stdc++.h>
using namespace std;

struct rt
{
	int si, ti, bi;
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

//	freopen("blist.in", "r", stdin);
//	freopen("blist.out", "w", stdout);

	int N;
	cin >> N;
	
	//Arreglo del tipo rt, de una longitud N
	rt rtarr[N];

	for(int i = 0; i < N; i++)
	{
		cin >> rtarr[i].si >> rtarr[i].ti >> rtarr[i].bi;
	}
	
	//contador final de cubetas
	int fbc = 0; 
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(rtarr[j].ti <= rtarr[i].si)
			{
				int temp = max(0, (rtarr[i].bi - rtarr[j].bi));
				rtarr[i].bi = temp;
			}
		}
		for(int c = i + 1; c < N; c++)
		{
			if(rtarr[c].ti <= rtarr[i].si)
			{
				int temp = max(0, (rtarr[i].bi - rtarr[c].bi));
				rtarr[i].bi = temp;
			}
		}
		fbc += rtarr[i].bi; 
	}
	cout << fbc; 
}
