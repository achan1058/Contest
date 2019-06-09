#include <bits/stdc++.h>
#include "header.h"

int main() {
	int z, i, m, l;
	whileX(cin >> z >> i >> m >> l && (z | i | m | l) != 0) {
		vi cycle(m);
		int cur = 1;
		while (cycle[l] == 0) {
			cycle[l] = cur;
			l = (z * l + i) % m;
			cur++;
		}

		printc(cur - cycle[l]);
	}
}
