#include <bits/stdc++.h>
#include "sorting.h"
#include "header.h"

int main() {
	forX() {
		int k, n;
		cin >> k >> n;
		vs dna(n);
		read(dna);
		vector<pair<pii, string>> sorted(n);
		rep(i, 0, n) {
			string s = dna[i];
			sorted[i] = { {inversionCount(s, 0, sz(s)), i}, dna[i] };
		}

		sort(all(sorted));
		printX("");
		irep(s, sorted)
			print(s.second);
	}
}
