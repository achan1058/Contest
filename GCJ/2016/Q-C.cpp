#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, n, j;
	cin >> T >> n >> j;
	printf("Case #1:\n");

	n /= 2;
	string s(n, '0'), d(n + 1, '0');
	s[0] = s.back() = d[0] = d.back() = '1';
	vl ans(11);

	rep(i, 2, 11)
		ans[i] = stoll(d, 0, i);
	rep(i, 0, j) {
		printf("%s%s", s.c_str(), s.c_str());
		rep(k, 2, 11)
			printf(" %lld", ans[k]);
		printf("\n");

		rrep(k, sz(s) - 2, 0) {
			if (s[k] == '0') {
				s[k] = '1';
				break;
			} else {
				s[k] = '0';
			}
		}
	}
}
