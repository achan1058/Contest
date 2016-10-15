#include <bits/stdc++.h>
#include "header.h"

class ListeningSongs {
public:
	int listen(vector<int> durations1, vector<int> durations2, int minutes, int T) {
		minutes *= 60;
		sort(all(durations1));
		sort(all(durations2));

		if (T > sz(durations1) || T > sz(durations2))
			return -1;
		rep(i, 0, T) {
			minutes -= durations1[i];
			minutes -= durations2[i];
		}

		if (minutes < 0)
			return -1;

		vi remain;
		int num = 2 * T;
		rep(i, T, sz(durations1))
			remain.pb(durations1[i]);
		rep(i, T, sz(durations2))
			remain.pb(durations2[i]);

		sort(all(remain));
		fori(v, remain) {
			if (v > minutes)
				break;
			minutes -= v;
			num++;
		}

		return num;
	}
};
