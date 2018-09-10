#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(cin >> s) {
		vs codes;
		do {
			codes.pb(s);
		} while (cin >> s && s != "9");
		sort(all(codes));
		bool good = true;
		rep(i, 0, sz(codes) - 1) {
			if (codes[i + 1].substr(0, sz(codes[i])) == codes[i]) {
				good = false;
				break;
			}
		}
		print("Set %d is %simmediately decodable", X, good ? "" : "not ");
	}
}
