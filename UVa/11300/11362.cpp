#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		bool good = true;
		cin >> n;
		vs num(n);
		read(num);
		sort(all(num));
		rep(i, 1, n) {
			if (sz(num[i - 1]) <= sz(num[i]) && num[i - 1] == num[i].substr(0, sz(num[i - 1])))
				good = false;
		}
		printf("%s\n", good ? "YES" : "NO");
	}
}
