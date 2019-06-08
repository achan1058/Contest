#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	map<string, vs> dict;
	while (cin >> s && s != "XXXXXX") {
		string d = s;
		sort(all(d));
		dict[d].pb(s);
	}
	irep(d, dict)
		sort(all(d.second));

	while (cin >> s && s != "XXXXXX") {
		sort(all(s));
		if (dict[s].empty()) {
			print("NOT A VALID WORD");
		} else {
			irep(d, dict[s])
				printv(d);
		}
		print("******");
	}
}
