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
  int t, n, m;

  cin >> t;

  for (int X = 0; X < t; X++) {
    cin >> n >> m;

    if ((n - 1) % (m - 1) == 0)
      cout << (n - 1) / (m - 1) << endl;
    else
      cout << "cannot do this" << endl;
  }
}
