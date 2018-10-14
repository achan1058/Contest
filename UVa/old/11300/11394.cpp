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

long long fact[17];
int td[20], cd[20];

bool next() {
  for (int i = 15; i > 0; i--) {
    if (cd[i] >= td[i]) {
      cd[i] = 0;
    } else {
      cd[i]++;
      return true;
    }
  }

  return false;
}

long long multinom() {
  int s = 0;
  for (int i = 0; i < 16; i++)
    s += cd[i];

  int r = fact[s];
  for (int i = 0; i < 16; i++)
    r /= fact[cd[i]];

  return r;
}

int main () {
  string s;
  fact[0] = 1;

  for (int i = 1; i <= 16; i++)
    fact[i] = fact[i-1] * i;
  while (cin >> s && s != "#") {
    memset(td, 0, sizeof(td));
    memset(cd, 0, sizeof(cd));
    long long total = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= '0' && s[i] <= '9')
        td[s[i] - '0']++;
      else
        td[s[i] - 'A' + 10]++;
    }

    while (next()) {
      long long sum = 0;
      for (int i = 0; i < 16; i++)
        sum += cd[i] * i;
      if (sum % 5 == 0)
        total += multinom();
    }

    cout << total << endl;
  }
}
