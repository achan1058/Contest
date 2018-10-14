#include <iostream>
#include <string>
using namespace std;

int main () {
  string s;
  int a[2000];

  while (cin >> s) {
    if (s == "-1")
      return 0;
    else if (s.size () == 1)
      cout << 1 << s << endl;
    else {
      string t;
      int f = 0;
      bool good = true;

      for (int i = 0; i < s.size (); i ++)
        a[i] = s[i] - '0';
      a[s.size ()] = 0;
      while (f < s.size ()) {
        int sum9 = 0, sum7 = 0, div;

        for (int i = f; i < s.size (); i ++)
          sum9 += a[i];
        for (int i = f; i < s.size (); i ++) {
          sum7 *= 3;
          sum7 %= 7;
          sum7 += a[i];
        }

        if (sum9 % 9 == 0) {
          div = 9;
        } else if ((a[s.size () - 3] * 100 + a[s.size () - 2] * 10 + a[s.size () - 1]) % 8 == 0) {
          div = 8;
        } else if (sum7 % 7 == 0) {
          div = 7;
        } else if (sum9 % 3 == 0 && a[s.size () - 1] % 2 == 0) {
          div = 6;
        } else if (a[s.size () - 1] % 5 == 0) {
          div = 5;
        } else if ((a[s.size () - 2] * 10 + a[s.size () - 1]) % 4 == 0) {
          div = 4;
        } else if (sum9 % 3 == 0) {
          div = 3;
        } else if (a[s.size () - 1] % 2 == 0) {
          div = 2;
        } else if (f == s.size () - 1) {
          break;
        } else {
          good = false;
          break;
        }

        t = char (div + '0') + t;

        for (int i = f; i < s.size (); i ++) {
          a[i + 1] += 10 * (a[i] % div);
          a[i] /= div;
        }

        if (a[s.size ()] != 0)
          while (true);
        if (a[f] == 0)
          f ++;
      }

      if (good)
        cout << t << endl;
      else
        cout << "There is no such number." << endl;
    }
  }
}
