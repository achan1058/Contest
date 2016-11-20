#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi p4(28), p6(31);
	ll better = 0;
	p4[0] = p6[0] = 1;
	
	rep(i, 0, 9) {
		rrep(j, 24, 0) {
			p4[j + 1] += p4[j];
			p4[j + 2] += p4[j];
			p4[j + 3] += p4[j];
		}
	}

	rep(i, 0, 6) {
		rrep(j, 25, 0) {
			p6[j + 1] += p6[j];
			p6[j + 2] += p6[j];
			p6[j + 3] += p6[j];
			p6[j + 4] += p6[j];
			p6[j + 5] += p6[j];
		}
	}

	rep(i, 0, 28) {
		rep(j, 0, 31) {
			if (i + 9 > j + 6)
				better += p4[i] * p6[j];
		}
	}

	printf("%.7f", better / pow(4, 9) / pow(6, 6));
}
