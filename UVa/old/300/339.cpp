#include <iostream>
#include <stack>
using namespace std;

int main () {
  int row, col, r, c;
  int a[12][42];

  for (int x = 1; ; x ++) {
    cin >> row >> col;

    if (row == 0 || col == 0)
      return 0;
    for (int i = 1; i <= row; i ++)
      for (int j = 1; j <= col; j ++)
        cin >> a[i][j];
    for (int i = 0; i < row + 2; i ++) {
      a[i][0] = -1;
      a[i][col + 1] = -1;
    }

    for (int j = 0; j < col + 2; j ++) {
      a[0][j] = -1;
      a[row + 1][j] = -1;
    }

    while (true) {
      cin >> r >> c;

      if (r == 0 && c == 0)
        break;
      else if (r > row || c > col || r < 1 || c < 1)
        continue;
      else if (a[r][c] != a[r][c - 1] && a[r][c] != a[r][c + 1] && a[r][c] != a[r - 1][c] && a[r][c] != a[r + 1][c])
        continue;
      else if (a[r][c] == -1)
        continue;

      stack<int> s;
      s.push (100 * r + c);

      while (!s.empty ()) {
        int t = s.top ();
        s.pop ();

        if (a[t / 100][t % 100] == -1)
          continue;
        if (a[t / 100 - 1][t % 100] == a[t / 100][t % 100])
          s.push (t - 100);
        if (a[t / 100 + 1][t % 100] == a[t / 100][t % 100])
          s.push (t + 100);
        if (a[t / 100][t % 100 - 1] == a[t / 100][t % 100])
          s.push (t - 1);
        if (a[t / 100][t % 100 + 1] == a[t / 100][t % 100])
          s.push (t + 1);

        a[t / 100][t % 100] = -1;
      }

      for (int j = 1; j <= col; j ++) {
        int t = 1;

        for (int i = 1; i <= row; i ++, t ++) {
          a[t][j] = a[i][j];

          if (a[i][j] == -1)
            t --;
        }

        for ( ; t <= row; t ++)
          a[t][j] = -1;
      }

      int t = 1;

      for (int j = 1; j <= col; j ++, t ++) {
        for (int i = 1; i <= row; i ++)
          a[i][t] = a[i][j];
        if (a[1][j] == -1)
          t --;
      }

      for ( ; t <= col; t ++)
        for (int i = 1; i <= row; i ++)
          a[i][t] = -1;
    }

    bool won = true;

    cout << "Grid " << x << "." << endl;

    for (int i = row; i > 0; i --)
      for (int j = 1; j <= col; j ++)
        won &= a[i][j] == -1;
    if (won)
      cout << "    Game Won" << endl;
    else
      for (int i = row; i > 0; i --) {
        cout << "   ";

        for (int j = 1; j <= col; j ++) {
          cout << ' ';

          if (a[i][j] == -1)
            cout << ' ';
          else
            cout << a[i][j];
        }

        cout << endl;
      }
    cout << endl;
  }
}
