#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long K;
    cin >> N >> K;

    vector<int> right;
    vector<int> left;
    
    int aux;

    for (int i = 0; i < N; i++){
        cin >> aux;
        right.push_back(aux);
    }

    for (int i = 0; i < N; i++){
        cin >> aux;
        left.push_back(aux);
    }

    sort(left.begin(), left.end());

    sort(right.begin(), right.end());

    int res = 0;
    int n_left = N;
    long acc = 0;
    for (int i = 0; i < N; i++){
        acc += right[i] + left[i];
        if (acc <= K && n_left > 0){
            res++;
            K -= acc;
            n_left -= 1;
        }
        if (n_left <= 0 || K <= 0) {
            break;
        }
        acc = 0;
    }
    cout << res << endl;
}
