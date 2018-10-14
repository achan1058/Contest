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

int p[2000000];
int wi[20], di[20], lt[20], rt[20];
bool found;
int l, w, n;

void trace(int config) {
  int prev = p[config];
  int diff = prev - config;

  if (prev == -2)
    return;

  trace(prev);

  for (int i = 0; i < n; i ++)
    if (diff == 1 << i)
      cout << di[i] << ' ' << wi[i] << endl;
}

void check(int config, int prev) {

  if (p[config] != 0 || found)
    return;
  if (config == 0) {
    p[0] = prev;
    trace(0);
    found = true;
    return;
  }

  int torque = w * 3;

  for (int i = 0; i < n; i ++)
    if (config & (1 << i))
      torque += lt[i];
  if (torque < 0) {
    p[config] = -1;
    return;
  }

  torque = w * -3;

  for (int i = 0; i < n; i ++)
    if (config & (1 << i))
      torque += rt[i];
  if (torque > 0) {
    p[config] = -1;
    return;
  }

  p[config] = prev;

  for (int i = 0; i < n; i ++)
    if (config & (1 << i))
      check(config - (1 << i), config);
}

int main () {
  for (int X = 1; cin >> l >> w >> n && (l || w || n); X ++) {
    cout << "Case " << X << ":" << endl;
    memset(p, 0, (1 << n) * sizeof(int));
    found = false;
    bool bad = false;

    for (int i = 0; i < n; i ++) {
      cin >> di[i] >> wi[i];
      bad |= abs(di[i]) > l;

      lt[i] = wi[i] * (2 * di[i] + 3);
      rt[i] = wi[i] * (2 * di[i] - 3);
    }

    if (!bad)
      check((1 << n) - 1, -2);
    if (bad || !found)
      cout << "Impossible" << endl;
  }
}
