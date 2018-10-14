#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <queue>
using namespace std;

int main () {
  int n, r, k;
  int a[50][25][25][2];

  while (cin >> n >> r >> k) {
    memset(a, 0, sizeof(a));
    a[0][0][0][0] = 1;
    for (int x = 0; x < 2 * n; x ++) {
      for (int y = 0; y <= n; y ++) {
        for (int p = 0; p <= r; p ++) {
          if (y > 0) {
            if (y == k)
              a[x + 1][y - 1][p + 1][1] += a[x][y][p][0];
            else
              a[x + 1][y - 1][p][1] += a[x][y][p][0];

            a[x + 1][y - 1][p][1] += a[x][y][p][1];
          }

          a[x + 1][y + 1][p][0] += a[x][y][p][0];
          a[x + 1][y + 1][p][0] += a[x][y][p][1];
        }
      }
    }

    cout << a[2 * n][0][r][1] << endl;
  }
}
