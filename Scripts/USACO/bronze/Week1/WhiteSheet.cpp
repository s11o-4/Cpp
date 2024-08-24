#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
	long long int x1, y1, x2, y2;
	long long int area()
	{
		return max((long long)0, (x2 - x1)) * max((long long)0, (y2 - y1));
	}
};

Rectangle Overlapse(Rectangle r1, Rectangle rx)
{
	//cout << "r1.x1: " << r1.x1 << " r1.y1: " << r1.y1 << " rx.x1: " << rx.x1 << " rx.y1 : " << rx.y1<< endl; 
	//int overx = max(0, min(r1.x2, rx.x2) - max(r1.x1, rx.x1));
	//cout << "overx : " << overx << endl;
	//int overy = max(0, min(r1.y2, rx.y2) - max(r1.y1, rx.y1));
	//cout << "overy : " << overy << endl;
	Rectangle r_inter;
	r_inter.x2 = min(r1.x2, rx.x2);
	r_inter.x1 = max(r1.x1, rx.x1);
	r_inter.y2 = min(r1.y2, rx.y2);
	r_inter.y1 = max(r1.y1, rx.y1);
	return r_inter;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Rectangle r1, r2, r3, r1_r2, r1_r3;

	cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2;
	cin >> r2.x1 >> r2.y1 >> r2.x2 >> r2.y2;
	cin >> r3.x1 >> r3.y1 >> r3.x2 >> r3.y2;

	//	cout << "Area " << r1.area() << endl;
	//	cout << "Overlapse: del primero: " << overlapse(r1, r2) << endl;
	//	cout << "Overlapse del segundo: " << overlapse(r1, r3) << endl;

	r1_r2 = Overlapse(r1, r2);
	//cout << "r1_r2: " << r1_r2.area() << endl; 
	r1_r3 = Overlapse(r1, r3);
	//cout << "r1_r3: " << r1_r3.area() << endl; 

	Rectangle r2_r3 = Overlapse(r1_r2, r1_r3);
	//cout << "r2_r3: " << r2_r3.area() << endl; 

	//cout << "r1.area: " << r1.area() << endl;
	long long int res = r1.area() - ((r1_r2.area() + r1_r3.area())) + r2_r3.area();

	if(res <= 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
}
