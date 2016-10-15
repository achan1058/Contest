#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n && n != 0) {
		int min_space = inf, num_space = 0;
		getline(cin, s);
		rep(i, 0, n) {
			int space = 0;
			getline(cin, s);
			fori(c, s) {
				if (c == ' ')
					space++;
			}
			num_space += space;
			min_space = min(min_space, space);
		}
		printf("%d\n", num_space - min_space * n);
	}
}
