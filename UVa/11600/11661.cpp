#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n >> s && n != 0) {
		int nextr = inf, nextd = inf, best = inf;
		irep(c, s) {
			nextr++;
			nextd++;
			if (c == 'Z') {
				best = 0;
				break;
			} else if (c == 'R') {
				nextr = 0;
				best = min(best, nextd);
			} else if (c == 'D') {
				nextd = 0;
				best = min(best, nextr);
			}
		}
		print(best);
	}
}
