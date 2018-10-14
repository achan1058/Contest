#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int v[20];
int n, t, total;
bool any;

void recurse (int num, int ind, int sum) {
  if (sum >= t)
    return;
  if (ind < 0) {
    if (sum + v[num] >= t)
      total ++;

    return;
  } else {
    if (ind != num)
      recurse (num, ind - 1, sum + v[ind]);

    recurse (num, ind - 1, sum);
  }
}

int main () {
  int N;

  cin >> N;

  for (int x = 0; x < N; x ++) {
    cin >> n;
    t = 0;

    for (int i = 0; i < n; i ++)
      cin >> v[i];
    for (int i = 0; i < n; i ++)
      t += v[i];

    t /= 2;
    t ++;

    for (int i = 0; i < n; i ++) {
      total = 0;
      recurse (i, n - 1, 0);
      cout << "party " << i + 1 << " has power index " << total << endl;
    }

    cout << endl;
  }
}
