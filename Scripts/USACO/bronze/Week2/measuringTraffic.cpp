#include <bits/stdc++.h>
using namespace std;

const int MAX_VALUE = 1e9;

int main() {

	//freopen("traffic.in", "r", stdin);
	//freopen("traffic.out", "w", stdout);

	int num_miles;
	cin >> num_miles;

	vector<string> segment_type(num_miles);
	vector<int> start(num_miles);
	vector<int> end(num_miles);

	for (int m = 0; m < num_miles; m++) {
		cin >> segment_type[m] >> start[m] >> end[m];
	}

	int low = 0;
	int high = MAX_VALUE;
	for (int m = num_miles - 1; m >= 0; m--) {
		if (segment_type[m] == "none") {
			low = max(low, start[m]);
			high = min(high, end[m]);
		} else if (segment_type[m] == "off") {
			low += start[m];
			high += end[m];
		} else if (segment_type[m] == "on") {
			low -= end[m];
			high -= start[m];
			low = max(0, low);
		}
	}

	cout << low << ' ' << high << endl;

	low = 0;
	high = MAX_VALUE;

	for (int m = 0; m < num_miles; m++) {
		if (segment_type[m] == "none") {
			low = std::max(low, start[m]);
			high = std::min(high, end[m]);
		} else if (segment_type[m] == "on") {
			low += start[m];
			high += end[m];
		} else if (segment_type[m] == "off") {
			low -= end[m];
			high -= start[m];
			low = max(0, low);
		}
	}

	cout << low << ' ' << high << endl;
}
