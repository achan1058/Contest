#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, r, p;
	while (cin >> n >> r) {
		vb ppl(n);
		rep(i, 0, r) {
			cin >> p;
			ppl[p - 1] = true;
		}

		rep(i, 0, n) {
			if (!ppl[i])
				printf("%d ", i + 1);
		}
		print(n == r ? "*" : "");
	}
}
