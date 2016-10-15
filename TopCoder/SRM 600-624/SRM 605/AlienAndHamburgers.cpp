#include <bits/stdc++.h>
#include "header.h"

class AlienAndHamburgers {
public:
	int getNumber(vector<int> type, vector<int> taste) {
		vvi byType(101);
		vi maxTaste;
		rep(i, 0, sz(type))
			byType[type[i]].pb(-taste[i]);
		rep(i, 0, 101) {
			if (byType[i].empty())
				continue;
			sort(all(byType[i]));
			if (byType[i][0] > 0)
				maxTaste.pb(byType[i][0]);
			else {
				int ts = 0;
				for (int j = 0; j < sz(byType[i]) && byType[i][j] < 0; j++)
					ts += byType[i][j];
				maxTaste.pb(ts);
			}
		}
		sort(all(maxTaste));
		int best = 0, curTaste = 0, num = 0;
		fori(ts, maxTaste) {
			curTaste -= ts;
			num++;
			best = max(curTaste * num, best);
		}
		return best;
	}
};
