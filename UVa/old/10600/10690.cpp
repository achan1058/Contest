#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <queue>
#include <sstream>
using namespace std;

int a[60][6000];

int main () {
  int t[200], n, m;

  while (cin >> n >> m) {
    int total = 0;
    for (int i = 0; i < n + m; i++) {
      cin >> t[i];
      total += t[i];
    }
    memset(a, 0, sizeof(a));
    a[0][3000] = true;

    for (int x = 0; x < n + m; x++) {
      for (int i = min(n, x + 1); i > max(0, x - m); i--) {
        for (int j = i * -50 + 3000; j <= i * 50 + 3000; j++)
          a[i][j + t[x]] |= a[i - 1][j];
      }
    }

    int M = INT_MIN, m = INT_MAX;

    for (int i = n * -50 + 3000; i <= n * 50 + 3000; i++) {
      if(a[n][i]) {
        int s = i - 3000;
        M = max(M, s * (total - s));
        m = min(m, s * (total - s));
      }
    }

    cout << M << ' ' << m << endl;
  }
}
