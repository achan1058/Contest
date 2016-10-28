#include <bits/stdc++.h>
#include "util.h"

int main() {
	int n, m;
	whileX(cin >> n >> m) {
		vs keywords(n), excuses(m);
		vi numkey;
		read(keywords);
		getline(cin, excuses[0]);
		irep(s, excuses) {
			getline(cin, s);
			vs tokens = tokenizer(s, [](int c) {return isalpha(c) ? 0 : 1; });
			int numkeywords = 0;
			irep(v, tokens) {
				transform(all(v), v.begin(), ::tolower);
				irep(k, keywords) {
					if (v == k) {
						numkeywords++;
						break;
					}
				}
			}
			numkey.pb(numkeywords);
		}

		int maxkey = *max_element(all(numkey));
		printf("Excuse Set #%d\n", X);
		rep(i, 0, m) {
			if (numkey[i] == maxkey)
				printf("%s\n", excuses[i].c_str());
		}
		printf("\n");
	}
}
