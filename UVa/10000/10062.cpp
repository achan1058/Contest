#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int X = 0;
	while (getline(cin, s)) {
		vector<pii> result(300);
		rep(i, 0, 300)
			result[i] = { 0, -i };
		irep(c, s)
			result[c].x++;

		printf("%s", X > 0 ? "\n" : "");
		sort(all(result));
		irep(v, result) {
			if (v.x == 0)
				continue;
			printf("%d %d\n", -v.y, v.x);
		}
		X++;
	}
}
