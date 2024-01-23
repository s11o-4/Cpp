#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int k, n, w;
	cin >> k >> n >> w;
	// cout << "n : " << n << endl;
	int finalprice = (float(w) / 2) * (k + (k * w));
	// cout << "finalprice: "<< finalprice << endl;
	int frien = max(0, (finalprice - n));
	cout << frien;
}
// Al recibir datos del tipo float redondea los numeros!
// 1000 500499999 1000
//

//#include <bits/stdc++.h> 
//using namespace std;
// 
//int main()
//{
//	float k, n, w;
//	cin >> k >> n >> w;
//	float finalprice = (float)(w / 2) * (k + (k * w));
//	float frien = max((float)0, float(finalprice - n));
//	cout << (int)frien;
//}
