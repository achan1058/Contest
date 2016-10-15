#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string header(60, '-');
	while (cin >> n) {
		vs names(n);
		int longest = 0;
		irep(s, names) {
			cin >> s;
			longest = max(longest, sz(s));
		}

		int numcols = 62 / (longest + 2), numrows = n / numcols + (n % numcols == 0 ? 0 : 1);
		sort(all(names));
		printf("%s\n", header.c_str());
		rep(i, 0, numrows) {
			rep(j, 0, numcols) {
				if (i + numrows * j >= n)
					break;
				if (i + numrows * (j + 1) < n)
					names[i + numrows * j].resize(longest + 2, ' ');
				printf("%s", names[i + numrows * j].c_str());
			}
			printf("\n");
		}
	}
}
