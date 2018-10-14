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
#define maxn 250
#define unit 10000
#define digit 4

class BigInteger {
  int a[maxn];
  int n, sn;

  void normalize() {
    for (int i = 0; i < n; i ++)
      if (a[i] >= unit) {
        a[i + 1] += a[i] / unit;
        a[i] %= unit;
      } else if (a[i] < 0) {
        a[i + 1] --;
        a[i] += unit;
      }
    if (a[n] < 0) {
      for (int i = 0; i <= n; i ++)
        a[i] = -a[i];
      sn = -sn;
      normalize();
      return;
    }
    while (a[n] > 0) {
      if (a[n] >= unit) {
        a[n + 1] += a[n] / unit;
        a[n] %= unit;
      }
      n ++;
    }
    while (a[n - 1] == 0 && n > 0)
      n --;
    if (n == 0)
      sn = 0;
  }

  public:
  BigInteger() {
    memset(a, 0, sizeof(a));
    n = 0;
    sn = 0;
  }

  BigInteger(int i) {
    memset(a, 0, sizeof(a));
    n = 0;
    sn = 1;
    a[0] = i;
    normalize();
  }

  BigInteger(const string& s) {
    int sp = 0, m = 1;
    memset(a, 0, sizeof(a));
    n = 0;
    sn = 1;
    if (s[0] == '-') {
      sp = 1;
      sn = -1;
    }
    for (int i = s.size() - 1; i >= sp; i --) {
      a[n] += m * (s[i] - '0');
      m *= 10;
      if (m == unit) {
        m = 1;
        n ++;
      }
    }
    normalize();
  }

  string ToString() const {
    string s;
    if(sn == 0)
      return "0";
    for (int i = 0; i < n - 1; i ++) {
      int t = a[i];
      for (int i = 0; i < digit; i ++) {
        s += char(t % 10 + '0');
        t /= 10;
      }
    }
    int t = a[n - 1];
    for (int i = 0; t > 0; i ++) {
      s += char(t % 10 + '0');
      t /= 10;
    }
    if (sn == -1)
      s += '-';
    for (int i = 0; i < s.size() / 2; i ++)
      swap(s[i], s[s.size() - i - 1]);
    return s;
  }

  bool operator==(const BigInteger& b) const {
    if (sn != b.sn)
      return false;
    if (n != b.n)
      return false;
    for (int i = 0; i < n; i ++)
      if (a[i] != b.a[i])
        return false;
    return true;
  }

  bool operator<(const BigInteger& b) const {
    bool neg = sn == -1;
    if (sn < b.sn)
      return true;
    if (sn > b.sn)
      return false;
    if (n < b.n)
      return !neg;
    if (n > b.n)
      return neg;
    for (int i = n - 1; i >= 0; i --)
      if (a[i] < b.a[i])
        return !neg;
      else if (a[i] > b.a[i])
        return neg;
    return false;
  }

  bool operator!=(const BigInteger& b) const {
    return !(*this == b);
  }

  bool operator>(const BigInteger& b) const {
    return b < *this;
  }

  bool operator<=(const BigInteger& b) const {
    return *this < b || *this == b;
  }

  bool operator>=(const BigInteger& b) const {
    return *this > b || *this == b;
  }

  void operator+=(const BigInteger& b) {
    if (b.sn == 0)
      return;
    if (sn == 0) {
      memcpy(a, b.a, sizeof(a));
      n = b.n;
      sn = b.sn;
      return;
    }
    n = max(n, b.n);
    if (sn == b.sn)
      for (int i = 0; i < n; i ++)
        a[i] += b.a[i];
    else
      for (int i = 0; i < n; i ++)
        a[i] -= b.a[i];
    normalize();
  }

  void operator-=(const BigInteger& b) {
    if (b.sn == 0)
      return;
    if (sn == 0) {
      memcpy(a, b.a, sizeof(a));
      n = b.n;
      sn = -b.sn;
      return;
    }
    n = max(n, b.n);
    if (sn == b.sn)
      for (int i = 0; i < n; i ++)
        a[i] -= b.a[i];
    else
      for (int i = 0; i < n; i ++)
        a[i] += b.a[i];
    normalize();
  }

  void operator*=(const BigInteger& b) {
    if (sn == 0)
      return;
    if (b.sn == 0) {
      memset(a, 0, sizeof(a));
      n = 0;
      sn = 0;
      return;
    }
    int t[maxn];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i ++)
      for (int j = 0; j < b.n; j ++)
        t[i + j] += a[i] * b.a[j];
    memcpy(a, t, sizeof(a));
    n += b.n;
    sn *= b.sn;
    normalize();
  }

  BigInteger operator+(const BigInteger& b) const {
    BigInteger r(*this);
    r += b;
    return r;
  }

  BigInteger operator-(const BigInteger& b) const {
    BigInteger r(*this);
    r -= b;
    return r;
  }

  BigInteger operator*(const BigInteger& b) const {
    BigInteger r(*this);
    r *= b;
    return r;
  }
};

istream& operator>>(istream& in, BigInteger b) {
  string s;
  in >> s;
  b = s;
  return in;
}

ostream& operator<<(ostream& out, const BigInteger& b) {
  out << b.ToString();
  return out;
}

BigInteger v[5000];

int main () {
  int n;
  v[0] = 1;
  v[1] = 1;

  for (int i = 1; i <= 4000; i ++)
    v[i] += v[i - 1] + v[i - 2];
  while (cin >> n && n > 0)
    cout << v[2 * n - 2] << endl;
}
