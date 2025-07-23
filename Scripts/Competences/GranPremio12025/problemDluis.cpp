#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int m; // cant ingredientes
  cin >> m;
  long long ing[m];
  for (int i = 0; i < m; i++) {
    cin >> ing[i];
  }

  int n; // cant ordenes
  cin >> n;

  long long burgers[m][n];

  long long total[m];
  for (int i = 0; i < m; i++) {
    total[i] = 0;
  }

  for (int j = 0; j < n; j++) {
    for (int i = 0; i < m; i++) {
      long temp = 0;
      cin >> temp;
      total[i] = total[i] + temp;
      burgers[i][j] = temp;
    }
  }

  long long calc[m];
  long long low = LLONG_MAX;
  // double low = DBL_MAX;
  for (int i = 0; i < m; i++) {
    calc[i] = (long)ing[i] / total[i];
    if (calc[i] < low) {
      low = (long)calc[i];
    }
  }
  long long ingf[m];
  for (int i = 0; i < m; i++) {
    ingf[i] = ing[i] - total[i] * low;
  }

  int cosa = low + 1;

  bool fin = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ingf[j] = ingf[j] - burgers[j][i];
    }
    for (int j = 0; j < m; j++) {
      if (ingf[j] < 0) {
        fin = true;
        cout << cosa << " " << (i + 1) << endl;
        break;
      }
    }
    if (fin == true) {
      break;
    }
  }

  return 0;
}
