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
  int n;
  string s;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s;
    long long lt = 0, lb = 1;
    long long rt = 1, rb = 0;
    long long mt = 1, mb = 1;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'R') {
        lt = mt;
        lb = mb;
      } else {
        rt = mt;
        rb = mb;
      }

      mt = lt + rt;
      mb = lb + rb;
    }

    cout << mt << '/' << mb << endl;
  }
}
