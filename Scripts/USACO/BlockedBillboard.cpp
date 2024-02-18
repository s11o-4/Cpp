#include <bits/stdc++.h>
using namespace std;
	
struct rectangle
{
	int x1, y1, x2, y2;
	int area()
	{
		return ((x2 - x1) * (y2 - y1));
	}
} r1, r2, r3;

int Overlap(rectangle rx, rectangle r3)
{
	int width = max(0, min(r3.x2, rx.x2) - max(rx.x1, r3.x1));
	//cout << "width: " << width << endl; 
	int height = max(0, min(r3.y2, rx.y2) - max(rx.y1, r3. y1));
	int overlap = width * height;
	//cout << "overlap: " << overlap << endl; 
	return overlap;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

//	freopen("billboard.in", "r", stdin);
//	freopen("billboard.out", "w", stdout);

	cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2;
	cin >> r2.x1 >> r2.y1 >> r2.x2 >> r2.y2;
	cin >> r3.x1 >> r3.y1 >> r3.x2 >> r3.y2;

	int r1area = r1.area();
	int r2area = r2.area();
	int r3area = r3.area();

	r1area = r1area - Overlap(r1, r3);
	r2area = r2area - Overlap(r2, r3);
	
	cout << r1area + r2area;
}
