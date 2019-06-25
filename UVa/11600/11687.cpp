#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s != "END") {
		int d = sz(s), n;
		for (n = 1; d != 1; n++)
			d = sz(to_string(d));
		print(s == "1" ? 1 : n + 1);
	}
}
