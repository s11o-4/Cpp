#include <bits/stdc++.h>
using namespace std;

struct rectangle
{
	int x1, y1, x2, y2;
	int area()
	{
		return ((x2 - x1) * (y2 - y1));
	}
} r1, r2;

int Overlapse(rectangle r1, rectangle r2)
{
	int width = max(0, min(r1.x2, r2.x2) - max(r1.x1, r2.x1));
	int heigh = max(0, min(r1.y2, r2.y2) - max(r1.y1, r2.y1));
	
	if(width >= (r1.x2 - r1.x1) or heigh >= (r1.y2 - r1.y1))
	{
		if(r1.x2 - r1.x1 != r1.y2 - r1.y1)
		{
			return width * heigh;
		}
	}
	return 0; 
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("billboard.in", "r", stdin);
	//freopen("billboard.out", "w", stdout);
	
	cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2;
	cin >> r2.x1 >> r2.y1 >> r2.x2 >> r2.y2;
	
	int result = r1.area() - Overlapse(r1, r2);
	cout << result; 
}
