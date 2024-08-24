#include <bits/stdc++.h>

using namespace std;

struct Measurement {
	int day;
	string cow;
	int change;
};

// Comparator to sort measurements by day
bool compareMeasurements(const Measurement &a, const Measurement &b) {
	return a.day < b.day;
}

int main() {
	//freopen("measurement.in", "r", stdin);
	//freopen("measurement.out", "w", stdout);

	int N;
	cin >> N;

	vector<Measurement> measurements(N);

	for (int i = 0; i < N; ++i) {
		cin >> measurements[i].day >> measurements[i].cow >> measurements[i].change;
	}

	// Sort measurements by day
	sort(measurements.begin(), measurements.end(), compareMeasurements);

	// Initial milk output for each cow
	map<string, int> milkOutput = {{"Bessie", 7}, {"Elsie", 7}, {"Mildred", 7}};

	int displayChangeCount = 0;
	map<string, bool> displayStatus = {{"Bessie", true}, {"Elsie", true}, {"Mildred", true}};

	for (const auto &m : measurements) {
		// Update milk output for the cow
		milkOutput[m.cow] += m.change;

		// Determine the highest milk output
		int highestOutput = max({milkOutput["Bessie"], milkOutput["Elsie"], milkOutput["Mildred"]});

		// Check if the display changes
		map<string, bool> newDisplayStatus = {
			{"Bessie", milkOutput["Bessie"] == highestOutput},
			{"Elsie", milkOutput["Elsie"] == highestOutput},
			{"Mildred", milkOutput["Mildred"] == highestOutput}
		};

		if (newDisplayStatus != displayStatus) {
			displayChangeCount++;
			displayStatus = newDisplayStatus;
		}
	}

	cout << displayChangeCount << endl;

	return 0;
}

