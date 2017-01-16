#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	ll a, b, c;
	while (cin >> n && n != 0) {
		vvl cups;
		bool ge = false, le = false;
		rep(i, 0, n) {
			cin >> a >> b >> c;
			if (a != b)
				cups.pb({ a, b, c });
			else if (a == c)
				ge = le = true;
			else if (a > c)
				ge = true;
			else if (a < c)
				le = true;
		}
		rep(i, 0, sz(cups)) {
			rep(j, 0, sz(cups)) {
				if (cups[i][0] > cups[i][1] && cups[j][0] < cups[j][1]) {
					ll di = cups[i][0] - cups[i][1], dj = cups[j][1] - cups[j][0];
					a = cups[i][0] * dj + cups[j][0] * di;
					c = cups[i][2] * dj + cups[j][2] * di;

					if (a == c)
						ge = le = true;
					else if (a > c)
						ge = true;
					else if (a < c)
						le = true;
				}

				if (ge && le)
					goto endloop;
			}
		}
	endloop:
		printf("%s\n", ge && le ? "Yes" : "No");
	}
}
