#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	map<string, vs> m;
	while (cin >> s && s != "XXXXXX") {
		string s2 = s;
		sort(all(s2));
		m[s2].pb(s);
	}
	irep(strs, m)
		sort(all(strs.y));
	while (cin >> s && s != "XXXXXX") {
		sort(all(s));

		if (m[s].empty())
			printf("NOT A VALID WORD\n");
		else {
			irep(str, m[s])
				printf("%s\n", str.c_str());
		}
		printf("******\n");
	}
}
