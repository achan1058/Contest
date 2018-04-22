#include <bits/stdc++.h>
#include "header.h"

bool is_palin(int h, int m) {
	string s = to_string(100 * h + m);
	string s2 = s;
	reverse(all(s2));
	return s == s2;
}

int main() {
	vs times;
	drep(h, m, 24, 60) {
		if (is_palin(h, m)) {
			stringstream ss;
			ss << setw(2) << setfill('0') << h << ':' << setw(2) << setfill('0') << m;
			times.pb(ss.str());
		}
	}
	forX() {
		string s;
		cin >> s;
		auto it = upper_bound(all(times), s);
		if (it == times.end())
			printf("00:00\n");
		else
			printf("%s\n", it->c_str());
	}
}
