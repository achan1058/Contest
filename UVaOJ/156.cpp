#include <bits/stdc++.h>
#include "header.h"

int main() {
	unordered_map<string, pair<int, string>> freq;
	vs ananagram;
	string s;
	while (cin >> s && s != "#") {
		string s2 = s;
		fori(c, s2)
			c = tolower(c);

		sort(all(s2));
		freq[s2].x++;
		freq[s2].y = s;
	}

	fori(pr, freq)
		if (pr.y.x == 1)
			ananagram.pb(pr.y.y);
		
	sort(all(ananagram));
	fori(a, ananagram)
		printf("%s\n", a.c_str());
}
