#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		vs num(n);
		bool good = true;
		irep(s, num)
			cin >> s;
		sort(all(num));
		rep(i, 1, n) {
			if (sz(num[i - 1]) <= sz(num[i]) && num[i - 1] == num[i].substr(0, sz(num[i - 1])))
				good = false;
		}
		printf("%s\n", good ? "YES" : "NO");
	}
}
