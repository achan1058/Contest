#include <bits/stdc++.h>
#include "header.h"

class ModModMod {
public:
	long long findSum(vector<int> m, int R) {
		map<ll, int> stored;
		ll ans = 0;
		stored[R + 1] = 1;

		irep(v, m) {
			while (true) {
				map<ll, int>::reverse_iterator it = stored.rbegin();
				int t = it->x, l = it->y;

				if (t <= v)
					break;
				else {
					stored.erase(t);
					int q = t / v, r = t % v;
					stored[v];
					stored[r];
					stored[v] += q * l;
					stored[r] += l;
				}
			}
		}

		irep(v, stored) {
			ans += v.y * v.x * (v.x - 1) / 2;
		}

		return ans;
	}
};
