#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		int n = sz(s);
		bool all9 = true;

		irep(c, s) {
			if (c != '9') {
				all9 = false;
				break;
			}
		}

		if (all9) {
			printf("1");
			rep(i, 0, n - 1)
				printf("0");
			printf("1\n");
			continue;
		}

		bool greater = true;
		rrep(i, (n - 1) / 2, 0) {
			if (s[i] > s[n - i - 1]) {
				greater = false;
				break;
			} else if (s[i] < s[n - i - 1]) {
				break;
			}
		}

		if (greater) {
			rrep(i, (n - 1) / 2, 0) {
				if (s[i] != '9') {
					s[i] ++;
					break;
				} else {
					s[i] = '0';
				}
			}
		}

		rep(i, 0, (n + 1) / 2)
			printf("%c", s[i]);
		rrep(i, (n - 2) / 2, 0)
			printf("%c", s[i]);
		printf("\n");
	}
}
