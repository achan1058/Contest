#include <iostream>
using namespace std;

int a[1001][1001];

int main () {
  int r, c, n, N, r1, c1;

  cin >> N;

  for (int x = 0; x < N; x ++) {
    cin >> r >> c >> n;

    for (int i = 0; i <= r; i ++)
      a[i][0] = 0;
    for (int j = 0; j <= c; j ++)
      a[0][j] = 0;
    for (int i = 1; i <= r; i ++)
      for (int j = 1; j <= c; j ++)
        a[i][j] = 1;
    for (int i = 0; i < n; i ++) {
      cin >> r1 >> c1;

      for (int j = 0; r1 + j <= r && c1 + j <= c; j ++) {
        bool bad = false;

        for (int k = 0; k <= j; k ++) {
          if (a[r1 + j][c1 + k] == 0 || a[r1 + k][c1 + j] == 0) {
            bad = true;
            break;
          }
        }

        if (bad)
          break;
        else
          for (int k = 0; k <= j; k ++) {
            a[r1 + j][c1 + k] = 0;
            a[r1 + k][c1 + j] = 0;
          }
      }
    }

    for (int i = 1; i <= r; i ++)
      for (int j = 1; j <= c; j ++) {
        a[i][j] += a[i - 1][j];
        a[i][j] += a[i][j - 1];
        a[i][j] -= a[i - 1][j - 1];
      }

    int cur = 0, rr, cc;

    for (int i = 1; i <= r; i ++)
      for (int j = 1; j <= c; j ++)
        for (int k = cur; i + k <= r && j + k <= c; k ++)
          if (a[i - 1][j - 1] - a[i + k][j - 1] - a[i - 1][j + k] + a[i + k][j + k] == (cur + 1) * (cur + 1)) {
            cur ++;
            rr = i;
            cc = j;
          } else
            break;
    if (cur > 0)
      cout << rr << ' ' << cc << ' ' << cur << endl;
    else
      cout << "game over" << endl;
  }
}
