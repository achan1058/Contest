#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int c, q, v1, v2;
		string s;
		vector<pair<string, pii>> db;
		cin >> c;
		rep(i, 0, c) {
			cin >> s >> v1 >> v2;
			db.pb({ s, {v1, v2} });
		}

		cin >> q;
		printX("");
		rep(i, 0, q) {
			string ans = "";
			cin >> v1;
			irep(p, db) {
				if (v1 < p.second.first || v1 > p.second.second)
					continue;
				if (ans != "") {
					ans = "";
					break;
				}
				ans = p.first;
			}

			if (ans == "")
				print("UNDETERMINED");
			else
				printv(ans);
		}
	}
}
