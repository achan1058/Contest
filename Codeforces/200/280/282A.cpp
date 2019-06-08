#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	string s;
	cin >> n;
	rep(i, 0, n) {
		cin >> s;
		if (s[1] == '+')
			ans++;
		else
			ans--;
	}
	print(ans);
}
