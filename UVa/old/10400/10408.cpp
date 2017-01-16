#include <bits/stdc++.h>
#include "fraction.h"

int main() {
	int n, k;
	while (cin >> n >> k) {
		priority_queue<Fraction<int>> q;
		rep(i, 1, n + 1)
			q.push(Fraction<int>(-1, i));
		rep(i, 1, k) {
			int num = q.top().num(), den = q.top().den();
			q.pop();
			do {
				num--;
			} while (gcd(num, den) != 1);
			q.push(Fraction<int>(num, den));
		}
		printf("%d/%d\n", -q.top().num(), q.top().den());
	}
}
