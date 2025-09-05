#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long sum = 0;
    int n, a;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> a;
        sum += (long long) a * i * (n - i + 1);
    }
    
    cout << sum << endl;
    return 0;
}
