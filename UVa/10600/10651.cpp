#include <bits/stdc++.h>
#include "header.h"

int posInt(const vb& pos) {
	int n = 0;
	rep(i, 0, 12) {
		n *= 2;
		n += pos[i] ? 1 : 0;
	}
	return n;
}

int main() {
	vi ans(1 << 12);
	rep(i, 0, 13) {
		vb pos(12);
		rep(j, 12 - i, 12)
			pos[j] = true;
		do {
			int t = posInt(pos);
			ans[t] = i;
			rep(j, 1, 11) {
				if (!pos[j - 1] && pos[j] && pos[j + 1]) {
					vb pos2 = pos;
					pos2[j - 1] = true;
					pos2[j] = pos2[j + 1] = false;
					ans[t] = min(ans[t], ans[posInt(pos2)]);
				}
				if (pos[j - 1] && pos[j] && !pos[j + 1]) {
					vb pos2 = pos;
					pos2[j - 1] = pos2[j] = false;
					pos2[j + 1] = true;
					ans[t] = min(ans[t], ans[posInt(pos2)]);
				}
			}
		} while (next_permutation(all(pos)));
	}
	
	string s;
	forX() {
		cin >> s;
		vb pos(12);
		rep(i, 0, 12)
			pos[i] = s[i] == 'o';
		print(ans[posInt(pos)]);
	}
}
