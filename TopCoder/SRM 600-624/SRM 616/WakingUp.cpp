#include <bits/stdc++.h>
#include "header.h"

class WakingUp {
public:
	int maxSleepiness(vector<int> period, vector<int> start, vector<int> volume, int D) {
		int common = 8 * 9 * 5 * 7, n = sz(period), mn;
		vi alert(3000);

		rep(i, 1, 3000) {
			alert[i] = alert[i - 1] - D;
			rep(j, 0, n) {
				if (i >= start[j] && (i - start[j]) % period[j] == 0)
					alert[i] += volume[j];
			}
			mn = max(mn, alert[i]);
		}

		if (alert[2999] - alert[2999 - common] > 0)
			return -1;

		return mn;
	}
};
