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

#define eps 1e-12
vector<double> a;

int main () {
  int n;
  double r;

  while (cin >> n >> r && (n != 0 || r != 0)) {
    double area = 0;
    a.resize(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      a[i] = a[i] / 360 * 4 * acos(0);
    }
    sort (a.begin(), a.end());

    for (int i = 0; i < n; i++)
      for (int j = i + 1; j < n; j++)
        area += sin(a[j] - a[i]) * (n - 2 * (j - i));

    area *= r * r / 2;
    cout << (long long)(area + 0.5 + eps) << endl;
  }
}
