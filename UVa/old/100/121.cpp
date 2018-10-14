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

int grid(double x, double y) {
  return int(x) * int(y);
}

int skew(double x, double y) {
  if (y < 1)
    return 0;
  int h = int(2 * (y - 1) / sqrt(3)) + 1, total = 0;

  if (h % 2 == 1) {
    total = int(x);
  }

  return total + int(2 * x - 1) * (h / 2);
}

int main () {
  double x, y;
  while (cin >> x >> y) {
    int g_pack = grid(x, y);
    int s_pack = max(skew(x, y), skew(y, x));

    if (s_pack > g_pack)
      cout << s_pack << " skew" << endl;
    else
      cout << g_pack << " grid" << endl;
  }
}
