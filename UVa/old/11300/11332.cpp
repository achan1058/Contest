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

  while (cin >> n && n != 0) {
    int s = n % 9;
    s = (s == 0 ? 9 : s);

    cout << s << endl;
  }
}
