#include <bits/stdc++.h>
#include "primes.h"

int main() {
	set<int> left = { 3, 7 }, right = { 2, 3, 5, 7 };
	int head = 10, ans = 0, num = 0;
	while (num < 11) {
		set<int> nl, nr, inter;
		irep(l, left) {
			rep(j, 1, 10) {
				if (j == 4 || j == 6 || j == 8)
					continue;
				if (isPrime(head * j + l))
					nl.insert(head * j + l);
			}
		}
		irep(r, right) {
			rep(j, 1, 10) {
				if (j == 2 || j == 4 || j == 5 || j == 6 || j == 8)
					continue;
				if (isPrime(10 * r + j))
					nr.insert(10 * r + j);
			}
		}
		left = nl;
		right = nr;
		set_intersection(all(left), all(right), inserter(inter, inter.begin()));
		irep(p, inter) {
			ans += p;
			num++;
		}
		head *= 10;
	}
	printf("%d\n", ans);
}
