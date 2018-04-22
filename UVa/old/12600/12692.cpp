#include <bits/stdc++.h>
#include "sorting.h"
#include "header.h"

int main() {
	forX() {
		int n, k;
		cin >> n >> k;
		vi ppl(n), pos((n + k - 1) / k);
		read(ppl);
		rep(i, 0, sz(pos))
			pos[i] = i * k;
		irep(v, ppl)
			v = pos[(v - 1) / k]++;

		int fast = 0;
		rep(i, 0, n)
			fast = max(fast, abs(ppl[i] - i));
		printc("%d\n", inversionCount(ppl, 0, n) - fast);
	}
}
