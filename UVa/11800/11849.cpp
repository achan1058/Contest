#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0) {
		int total = 0, nhead = 0, mhead = 0;
		vi ncd(n), mcd(m);
		read(ncd);
		read(mcd);
		while (nhead < n && mhead < m) {
			if (ncd[nhead] == mcd[mhead]) {
				total++;
				nhead++;
				mhead++;
			} else if (ncd[nhead] < mcd[mhead]) {
				nhead++;
			} else {
				mhead++;
			}
		}

		printf("%d\n", total);
	}
}
