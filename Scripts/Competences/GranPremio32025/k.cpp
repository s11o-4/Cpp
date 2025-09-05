#include <bits/stdc++.h>
// problem k

using namespace std;


int main() {
    int n;
    cin >> n;

    for (int i = 0;i < n;i++) {
        long long a,b,c,d;
        long long result;
        cin >> a >> b >> c >> d;
        if (d >= b) {
            result = min(b - c,b-a);
        } else {
            result = min(d - a,d-c);
        }
        if (result <= 0) {
            cout << 0 << endl;
        } else {
            cout << result << endl;
        }

    }
}
