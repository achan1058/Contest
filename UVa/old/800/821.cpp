#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <queue>
#include <sstream>
using namespace std;
#define maxn 100
#define inf 1000000000

template<class T>
void floyd_warshall(T g[maxn][maxn], int n) {
  for (int k = 0; k < n; k ++)
    for (int i = 0; i < n; i ++)
      for (int j = 0; j < n; j ++)
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main () {
  int g[maxn][maxn], s, t;

  for (int X = 1; ; X++) {
    map<int, int> m;
    int n = 0;

    for (int i = 0; i < maxn; i++)
      for (int j = 0; j < maxn; j++)
        g[i][j] = inf;

    while(cin >> s >> t && (s != 0 || t != 0)) {
      if (m.find(s) == m.end()) {
        m[s] = n;
        n++;
      }

      if (m.find(t) == m.end()) {
        m[t] = n;
        n++;
      }

      g[m[s]][m[t]] = 1;
    }

    if (n == 0)
      break;

    floyd_warshall(g, n);

    double sum = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j)
          continue;
        sum += g[i][j];
      }
    }

    printf("Case %d: average length between pages = %.3f clicks\n", X, sum / n / (n - 1));
  }
}
