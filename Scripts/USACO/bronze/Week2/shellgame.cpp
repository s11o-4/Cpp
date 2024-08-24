#include <bits/stdc++.h>
using namespace std;

int N, a, b, g;
int case1[4] = {0, 1, 0, 0}, 
	case2[4] = {0, 0, 1, 0}, 
	case3[4] = {0, 0, 0, 1};
int main(){ 

	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);

	cin >> N;
	while(N--){
		cin >> a >> b >> g;
		//1, 2, 1
		case1[a] = case1[b] ^ case1[a];
		case1[b] = case1[a] ^ case1[b];
		case1[a] = case1[a] ^ case1[b];
		//case1 = { 0, 0, 1, 0}

		case2[a] = case2[a] ^ case2[b];
		case2[b] = case2[b] ^ case2[a];
		case2[a] = case2[a] ^ case2[b];
		//case2 = { 0, 1, 0, 0}

		case3[a] = case3[a] ^ case3[b];
		case3[b] = case3[b] ^ case3[a];
		case3[a] = case3[a] ^ case3[b];
		//case3 = { 0, 0, 0, 1};

		case1[0] += case1[g]; // -> 0
		case2[0] += case2[g]; // -> 1
		case3[0] += case3[g]; // -> 0
	}
	case1[0] = max(case1[0], max(case2[0], case3[0]));
	cout << case1[0];
}
