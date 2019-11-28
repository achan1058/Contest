#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int m, l, r;
		cin >> m;
		vpii lines, ans;
		while (cin >> l >> r && (l | r) != 0)
			lines.pb({ l, r });
		sort(all(lines));

		int curl = 0, t = 0;
		pii cur(-inf, -inf);
		irep(p, lines) {
			if (p.second <= curl || p.first >= m)
				continue;
			if (p.first > curl && cur != pii(-inf, -inf)) {
				ans.pb(cur);
				curl = cur.second;
				cur = pii(-inf, -inf);
			}
			if (p.first > curl) {
				ans.clear();
				break;
			}
			if (curl < m && p.second > cur.second)
				cur = p;
		}

		if (cur != pii(-inf, -inf)) {
			if (cur.second >= m)
				ans.pb(cur);
			else
				ans.clear();
		}

		printX(sz(ans));
		irep(p, ans)
			print(p.first, p.second);
	}
}
