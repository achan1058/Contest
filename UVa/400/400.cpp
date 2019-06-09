#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vs names(n);
		string lines(60, '-');
		read(names);
		sort(all(names));
		rep(r, 1, n + 1) {
			vi offset;
			int space = 0;
			for (int i = 0; i < n; i += r) {
				int l = 0;
				rep(j, i, min(j + r, n))
					l = max(l, sz(names[j]));
				offset.pb(space);
				space += l + 2;
			}
			if (space <= 62) {
				print(lines);
				rep(j, 0, r) {
					string ans;
					for (int i = 0; i * r + j < n; i++) {
						ans.resize(offset[i], ' ');
						ans += names[i * r + j];
					}
					print(ans);
				}
				break;
			}
		}
	}
}
