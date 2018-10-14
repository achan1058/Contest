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
#define maxn 100
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

  void shift(int s) {
    if (s > 0) {
      for (int i = n - 1; i >= 0; i --)
        a[i + s] = a[i];
      for (int i = 0; i < s; i ++)
        a[i] = 0;
    } else if (s < 0) {
      for (int i = -s; i < n; i ++)
        a[i + s] = a[i];
      for (int i = 0; i < -s; i ++)
        a[n + s + i] = 0;
    }
    n += s;
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
    int t[n + b.n];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n; i ++)
      for (int j = 0; j < b.n; j ++)
        t[i + j] += a[i] * b.a[j];
    memcpy(a, t, sizeof(t));
    n += b.n;
    sn *= b.sn;
    normalize();
  }

  void operator/=(const BigInteger& b) {
    if (b.sn == 0)
      b.sn / b.sn;
    if (sn == 0)
      return;
    int t[n];
    memset(t, 0, sizeof(t));
    BigInteger u(b), r(0);
    u.sn = 1;
    for (int i = n - 1; i >= 0; i --) {
      r.shift(1);
      r += a[i];
      int l = 0, h = 1;
      BigInteger p(u);
      while (p <= r) {
        l = h;
        h *= 2;
        p *= 2;
        if (h > unit) {
          h = unit;
          p = u;
          p.shift(1);
        }
      }
      while (l < h - 1) {
        int m = (l + h) / 2;
        p = u * m;
        if (p <= r)
          l = m;
        else
          h = m;
      }
      t[i] = l;
      r -= u * l;
    }
    memcpy(a, t, sizeof(t));
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

  BigInteger operator/(const BigInteger& b) const {
    BigInteger r(*this);
    r /= b;
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

BigInteger a[2000];
BigInteger b[2000];

int main () {
  int n;
  a[0] = a[1] = 1;
  b[0] = 0;

  for (int i = 2; i <= 1600; i ++)
    a[i] = a[i - 1] + a[i - 2];
  for (int i = 1; i <= 1600; i ++)
    b[i] = b[i - 1] + a[i - 1];
  for (int i = 0; i <= 1600; i ++)
    b[i] += (a[i] - 1) / 2;
  for (int X = 1; cin >> n && n != 0; X ++) {
    cout << "Set " << X << ":" << endl;
    cout << b[n - 1] << endl;
  }
}
