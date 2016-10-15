#include <bits/stdc++.h>
#include "header.h"

int inf = 0x3f3f3f3f;
#define rrep(k, a, b) for (int k = (a); k >= int(b); k--)
#define fori(k, a) for (auto& k : (a))

class ThePhantomMenace {
public:
    int find(vector<int> doors, vector<int> droids) {
		int ans = 0;
		fori(d, doors) {
			int dist = inf;
			fori(r, droids)
				dist = min(dist, abs(r - d));

			ans = max(ans, dist);
		}
		return ans;
    }
};
