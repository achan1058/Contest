#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		int m = 0;
		irep(c, s) {
			if (c > '9')
				c -= 'A' - '0' - 10;
			m = max(m, c - '0' + 1);
		}

		rrep(i, 15, 2) {
			if (i < 15)
				printf(" ");
			if (i < m) {
				printf("?");
				continue;
			}

			string s1 = s, s2 = s;
			reverse(all(s2));
			int count = 0;
			while (s1 != s2) {
				rep(j, 0, sz(s2)) {
					s1[j] += s2[j] - '0';
					if (s1[j] >= i + '0') {
						if (j == sz(s1) - 1)
							s1.resize(sz(s1) + 1, '0');
						s1[j] -= i;
						s1[j + 1]++;
					}
				}
				s2 = s1;
				count++;
				reverse(all(s2));
			}
			printf("%d", count);
		}
		printf("\n");
	}
}
