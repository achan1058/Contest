#include <bits/stdc++.h>
#include "header.h"

int getInv(string s) {
	int ans = 0;
	drep(i, j, sz(s), sz(s) - i - 1) {
		if (s[j] > s[j + 1]) {
			ans++;
			swap(s[j], s[j + 1]);
		}
	}
	return ans;
}

int main() {
	forX() {
		int k, n;
		cin >> k >> n;
		vs dna(n);
		read(dna);
		vector<pair<pii, string>> sorted(n);
		rep(i, 0, n)
			sorted[i] = { {getInv(dna[i]), i}, dna[i] };

		sort(all(sorted));
		printX("");
		rep(i, 0, n)
			print("%s", sorted[i].s.c_str());
	}
}
