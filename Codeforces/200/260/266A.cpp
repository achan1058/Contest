#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	string s;
	cin >> n >> s;
	rep(i, 1, n) {
		if (s[i] == s[i - 1])
			ans++;
	}
	print(ans);
}
