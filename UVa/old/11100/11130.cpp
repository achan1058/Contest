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

#define PI acos(-1)
#define eps 1e-5

int main () {
  double a, b, v, A, s;
  while (cin >> a >> b >> v >> A >> s && (a != 0 || b != 0 || v != 0 || A != 0 || s != 0)) {
    double d = v * s / 2;
    A *= 2 * PI / 360;
    double y = d * sin(A) + 0.5 * b;
    double x = d * cos(A) + 0.5 * a;

    cout << int((x + eps) / a) << ' ' << int((y + eps) / b) << endl;
  }
}
