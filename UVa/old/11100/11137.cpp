#include <iostream>
#include <algorithm>
using namespace std;

long long a[25][20000];

int main () {
  int cubes[25], n;
  memset (a, 0, sizeof(a));
  a[0][0] = 1;

  for (int i = 0; i < 25; i ++)
    cubes[i] = i * i * i;
  for (int i = 1; i <= 21; i ++) {
    for (int j = 0; j <= 10000; j ++)
      for (int k = 0; j + k * cubes[i] <= 10000; k ++)
        a[i][j + k * cubes[i]] += a[i - 1][j];
  }

  while (cin >> n)
    cout << a[21][n] << endl;
}
