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

#define eps 1e-12
#define inf 1000000000

int main () {
  double sum[30][30], a[30][30];
  int x, y;

  for (int X = 1; cin >> x >> y && x + y > 0; X++) {
    double dx = inf, dy = inf;
    int cx = -1, cy = -1;
    memset(sum, 0, sizeof(sum));

    for (int i = 0; i < x; i++)
      for (int j = 0; j < y; j++) {
        cin >> a[i][j];
        sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] + a[i][j] - sum[i][j];
      }
    for (int i = 0; i < x; i++) {
      double d = fabs(sum[i][y] - sum[x][y] + sum[i + 1][y]);

      if (d <= dx + eps) {
        cx = i;
        dx = d;
      }
    }
    for (int j = 0; j < y; j++) {
      double d = fabs(sum[x][j] - sum[x][y] + sum[x][j + 1]);

      if (d <= dy + eps) {
        cy = j;
        dy = d;
      }
    }

    cout << "Case " << X << ": center at (" << cx + 1 << ", " << cy + 1 << ")" << endl;
  }
}
