#include <bits/stdc++.h>
#include "header.h"

int calc(const string& s) {
	int v = 0;
	irep(c, s) {
		if (isalpha(c))
			v += tolower(c) - 'a' + 1;
	}
	return v % 9 ? v % 9 : 9;
}

int main() {
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		double v1 = calc(s1), v2 = calc(s2);
		print("%.2f %%", min(v1, v2) / max(v1, v2) * 100);
	}
}
