#include <bits/stdc++.h>
#include "header.h"

pii getPair(int x) {
	pii ans;
	while (x % 2 == 0) {
		x /= 2;
		ans.x++;
	}
	while (x % 3 == 0) {
		x /= 3;
		ans.y++;
	}
	return ans;
}

class LCMGCD {
public:
	string isPossible(vector<int> x, int t) {
		int n = sz(x);
		vector<pii> pairs(n);
		pii target = getPair(t);
		int ee = 0, eb = 0, es = 0, se = 0, sb = 0, ss = 0, be = 0, bs = 0, bb = 0;

		rep(i, 0, n) {
			pairs[i] = getPair(x[i]);
			if (pairs[i].x == target.x) {
				if (pairs[i].y == target.y)
					ee++;
				else if (pairs[i].y > target.y)
					eb++;
				else
					es++;
			} else if (pairs[i].x > target.x) {
				if (pairs[i].y == target.y)
					be++;
				else if (pairs[i].y > target.y)
					bb++;
				else
					bs++;
			} else {
				if (pairs[i].y == target.y)
					se++;
				else if (pairs[i].y > target.y)
					sb++;
				else
					ss++;
			}
		}
		if (ee + eb + es == 0)
			return "Impossible";
		else if (ee + be + se == 0)
			return "Impossible";
		else if (ee > 0) {
			if (n == 1)
				return "Possible";
			else if (bb + ss + eb + es + be + se + ee > 1)
				return "Possible";
			else if (bs > 0 && sb > 0)
				return "Possible";
			else
				return "Impossible";
		} else if (eb > 0 && be > 0)
			return "Possible";
		else if (es > 0 && se > 0)
			return "Possible";
		else if (eb > 0) {
			if (bs > 0)
				return "Possible";
			else
				return "Impossible";
		} else if (es > 0) {
			if (sb > 0)
				return "Possible";
			else
				return "Impossible";

		}

		return "";
	}
};
