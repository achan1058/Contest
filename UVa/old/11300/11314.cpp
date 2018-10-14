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
  double ax, ay, bx, by;

  cin >> n;

  for (int X = 0; X < n; X++) {
    cin >> ax >> ay >> bx >> by;

    double dx1 = ax + bx, dy1 = ay + by, d1 = sqrt(dx1*dx1+dy1*dy1);
    double dx2 = ax - bx, dy2 = ay - by, d2 = sqrt(dx2*dx2+dy2*dy2);
    printf("%.3f\n", d1 + d2);
  }
}
