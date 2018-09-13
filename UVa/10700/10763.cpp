#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		ll p, q;
		unordered_map<ll, int> count;
		rep(i, 0, n) {
			cin >> p >> q;
			count[p * inf + q]++;
		}
		bool good = true;
		irep(c, count) {
			p = c.x / inf;
			q = c.x % inf;
			if (count[q * inf + p] != c.y) {
				good = false;
				break;
			}
		}
		print("%s", good ? "YES" : "NO");
	}
}