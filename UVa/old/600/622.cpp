#include <iostream>
#include <string>
using namespace std;

string numToString (int num) {
  if (num == 0)
    return "0";

  string s;

  while (num > 0) {
    char c[10];
    c[0] = char ('0' + num % 10);
    c[1] = 0;
    s = c + s;
    num /= 10;
  }

  return s;
}

int result (string s) {
  if (s[0] == '(') {
    int count = 1;
    int i = 1;

    while (count > 0 && i < s.size ()) {
      if (s[i] == '(')
        count ++;
      else if (s[i] == ')')
        count --;

      i ++;
    }

    s = numToString (result (s.substr (1, i - 2))) + s.substr (i, s.size () - i);
    return result (s);
  } else if (s[0] < '0' || s[0] > '9')
    return -1;

  int sum = 0;
  char op;

  while (s.size () > 0 && s[0] >= '0' && s[0] <= '9') {
    sum *= 10;
    sum += s[0] - '0';
    s = s.substr (1, s.size () - 1);
  }

  if (s.size () == 0)
    return sum;
  else if (s[0] == '+') {
    s = s.substr (1, s.size () - 1);
    int t = result (s);

    if (t < 0)
      return -1;
    else
      return sum + t;
  } else if (s[0] == '*') {
    s = s.substr (1, s.size () - 1);

    if (s[0] == '(') {
      int t = result (s);

      if (t < 0)
        return -1;
      else
        return sum * t;
    } else {
      int sum2 = 0;

      while (s.size () > 0 && s[0] >= '0' && s[0] <= '9') {
        sum2 *= 10;
        sum2 += s[0] - '0';
        s = s.substr (1, s.size () - 1);
      }

      return result (numToString (sum * sum2) + s);
    }
  } else
    return -1;
}

int main () {
  char c[1000];
  string s;
  int n;

  cin >> n;
  cin.getline (c, 1000);

  for (int i = 0; i < n; i ++) {
    cin.getline (c, 1000);
    s = c;

    int r = result (s);

    if (r >= 0)
      cout << r << endl;
    else
      cout << "ERROR" << endl;
  }
}
