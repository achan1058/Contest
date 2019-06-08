#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		string s;
		cin >> n;
		vs cand(n);
		vvi choice;
		getline(cin, s);
		rep(i, 0, n)
			getline(cin, cand[i]);
		while (getline(cin, s) && s != "") {
			vi ch(n);
			stringstream ss(s);
			irep(v, ch) {
				ss >> v;
				v--;
			}
			choice.pb(ch);
		}

		vb elim(n);
		bool next = true;
		while (next) {
			next = false;
			vi count(n);
			irep(ch, choice) {
				irep(c, ch) {
					if (!elim[c]) {
						count[c]++;
						break;
					}
				}
			}
			int mx = 0, mn = inf;
			rep(i, 0, n) {
				if (elim[i])
					continue;
				mx = max(mx, count[i]);
				mn = min(mn, count[i]);
			}

			if (mx != mn) {
				rep(i, 0, n) {
					if (count[i] == mn)
						elim[i] = true;
				}
				next = true;
			}
		}

		printX("");
		rep(i, 0, n) {
			if (!elim[i])
				print(cand[i]);
		}
	}
}
