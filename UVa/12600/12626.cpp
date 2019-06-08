#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		auto t = tally(s);
		int ans = min({ t['M'], t['A'] / 3, t['R'] / 2, t['G'], t['I'], t['T'] });
		printv(ans);
	}
}
