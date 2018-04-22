#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		string s;
		getline(cin, s);
		int total = 0, mn = inf;
		rep(i, 0, n) {
			int num_space = 0;
			getline(cin, s);
			irep(c, s) {
				if (c == ' ')
					num_space++;
			}
			total += num_space;
			mn = min(mn, num_space);
		}
		printf("%d\n", total - mn * n);
	}
}
