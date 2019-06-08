#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		string s;
		getline(cin, s);
		int mn = inf, total = 0;
		rep(i, 0, n) {
			int count = 0;
			getline(cin, s);
			irep(c, s)
				count += c == ' ' ? 1 : 0;

			mn = min(mn, count);
			total += count;
		}
		print(total - mn * n);
	}
}
