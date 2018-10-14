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
  int n;

  for (int X = 1; cin >> n && n != 0; X++) {
    cout << "Case " << X << ":";
    if ((n * (n + 1) / 2) % 2 != 0) {
      cout << " -1" << endl;
      continue;
    }

    for (int i = 0; i < n; i++) {
      int t = i / 2 + 1;

      if (i % 2 == 1) {
        if (i > n / 2)
          cout << ' ' << n - t + 1;
        else
          cout << ' ' << n - t + 2;
      } else {
        cout << ' ' << t;
      }
    }
    cout << endl;
  }
}
