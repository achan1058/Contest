#include <iostream>
#include <cstdio>
using namespace std;

int main () {
  int N, n, c, cor, pos, code[4];
  bool a[10000];
  char t;

  cin >> N;

  for (int x = 0; x < N; x ++) {
    cin >> n;

    for (int i = 0; i < 10000; i ++)
      a[i] = true;
    for (int i = 0; i < n; i ++) {
      cin >> c >> cor >> t >> pos;

      int cr = 0, ps = 0;
      code[0] = c / 1000;
      code[1] = c / 100 % 10;
      code[2] = c / 10 % 10;
      code[3] = c % 10;

      for (int j = 0; j < 10000; j ++) {
        int corD = 0, posD = 0;
        int cc[4];

        cc[0] = j / 1000;
        cc[1] = j / 100 % 10;
        cc[2] = j / 10 % 10;
        cc[3] = j % 10;

        for (int k = 0; k < 4; k ++)
          if (code[k] == cc[k]) {
            corD ++;
            cc[k] = 1000;
          }
        for (int k = 0; k < 4; k ++)
          if (cc[k] == 1000)
            continue;
          else
            for (int l = 0; l < 4; l ++)
              if (code[k] == cc[l]) {
              posD ++;
              cc[l] = 2000;
              break;
            }
        if (corD != cor || posD != pos)
          a[j] = false;
      }
    }

    int num = 0, cur = -1;

    for (int i = 0; i < 10000; i ++)
      if (a[i]) {
        num ++;
        cur = i;
      }
    if (num == 0)
      cout << "impossible";
    else if (num > 1)
      cout << "indeterminate";
    else
      printf ("%04d", cur);

    cout << endl;
  }
}
