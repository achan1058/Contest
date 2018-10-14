#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
  int M, N;

  while (cin >> M >> N) {
    if (M == 0 && N == 0)
      return 0;

    long long check = 1;
    vector<int> a[6];
    int b[6];

    for (int i = 0; i < M; i ++)
      check *= N;

    check --;

    if (check % (M + 1) != 0) {
      cout << "Not found." << endl;
      continue;
    }

    check /= (M + 1);

    for (int i = 0; i < M; i ++) {
      long long t = 1;

      for (int j = 0; j < M; j ++) {
        a[i].push_back (((i + 1) * check / t) % N);
        t *= N;
      }
    }

    for (int i = 0; i < M; i ++)
      b[i] = a[0][i];
    for (int i = 0; i < M; i ++)
      sort (a[i].begin (), a[i].end ());

    bool good = true;

    for (int i = 1; i < M; i ++)
      for (int j = 0; j < M; j ++)
        good &= a[0][j] == a[i][j];

    if (good) {
      cout << b[M - 1];

      for (int i = M - 2; i >= 0; i --)
        cout << ' ' << b[i];

      cout << endl;
    } else
      cout << "Not found." << endl;
  }
}
