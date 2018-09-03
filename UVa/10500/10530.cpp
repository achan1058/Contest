#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, mx = 10, mn = 1;
	string s1, s2;
	while (cin >> n >> s1 >> s2 && n != 0) {
		if (s2 == "high") {
			mx = min(mx, n - 1);
		} else if (s2 == "low") {
			mn = max(mn, n + 1);
		} else {
			if (mn <= n && n <= mx)
				print("Stan may be honest");
			else
				print("Stan is dishonest");
			mx = 10;
			mn = 1;
		}
	}
}
