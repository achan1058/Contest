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
  int n, m;

  while (cin >> n >> m && n != 0) {
    cout << n << ' ' << m << ' ';
    if (n == 1) {
      if (m == 1)
        cout << "Multiple" << endl;
      else
        cout << "Impossible" << endl;
    } else {
      if ((m - 1) % (n - 1) != 0) {
        cout << "Impossible" << endl;
      } else {
        int t = (m - 1) / (n - 1);
        cout << t * n + 1 << endl;
      }
    }
  }
}
