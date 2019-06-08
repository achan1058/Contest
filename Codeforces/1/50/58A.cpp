#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s, hello = "hello";
	cin >> s;
	int i = 0, hi = 0;
	while (i < sz(s) && hi < 5) {
		if (s[i] == hello[hi])
			hi++;
		i++;
	}
	print(hi == 5 ? "YES" : "NO");
}
