#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d, as, cs, rs, am, cm, rm;
	forX() {
		cin >> n >> d;
		vi s(n), m(n);
		vector<pii> win(n);
		cin >> s[0] >> as >> cs >> rs;
		cin >> m[0] >> am >> cm >> rm;
		win[0] = { s[0], s[0] };

		rep(i, 1, n) {
			s[i] = (s[i - 1] * as + cs) % rs;
			m[i] = (m[i - 1] * am + cm) % rm;
			win[i] = { min(win[m[i] % i].x, s[i]), max(win[m[i] % i].y, s[i]) };
		}
		sort(all(win));

		int result = 0;
		auto ls = [](pii p1, pii p2) { return p1.y < p2.y; };
		priority_queue <pii, vector<pii>, decltype(ls)> q(ls);

		rrep(i, n - 1, 0) {
			q.push(win[i]);
			int up = win[i].x + d;
			while (!q.empty() && q.top().y > up)
				q.pop();
			result = max(result, sz(q));
		}
		printp("%d\n", result);
	}
}
