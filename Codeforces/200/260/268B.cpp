#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	int ans = n;
	rep(i, 1, n)
		ans += i * (n - i);
	printd(ans);
}
