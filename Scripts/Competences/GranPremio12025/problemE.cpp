#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= m) {
            res = i + 1;
            break;
        }
    }

    cout << res << endl;

    return 0;
}
