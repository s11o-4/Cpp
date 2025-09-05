#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, k, a, b;
  cin >> n >> m >> k;
  map<int, vector<int>> pairs;

  vector<int> init_vector;

  for (int i = 1; i <= n; i++) {
    init_vector.push_back(i);
  }

  for(int i = 1; i <= n; i++) {
    pairs[i] = init_vector;
  }

  for (int i = 1; i < n; i++){
    cout << "key: " << i << endl;
    for (int j = 1; j < m; j++){
      cout << "valuee " << j << endl;
    }
  }

  for(int i = 0; i < m; i++){
    cin >> a >> b; 
    pairs[a].push_back(b);
    pairs[b].push_back(a);
  }

  for(int i = 2; i < n; i++){
    if(pairs[i].size() == n-1){
      cout << "impossible" << endl;
      return 0;
    }
  }
  cout << "possible" << endl;
}
