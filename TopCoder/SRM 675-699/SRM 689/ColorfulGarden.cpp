#include <bits/stdc++.h>
#include "header.h"

class ColorfulGarden {
public:
	vector<string> rearrange(vector<string> garden) {
		string flowers;
		fori(g, garden) {
			fori(f, g)
				flowers.pb(f);
		}

		int shift = 0;
		sort(all(flowers));
		rep(i, 0, sz(garden[0])) {
			if (flowers[i] == flowers[sz(garden[0]) + i])
				return vs();
			else if (flowers[i] == flowers[sz(garden[0]) + i - 1]) {
				shift = i;
				break;
			}
		}

		vs ans = garden;
		rep(i, 0, sz(garden[0])) {
			ans[i % 2][i] = flowers[i + shift];
			ans[1 - i % 2][i] = flowers[(sz(garden[0]) + i + shift) % (2 * sz(garden[0]))];
		}
		return ans;
	}
};
