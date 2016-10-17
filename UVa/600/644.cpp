#include <bits/stdc++.h>
#include "header.h"

int main() {
	int X = 1;
	vs str;
	string s;
	while (cin >> s) {
		if (s == "9") {
			sort(all(str));
			bool pre = false;
			rep(i, 0, sz(str) - 1) {
				if (sz(str[i]) > sz(str[i + 1]))
					continue;
				bool not_pre = false;
				rep(j, 0, sz(str[i])) {
					if (str[i][j] != str[i + 1][j]) {
						not_pre = true;
						break;
					}
				}
				if (!not_pre) {
					pre = true;
					break;
				}
			}
			printf("Set %d is %simmediately decodable\n", X, pre ? "not " : "");
			str.clear();
			X++;
		} else {
			str.push_back(s);
		}
	}
}
