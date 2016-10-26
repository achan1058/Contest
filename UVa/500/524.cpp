#include <bits/stdc++.h>
#include "header.h"

int n;
vi primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
vi ans;
vb isPrime(32, false), used(17, false);
void backtrack() {
	if (sz(ans) == n) {
		if (isPrime[ans[n - 1] + ans[0]]) {
			rep(i, 0, n)
				printf("%d%s", ans[i], i == n - 1 ? "\n" : " ");
		}
		return;
	}

	rep(i, 2, n + 1) {
		if (!used[i] && isPrime[ans.back() + i]) {
			used[i] = true;
			ans.pb(i);
			backtrack();
			ans.pop_back();
			used[i] = false;
		}
	}
}

int main() {
	ans.pb(1);
	used[1] = true;
	irep(p, primes)
		isPrime[p] = true;
	whileX(cin >> n) {
		printX("Case %d:\n", X);
		backtrack();
	}
}
