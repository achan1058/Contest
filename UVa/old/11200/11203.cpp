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
  int N;
  string s;
  cin >> N;

  for (int X = 0; X < N; X++) {
    cin >> s;
    bool is_theorem = true;
    int mpos = -1, epos = -1;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'M') {
        if (mpos == -1)
          mpos = i;
        else
          is_theorem = false;
      } else if (s[i] == 'E') {
        if (epos == -1)
          epos = i;
        else
          is_theorem = false;
      } else if (s[i] != '?')
        is_theorem = false;
    }

    if (epos == -1 || mpos == -1)
      is_theorem = false;

    int a = mpos, b = epos - mpos - 1, c = s.size() - epos - 1;

    if (a <= 0 || b <= 0 || c <= 0 || a + b != c)
      is_theorem = false;
    if (is_theorem)
      cout << "theorem" << endl;
    else
      cout << "no-theorem" << endl;
  }
}
