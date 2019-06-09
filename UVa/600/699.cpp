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
		vi out;
		irep(v, ans) {
			if (v > 0)
				out.pb(v);
		}
		print(out);
		print();
		ans = vi(81);
	}
}
