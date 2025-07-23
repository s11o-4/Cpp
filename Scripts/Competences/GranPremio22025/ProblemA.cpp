#include <bits/stdc++.h>

using namespace std;

int main() {
    int L, R, K;
    cin >> L >> R >> K;

    int counter = 0;

    for (int i = L; i <= R; i++) {
        if ( i % K == 0) {
            counter++;
         }
    }
    cout << counter << endl;
}
