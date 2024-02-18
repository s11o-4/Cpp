#include <bits/stdc++.h>
using namespace std;

struct rectangle
{
	int x1, x2, y1, y2; 
}r1;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, W, H, w, h; 
	cin >> t;
	while(t--)
	{
		cin >> W >> H;
		cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2;
		cin >> w >> h; 
		int desx = int(1e9), desy = int(1e9);
		if(w + (r1.x2 - r1.x1) <= W)
		{
			//2, 3 ; 2
			desx = min(max(0, w - r1.x1), max(0, r1.x2 - (W - w)));
			//cout << "desx: " << desx << endl;
		}
		if(h + (r1.y2 - r1.y1) <= H)
		{
			desy = min(max(0, h - r1.y1), max(0, r1.y2 - (H - h)));
			//cout << "desy: " << desy << endl;
		}
		if(desx == int(1e9) and desy == int(1e9))
		{
			cout << -1 << endl;
		}
		else
		{
			cout << min(desx, desy) << endl;
		}
	}
}
