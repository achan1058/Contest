#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s, s2;
	cin >> s;
	bool good = false;
	rep(i, 0, 5) {
		cin >> s2;
		if (s[0] == s2[0] || s[1] == s2[1])
			good = true;
	}
	print("%s", good ? "YES" : "NO");
}
