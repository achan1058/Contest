#include <bits/stdc++.h>
#include "combinatorics.h"
#include "utils.h"
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		map<char, int> m = tally(s);
		int cur = 0;
		ll ans = 1;
		irep(p, m) {
			cur += p.second;
			ans *= binom(cur, p.second);
		}
		print("Data set %d: %lld", X, ans);
	}
}
