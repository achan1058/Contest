#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  int a[100], m, M;

  while (cin >> m >> M) {
    if (m >= M)
      return 0;

    memset(a, 0, sizeof(a));
    a[m] = 1;

    for (int i = m; i < M; i ++) {
      int j = 1;

      if (i == 0) {
        for ( ; j <= M; j ++)
          a[j] ++;
      } else {
        for ( ; j * j < i; j ++)
          if (i % j == 0) {
            a[i + j] += a[i];
            a[i + i / j] += a[i];
          }
        if (j * j == i)
          a[i + j] += a[i];
      }
    }

    cout << m << ' ' << M << ' ' << a[M] << endl;
  }
}
