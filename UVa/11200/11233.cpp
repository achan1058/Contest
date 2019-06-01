#include <bits/stdc++.h>
#include "header.h"

string last2(const string& s) {
	if (sz(s) == 1)
		return " " + s;
	else
		return s.substr(sz(s) - 2);
}

int main() {
	int l, n;
	cin >> l >> n;
	string s1, s2;
	map<string, string> m;
	rep(i, 0, l) {
		cin >> s1 >> s2;
		m[s1] = s2;
	}
	rep(i, 0, n) {
		cin >> s1;
		auto it = m.find(s1);
		if (it != m.end()) {
			print("%s", it->second.c_str());
			continue;
		}

		string ls = last2(s1);
		if (s1.back() == 'y' && ls != "ay" && ls != "ey" && ls != "iy" && ls != "oy" && ls != "uy")
			s1 = s1.substr(0, sz(s1) - 1) + "ies";
		else if (s1.back() == 'o' || s1.back() == 's' || s1.back() == 'x' || ls == "ch" || ls == "sh")
			s1 += "es";
		else
			s1 += "s";
		print("%s", s1.c_str());
	}
}
