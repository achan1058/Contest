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
  int N, p, n, t;
  int a[200];
  cin >> N;

  for (int X = 0; X < N; X++) {
    vector<int> v;
    cin >> p >> n;
    v.resize(n);

    for (int i = 0; i < n; i++) {
      a[i] = 0;

      for (int j = 0; j < p; j++) {
        cin >> t;
        a[i] *= 2;
        a[i] += t;
      }
    }

    int m = 10000;

    for (int i = 0; i < (1 << p); i++) {
      for (int j = 0; j < n; j++)
        v[j] = a[j] & i;
      sort(v.begin(), v.end());
      bool diff = true;

      for (int j = 1; j < n; j++) {
        diff &= (v[j] != v[j - 1]);
      }

      if (diff) {
        int lights = 0;
        t = i;
        while (t > 0) {
          lights += (t % 2);
          t /= 2;
        }
        m = min(lights, m);
      }
    }

    cout << m << endl;
  }
}
