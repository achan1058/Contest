#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, v;
	whileX(cin >> n >> k && (n | k) != 0) {
		vi tally(10001);
		vb hit(10001);
		rep(i, 0, n) {
			cin >> v;
			tally[v]++;
			hit[v] = true;
		}
		rep(i, 1, 10000)
			tally[i] += tally[i - 1];
		print("CASE# %d:", X);
		rep(i, 0, k) {
			cin >> v;
			if (hit[v])
				print("%d found at %d", v, tally[v - 1] + 1);
			else
				print("%d not found", v);
		}
	}
}
