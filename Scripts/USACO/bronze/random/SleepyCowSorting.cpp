#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	freopen("sleepy.in", "r", stdin);
	freopen("sleepy.out", "w", stdout);

    int N;
    cin >> N;
    vector<int> cows(N);

    for (int i = 0; i < N; ++i) {
        cin >> cows[i];
    }

    int sortedIndex = N - 1;

    // Find the longest suffix that is sorted in increasing order.
    while (sortedIndex > 0 && cows[sortedIndex - 1] < cows[sortedIndex]) {
        --sortedIndex;
    }

    // The number of steps needed is the length of the unsorted prefix.
    cout << sortedIndex << endl;

    return 0;
}

