#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t;
	cin >> n;
	vector<pii> book(n);
	irep(b, book)
		cin >> b.first >> b.second;

	cin >> t;
	rep(i, 0, n) {
		if (t >= book[i].first && t <= book[i].second) {
			printv(n - i);
			break;
		}
	}
}
