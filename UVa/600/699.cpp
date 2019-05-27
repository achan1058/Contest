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
		bool first = true;
		printcn();
		irep(v, ans) {
			if (v > 0) {
				printf("%s%d", first ? "" : " ", v);
				first = false;
			}
		}
		print("\n");
		ans = vi(81);
	}
}
