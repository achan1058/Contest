#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	string s;
	cin >> n;
	rep(i, 0, n) {
		cin >> s;
		if (s == "++X" || s == "X++")
			ans++;
		else
			ans--;
	}
	printf("%d\n", ans);
}
