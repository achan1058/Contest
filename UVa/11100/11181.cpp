#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, r;
	whileX(cin >> n >> r && (n | r) != 0) {
		vd prob(n), per_prob(n);
		vi perm(n);
		read(prob);

		rep(i, 0, r)
			perm[n - r + i] = 1;

		double total = 0;
		do {
			double p = 1;
			rep(i, 0, n) {
				if (perm[i] == 1)
					p *= prob[i];
				else
					p *= 1 - prob[i];
			}
			total += p;
			rep(i, 0, n) {
				if (perm[i])
					per_prob[i] += p;
			}
		} while (next_permutation(all(perm)));
		printc();
		rep(i, 0, n)
			print("%.6f", per_prob[i] / total);
	}
}
