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

int phi(int n) {
  int t = n;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0)
        n /= i;
      t /= i;
      t *= i - 1;
    }
  }

  if (n != 1) {
    t /= n;
    t *= n - 1;
  }

  return t;
}

template<class T>
T pow(T b, int p, T m = 0) {
  T r = 1;
  for (int i = 1ll << 30; i > 0; i >>= 1) {
    r *= r;
    if (m > 0)
      r %= m;
    if (p & i) {
      r *= b;
      if (m > 0)
        r %= m;
    }
  }
  return r;
}

int main () {
  int a[100], m[100], n;

  for (int X = 1; cin >> m[0]; X++) {
    cin >> n;

    for (int i = 0; i < n; i++)
      cin >> a[i];

    for (int i = 1; i < n; i++)
      m[i] = phi(m[i - 1]);
    for (int i = n - 2; i >= 0; i--) {
      if (a[i] != 0) {
        a[i] = pow(a[i], a[i + 1], m[i]);
        a[i] += m[i];
      }
    }

    a[0] %= m[0];
    cout << "Case #" << X << ": " << a[0] << endl;
  }
}
