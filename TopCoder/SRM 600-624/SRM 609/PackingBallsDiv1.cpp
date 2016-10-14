#include <bits/stdc++.h>
#include "header.h"

class PackingBallsDiv1 {
public:
	int minPacks(int K, int A, int B, int C, int D) {
		vi X(K);
		int total = 0;
		ll cur = A;

		rep(i, 0, K) {
			total += (int)(cur / K);
			X[i] = (int)(cur % K);
			cur = (cur * B + C) % D + 1;
		}

		sort(all(X));

		int extra = 0, dec = 0;
		int first = 0;
		rrep(i, K - 1, 0) {
			if (X[i] - dec == 0)
				goto endloop;
			while (X[first] <= dec) {
				first++;
				if (first > i)
					goto endloop;
			}

			if (X[i] - dec < i - first + 1) {
				dec++;
				i++;
			} else {
				extra++;
			}
		}

	endloop:

		return dec + extra + total;
	}
};
