#include <bits/stdc++.h>
using namespace std;

struct rectangle
{
	int x1, x2, y1, y2;
} r1, r2;

int Overlapse(rectangle r1, rectangle r2, int w, int h)
{
	int overx = max((int)0, min(r1.x2, r2.x2) - max((int)0, r1.x1));
	//cout << "overx " << overx << endl;
	int overy = max((int)0, min(r1.y2, r2.y2) - max((int)0, r1.y1));
	//cout << "overy " << overy << endl;

	if((r1.x2 + overx) <= w)
	{
		if((r1.y2 + overy) <= h)
		{
			return min(overx, overy); 
		}
		return overx; 
	}
	if((r1.y2 + overy) <= h)
	{
		return overy; 
	}
	else
	{
		return -1;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, w, h; 
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> w >> h;
		cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2 >> r2.x2 >> r2.y2;	
		cout << Overlapse(r1, r2, w, h) << endl;
	}	
}

