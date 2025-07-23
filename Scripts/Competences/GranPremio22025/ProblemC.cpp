#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int MOD = 998244353;
    map<int, int> elevation_count;
    int count = 0;
    cin >> N;
    vector<int> elevations(N);
    for (int i = 0; i < N; ++i) {
        cin >> elevations[i];
    }
    for (int elevation : elevations) {
        if (elevation_count.find(elevation) != elevation_count.end()) {
            count = (count + elevation_count[elevation]) % MOD;
        }
        elevation_count[elevation]++;
    }
    cout << count + 1 << endl;
    return 0;
}


// prototipo de funcion para calcular el numero de formas diferentes que se puede hacer
int count_railways(int N, const vector<int>& elevations) {
    vector<int> dp(N + 1, 0);
    dp[0] = 1; 
    map<int, int> last_occurrence;
    for (int i = 1; i <= N; ++i) {
        dp[i] = dp[i - 1];  
        last_occurrence[elevations[i - 1]] = i;
    }

    return dp[N];
}
