#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t;
	cin >> n;
	vpii book(n);
	irep(b, book)
		cin >> b.first >> b.second;

	cin >> t;
	rep(i, 0, n) {
		if (t >= book[i].first && t <= book[i].second) {
			print(n - i);
			break;
		}
	}
}
