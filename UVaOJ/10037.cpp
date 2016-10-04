#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		vi ppl(n);
		int total = 0;
		irep(p, ppl)
			cin >> p;

		sort(all(ppl));
		printf("%s", X > 0 ? "\n" : "");

		if (n == 1) {
			printf("%d\n%d\n", ppl[0], ppl[0]);
			continue;
		}

		stringstream ss;
		while (sz(ppl) > 3) {
			if (ppl[0] + 2 * ppl[1] + ppl[sz(ppl) - 1] < 2 * ppl[0] + ppl[sz(ppl) - 1] + ppl[sz(ppl) - 2]) {
				total += ppl[0] + 2 * ppl[1] + ppl[sz(ppl) - 1];
				ss << ppl[0] << ' ' << ppl[1] << endl
					<< ppl[0] << endl
					<< ppl[sz(ppl) - 2] << ' ' << ppl[sz(ppl) - 1] << endl
					<< ppl[1] << endl;
			} else {
				total += 2 * ppl[0] + ppl[sz(ppl) - 1] + ppl[sz(ppl) - 2];
				ss << ppl[0] << ' ' << ppl[sz(ppl) - 1] << endl
					<< ppl[0] << endl
					<< ppl[0] << ' ' << ppl[sz(ppl) - 2] << endl
					<< ppl[0] << endl;

			}
			ppl.resize(sz(ppl) - 2);
		}

		if (sz(ppl) == 3) {
			total += ppl[0] + ppl[2];
			ss << ppl[0] << ' ' << ppl[2] << endl
				<< ppl[0] << endl;
			ppl.resize(sz(ppl) - 1);
		}

		total += ppl[1];
		ss << ppl[0] << ' ' << ppl[1] << endl;
		printf("%d\n%s", total, ss.str().c_str());
	}
}
