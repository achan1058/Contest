#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, d, ans = 1;
		cin >> d >> n;
		n--;
		rep(i, 0, d - 1) {
			ans *= 2;
			ans += n % 2;
			n /= 2;
		}
		printd(ans);
	}
}
