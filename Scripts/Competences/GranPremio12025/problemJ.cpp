#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  bool impar = false;
  int n, ans = 0;
  string s;
  map<char, int> m;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    char c = s[i];
    m[c]++;
  }
  for (auto &par : m) {
    if (par.second % 2 == 0) {
      ans += par.second;
    } else {
      ans += par.second - 1;
      impar = true;
    }
  }
  if (impar){
    ans++;
  }
  cout << ans << endl;
}
