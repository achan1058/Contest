#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		map<ll, ll> counts;
		ll width, ppl;
		cin >> width >> ppl;
		counts[width] += 1;

		while (true) {
			pair<ll, ll> cur = *counts.rbegin();
			ll small = (cur.x - 1) / 2, large = cur.x / 2;
			ppl -= cur.y;
			if (ppl <= 0) {
				printp("%lld %lld\n", large, small);
				break;
			}
			counts[small] += cur.y;
			counts[large] += cur.y;
			counts.erase(cur.x);
		}
	}
}