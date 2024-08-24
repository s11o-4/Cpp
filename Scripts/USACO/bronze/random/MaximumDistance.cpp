#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> x(N), y(N);
	for (int i = 0; i < N; ++i) {
		cin >> x[i];
	}
	for (int i = 0; i < N; ++i) {
		cin >> y[i];
	}

	int maxDistSquared = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			int dx = x[j] - x[i];
			int dy = y[j] - y[i];
			int distSquared = dx * dx + dy * dy;
			maxDistSquared = max(maxDistSquared, distSquared);
		}
	}

	cout << maxDistSquared << endl;

	return 0;
}
