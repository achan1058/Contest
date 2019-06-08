#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi tally(5);
	int v;
	forX() {
		cin >> v;
		tally[v]++;
	}
	int ans = tally[4];
	ans += tally[3];
	tally[1] = max(tally[1] - tally[3], 0);
	ans += tally[2] / 2;
	tally[2] %= 2;
	if (tally[2]) {
		ans++;
		tally[1] = max(tally[1] - 2, 0);
	}
	ans += (tally[1] + 3) / 4;
	printv(ans);
}
