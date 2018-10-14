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

int main () {
  vector<pair<int, char*> > v;
  char t[51];
  int M, m, n;

  cin >> M;

  for (int X = 0; X < M; X ++) {
    if (X > 0)
      cout << endl;
    v.clear();
    cin >> n >> m;

    for (int i = 0; i < m; i ++) {
      cin >> t;
      char* s = new char[n + 1];
      memcpy(s, t, n + 1);
      int r = 0;

      for (int j = 1; j < n; j ++)
        for (int k = 0; k < n - j; k ++)
          if (t[k] > t[k + 1]) {
            swap(t[k], t[k + 1]);
            r ++;
          }
      v.push_back (make_pair(r, s));
    }

    stable_sort(v.begin(), v.end());

    for (int i = 0; i < m; i ++)
      cout << v[i].second << endl;
  }
}
