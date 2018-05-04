#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, total = 0, above = 0;
		cin >> n;
		vi scores(n);
		irep(v, scores) {
			cin >> v;
			total += v;
		}
		irep(v, scores) {
			if (v * n > total)
				above++;
		}
		print("%.3f%%", 100. * above / n);
	}
}
