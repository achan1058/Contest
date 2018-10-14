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

template <class T>
T gcd (T i, T j) {
  return (i % j == 0 ? j : gcd (j, i % j));
}

inline int phi(int n) {
  int r = n;

  if (n % 2 == 0) {
    r /= 2;

    while (n % 2 == 0)
      n /= 2;
  }

  for (int i = 3; i*i <= n; i += 2) {
    if (n % i == 0) {
      r /= i;
      r *= (i - 1);

      while (n % i == 0)
        n /= i;
    }
  }

  if (n != 1) {
    r /= n;
    r *= (n - 1);
  }

  return r;
}

int main () {
  long long a[210000], n;

  memset(a, 0, sizeof(a));
  a[0] = 1;

  for (int i = 1; i <= 200050; i++)
    a[i] = a[i-1] + phi(i);
  a[0] = 0;

  while (cin >> n && n != 0) {
    int d;

    for (d = 0; a[d] < n; d++);
    n -= a[d-1];

    for (int i = 0; i < n; i++) {
      if (gcd(i, d) != 1)
        n++;
    }

    cout << n - 1 << '/' << d << endl;
  }
}
