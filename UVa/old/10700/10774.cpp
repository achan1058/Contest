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

int main () {
  int v[40000], n, N;
  v[0] = 0;

  for (int i = 1; i <= 30000; i ++)
    v[i] = (v[i - 1] + 2) % i;

  cin >> N;

  for (int X = 1; X <= N; X ++) {
    cin >> n;
    int t = 0;

    while (v[n] != n - 1) {
      n = v[n] + 1;
      t ++;
    }

    cout << "Case "<< X << ": "<< t << ' ' << n << endl;
  }
}
