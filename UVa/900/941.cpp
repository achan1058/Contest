#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	string s;
	int T;
	ll n;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> s >> n;
		vi count(26);
		irep(c, s)
			count[c - 'a']++;
		rep(i, 0, sz(s)) {
			rep(j, 0, 26) {
				if (count[j] > 0) {
					count[j]--;
					ll d = multinomial<ll>(count);
					if (n - d < 0) {
						printf("%c", char(j + 'a'));
						break;
					}
					count[j]++;
					n -= d;
				}
			}
		}

		printf("\n");
	}
}

/*
ll numperms(const string& s) {
	vi count;
	int cur = 1;
	for (int i = 1; i < sz(s); i++) {
		if (s[i] == s[i - 1]) {
			cur++;
		} else {
			count.pb(cur);
			cur = 1;
		}
	}
	count.pb(cur);
	return multinomial<ll>(count);
}

int main() {
	string s;
	int T;
	ll n;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> s >> n;
		sort(all(s));

		string out;
		while (!s.empty()) {
			for (int i = 0; i < sz(s); i++) {
				string s2 = s;
				s2.erase(i, 1);
				ll move = numperms(s2);
				if (move > n) {
					out += s[i];
					s = s2;
					break;
				} else {
					n -= move;
				}
			}
		}

		printf("%s\n", out.c_str());
	}
}
*/