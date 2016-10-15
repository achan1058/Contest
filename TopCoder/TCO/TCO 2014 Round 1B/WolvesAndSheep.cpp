#include <bits/stdc++.h>
#include "header.h"

class WolvesAndSheep {
	int getmin(const vs& field, const vi& rows) {
		int iswolf[20], bars = 0;
		memset(iswolf, -1, sizeof(iswolf));
		rep(j, 0, sz(field[0])) {
			bool barred = false;
			rep(i, 0, sz(rows) - 1) {
				bool w = false, s = false;
				rep(r, rows[i], rows[i + 1]) {
					if (field[r][j] == 'W')
						w = true;
					else if (field[r][j] == 'S')
						s = true;
				}

				if (w && s)
					return inf;
				else if (w) {
					if (iswolf[i] == 0 && !barred) {
						barred = true;
						bars++;
					}
					iswolf[i] = 1;
				} else if (s) {
					if (iswolf[i] == 1 && !barred) {
						barred = true;
						bars++;
					}
					iswolf[i] = 0;
				} else {
					iswolf[i] += 100;
				}
			}
			rep(i, 0, sz(rows) - 1) {
				if (iswolf[i] >= 50) {
					if (barred)
						iswolf[i] = -1;
					else
						iswolf[i] -= 100;
				}
			}
		}

		return bars;
	}
public:
	int getmin(vector<string> field) {
		int best = inf;
		rep(i, 0, (1 << (sz(field) - 1))) {
			int t = i, count = 0;
			vi bars;
			bars.pb(0);
			while (t > 0) {
				if (t % 2 == 1)
					bars.pb(count + 1);
				t /= 2;
				count++;
			}

			bars.pb(sz(field));
			best = min(best, (int)(getmin(field, bars) + sz(bars) - 2));
		}

		return best;
	}
};
