#include <bits/stdc++.h>
// problem k

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    while(n--){
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