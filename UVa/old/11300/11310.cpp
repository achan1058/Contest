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
  long long a[50];
  int N, n;
  memset(a, 0, sizeof(a));

  a[0] = 1;

  for (int i = 0; i <= 40; i++) {
    a[i + 1] += a[i];
    a[i + 2] += 4 * a[i];
    a[i + 3] += 2 * a[i];
  }

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> n;
    cout << a[n] << endl;
  }
}
