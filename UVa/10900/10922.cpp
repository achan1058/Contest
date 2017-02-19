#include <bits/stdc++.h>
#include "header.h"

string sumdigits(string& s) {
	int ans = 0;
	irep(c, s)
		ans += c - '0';
	return to_string(ans);
}

int main() {
	string s;
	while (cin >> s && s != "0") {
		int deg = 0;
		string sum = s;
		while (sz(sum) > 1) {
			sum = sumdigits(sum);
			deg++;
		}
		if (sum == "9")
			printf("%s is a multiple of 9 and has 9-degree %d.\n", s.c_str(), max(1, deg));
		else
			printf("%s is not a multiple of 9.\n", s.c_str());
	}
}
