//no resuelto


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, b, h1, h2, n;
    long double n_real;
    cin >> t;
    while(t--) {
        cin >> h1 >> h2 >> b;
        n_real = log((double)h2/h1)/log((double)(b-1)/b);
        n = (int)ceil(n_real);
        cout << n << endl;
    }
}