#include <bits/stdc++.h>
#include "header.h"

class Similars {
public:
	int maxsim(int L, int R) {
		vi bts;
		int ans = 0;
		rep(i, L, R + 1) {
			int j = i, v = 0;
			while (j > 0) {
				v |= (1 << (j % 10));
				j /= 10;
			}
			bts.pb(v);
		}

		rep(i, 0, 1024) {
			int num = 0;
			irep(v, bts) {
				if ((v & i) == i)
					num++;
			}

			if (num >= 2)
				ans = max(ans, bits(i));
		}
		return ans;
	}
};
