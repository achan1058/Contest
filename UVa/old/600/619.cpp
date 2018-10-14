#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BigInt {
  public:
  int num[1000], sign, n;
  void propagate ();

  BigInt ();
  BigInt (int);
  BigInt (const string);
  BigInt (const BigInt&);
  void operator += (const BigInt&);
  BigInt operator + (const BigInt&) const;
  void operator -= (const BigInt&);
  BigInt operator - (const BigInt&) const;
  void operator *= (const BigInt&);
  BigInt operator * (const BigInt&) const;
  BigInt operator - () const;
  bool operator == (const BigInt &) const;
  bool operator < (const BigInt &) const;
  bool operator > (const BigInt &) const;
  bool operator <= (const BigInt &) const;
  bool operator >= (const BigInt &) const;
  string toString () const;
};

BigInt::BigInt () {
  n = 1;
  sign = 0;
  num[0] = 0;
}

BigInt::BigInt (int i) {
  n = 1;
  if (i == 0)
    sign = num[0] = 0;
  else if (i > 0) {
    sign = 1;
    num[0] = i;
  } else {
    sign = -1;
    num[0] = -i;
  }
  propagate ();
}

BigInt::BigInt (const string s) {
  int sz = s.size ();
  n = 0;
  num[0] = 0;
  if (s[0] == '-')
    sign = -1;
  else
    sign = 1;
  for (int i = 0; 4 * i + (1 - sign) / 2 < sz; i ++) {
    num[i] = (s[sz - 4 * i - 1] - '0');
    n ++;
    if (sz - 4 * i - 2 >= (1 - sign) / 2)
      num[i] += (s[sz - 4 * i - 2] - '0') * 10;
    if (sz - 4 * i - 3 >= (1 - sign) / 2)
      num[i] += (s[sz - 4 * i - 3] - '0') * 100;
    if (sz - 4 * i - 4 >= (1 - sign) / 2)
      num[i] += (s[sz - 4 * i - 4] - '0') * 1000;
  }
  propagate ();
}

BigInt::BigInt (const BigInt& b) {
  n = b.n;
  sign = b.sign;
  for (int i = 0; i < n; i ++)
    num[i] = b.num[i];
}

void BigInt::propagate () {
  for (int i = 0; i < n - 1; i ++)
    if (num[i] >= 10000) {
      num[i + 1] += num[i] / 10000;
      num[i] %= 10000;
    } else if (num[i] < 0) {
      num[i + 1] --;
      num[i] += 10000;
    }
  for (int i = n - 1; num[i] >= 10000; i ++)
    if (num[i] >= 10000) {
      num[i + 1] = num[i] / 10000;
      num[i] %= 10000;
      n ++;
    }
  if (num[n - 1] < 0) {
    for (int i = 0; i < n; i ++)
      num[i] = -num[i];
    sign *= -1;
    propagate ();
  }
  for (int i = n - 1; num[i] == 0 && i >= 0; i --)
    n --;
  if (n == 0) {
    n = 1;
    sign = 0;
  }
}

void BigInt::operator += (const BigInt& b) {
  if (sign * b.sign >= 0) {
    if (sign == 0)
      sign = b.sign;
    for (int i = 0; i < min (b.n, n); i ++)
      num[i] += b.num[i];
    for (int i = min (b.n, n); i < b.n; i ++)
      num[i] = b.num[i];
    n = max (n, b.n);
    propagate ();
  } else
    *this -= (-b);
}

BigInt BigInt::operator + (const BigInt& b) const {
  BigInt r (*this);
  r += b;
  return r;
}

void BigInt::operator -= (const BigInt& b) {
  if (sign * b.sign >= 0) {
    if (sign == 0)
      sign = b.sign;
    for (int i = 0; i < min (b.n, n); i ++)
      num[i] -= b.num[i];
    for (int i = min (b.n, n); i < b.n; i ++)
      num[i] = b.num[i];
    n = max (n, b.n);
    propagate ();
  } else
    *this += (-b);
}

BigInt BigInt::operator - (const BigInt& b) const {
  BigInt r (*this);
  r -= b;
  return r;
}

void BigInt::operator *= (const BigInt& b) {
  sign *= b.sign;
  n += b.n;
  for (int i = n - b.n; i < n; i ++)
    num[i] = 0;
  for (int i = n - b.n - 1; i >= 0; i --) {
    int t = num[i];
    num[i] = 0;
    for (int j = 0; j < b.n; j ++)
      num[i + j] += t * b.num[j];
    propagate ();
  }
}

BigInt BigInt::operator * (const BigInt& b) const {
  BigInt r (*this);
  r *= b;
  return r;
}

BigInt BigInt::operator - () const {
  BigInt r (*this);
  r.sign *= -1;
  return r;
}

bool BigInt::operator == (const BigInt & b) const {
  if (sign != b.sign || n != b.n)
    return false;
  for (int i = 0; i < n; i ++)
    if (num[i] != b.num[i])
      return false;
  return true;
}

bool BigInt::operator < (const BigInt & b) const {
  return (b - *this).sign == 1;
}

bool BigInt::operator > (const BigInt & b) const {
  return b < *this;
}

bool BigInt::operator <= (const BigInt & b) const {
  return *this < b || *this == b;
}

bool BigInt::operator >= (const BigInt & b) const {
  return *this > b || *this == b;
}

string BigInt::toString () const {
  string s;
  if (sign == 0) {
    s = "0";
    return s;
  }
  for (int i = 0; i < n - 1; i ++) {
    int sum = 1;
    for (int j = 0; j < 4; j ++) {
      s += char ('0' + num[i] / sum % 10);
      sum *= 10;
    }
  }
  int sum = 1;
  while (num[n - 1] / sum > 0) {
    s += char ('0' + num[n - 1] / sum % 10);
    sum *= 10;
  }
  if (sign < 0)
    s += "-";
  for (int i = 0; i < s.size () / 2; i ++)
    swap (s[i], s[s.size () - i - 1]);
  return s;
}

BigInt stringInt (string s) {
  BigInt sum (0);
  BigInt m (1);

  for (int i = s.size () - 1; i >= 0; i --) {
    sum += BigInt (s[i] - 'a' + 1) * m;
    m *= BigInt (26);
  }

  return sum;
}

int main () {
  string s, str;

  while (cin >> s) {
    if (s[0] == '*')
      return 0;
    else if (s[0] >= '0' && s[0] <= '9') {
      BigInt b (s);
      str = "";

      while (stringInt (str + "a") <= b)
        str += "a";
      for (int i = 0; i < str.size (); i ++) {
        while (stringInt (str) <= b)
          str[i] ++;
        str[i] --;
      }
    } else
      str = s;

    s = stringInt (str).toString ();
    cout << str;

    for (int i = 0; i < 22 - str.size (); i ++)
      cout << ' ';
    for (int i = 0; i < s.size (); i ++) {
      cout << s[i];

      if (i != s.size () - 1 && (i - s.size ()) % 3 == 0)
        cout << ',';
    }

    cout << endl;
  }
}
