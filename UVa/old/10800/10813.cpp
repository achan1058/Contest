#include <iostream>
using namespace std;

int main () {
  int N, a[5][5];
  bool b[5][5];

  cin >> N;

  for (int x = 0; x < N; x ++) {
    bool win = false;

    for (int i = 0; i < 5; i ++)
      for (int j = 0; j < 5; j ++)
        if (i == 2 && j == 2) {
          b[i][j] = true;
          continue;
        } else {
          b[i][j] = false;
          cin >> a[i][j];
        }
    for (int n = 0; n < 75; n ++) {
      int t;
      cin >> t;

      for (int i = 0; i < 5; i ++)
        for (int j = 0; j < 5; j ++)
          if (!b[i][j] && t == a[i][j] && !win) {
            b[i][j] = true;

            for (int i = 0; i < 5; i ++) {
              bool w = true;

              for (int j = 0; j < 5; j ++)
                w &= b[i][j];
              if (w) {
                win = true;
                cout << "BINGO after " << n + 1 << " numbers announced" << endl;
                break;
              }
            }

            if (!win)
              for (int i = 0; i < 5; i ++) {
                bool w = true;

                for (int j = 0; j < 5; j ++)
                  w &= b[j][i];
                if (w) {
                  win = true;
                  cout << "BINGO after " << n + 1 << " numbers announced" << endl;
                  break;
                }
              }
            if (!win) {
              bool w = true;

              for (int i = 0; i < 5; i ++)
                w &= b[i][i];
              if (w) {
                win = true;
                cout << "BINGO after " << n + 1 << " numbers announced" << endl;
                break;
              }
            }

            if (!win) {
              bool w = true;

              for (int i = 0; i < 5; i ++)
                w &= b[i][4 - i];
              if (w) {
                win = true;
                cout << "BINGO after " << n + 1 << " numbers announced" << endl;
                break;
              }
            }
          }
    }
  }
}
