#include <bits/stdc++.h>
using namespace std;

int main() {
	string line1, line2;

	//freopen("censor.in", "r", stdin);
	//freopen("censor.out", "w", stdout);

	cin >> line1 >> line2;

	int found = 0;
	for (int i = 0; i < line1.length(); i++) {

		if (line1[i] == line2[0]) {
			found = 0;
			for (int j = 0; j < line2.length(); j++) {
				if (line1[j+i] != line2[j]) {
					found = 1;
					break;
				}
			}
			if (found == 0) {
				line1.erase(i,line2.length());
				if (i >= line2.length()) {
					i = i - line2.length();
				}
				else {
					i = 0;
				}
			}
		}
	}
	cout << line1;
}
