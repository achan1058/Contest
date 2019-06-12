#include <bits/stdc++.h>
#include "header.h"

vi ans;
bool recurse(int pos = 40) {
	int v;
	cin >> v;
	if (v == -1)
		return false;
	ans[pos] += v;
	recurse(pos - 1);
	recurse(pos + 1);
	return true;
}

int main() {
	ans = vi(81);
	whileX(recurse()) {
		printc();
		rep(i, 0, 81) {
			if (ans[i] > 0)
				printf("%d%c", ans[i], ans[i + 1] == 0 ? '\n' : ' ');
		}
		print();
		ans = vi(81);
	}
}
