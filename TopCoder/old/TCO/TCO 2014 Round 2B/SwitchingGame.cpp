#include <bits/stdc++.h>
#include "header.h"

int greedy(vector<pii>& switches) {
	sort(all(switches));
	vb hit(sz(switches), false);
	int result = 0;

	rep(i, 0, sz(switches)) {
		if (hit[i])
			continue;
		result++;
		rep(j, i, sz(switches)) {
			if (switches[j].second <= switches[i].first)
				hit[j] = true;
		}
	}
	return result;
}

class SwitchingGame {
public:
	int timeToWin(vector<string> states) {
		int numlamps = sz(states[0]), n = sz(states);
		vs newstates(sz(states) + 1);
		newstates[0] = string(numlamps, '-');
		rep(i, 0, sz(states))
			newstates[i + 1] = states[i];

		vector<pii> onswitch, offswitch;
		rep(j, 0, numlamps) {
			rep(i, 0, n) {
				if (newstates[i][j] == '?')
					continue;
				int n1 = i + 1, n2 = i;
				while (n1 <= n && newstates[n1][j] == '?')
					n1++;

				if (n1 <= n) {
					if (newstates[n2][j] == '+' && newstates[n1][j] == '-')
						offswitch.pb({ n1 - 1, n2 });
					else if (newstates[n2][j] == '-' && newstates[n1][j] == '+')
						onswitch.pb({ n1 - 1, n2 });
				}
			}
		}

		return n + greedy(offswitch) + greedy(onswitch);
	}
};
