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

int main () {
  int N, n;
  cin >> N;

  for (int X = 1; X <= N; X++) {
    cin >> n;
    int mx = -1000000000, Mx = 1000000000, my = -1000000000, My = 1000000000;
    int x1, x2, y1, y2;

    for (int i = 0; i < n; i++) {
      cin >> x1 >> y1 >> x2 >> y2;

      mx = max(mx, x1);
      Mx = min(Mx, x2);
      my = max(my, y1);
      My = min(My, y2);
    }

    int dx = max(Mx - mx, 0), dy = max(My - my, 0);
    cout << "Case " << X << ": " << dx * dy << endl;
  }
}
