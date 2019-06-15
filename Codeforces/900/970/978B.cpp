#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	string s;
	cin >> n >> s;
	rep(i, 2, sz(s)) {
		if (s[i] == 'x' && s[i - 1] == 'x' && s[i - 2] == 'x')
			ans++;
	}
	print(ans);
}
