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
  int N, n, k;
  cin >> N;

  for (int X = 0; X < N; X++) {
    int num = 0;
    cin >> n >> k;

    for (int j = n - 1; j >= 0; j--) {
      if (k >= 1 << j) {
        k = (1 << j + 1) - 1 - k;
        num += 1 << j;
      }
    }

    cout << num << endl;
  }
}
