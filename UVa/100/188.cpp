#include <bits/stdc++.h>
#include "util.h"

ll calcScore(string s) {
	ll score = 0;
	irep(c, s) {
		score *= 32;
		score += c - 'a' + 1;
	}
	return score;
}

int main() {
	string s;
	while (getline(cin, s)) {
		printf("%s\n", s.c_str());
		vs words = tokenizer(s);
		int n = sz(words);
		vl score(n);
		rep(i, 0, n)
			score[i] = calcScore(words[i]);

		ll C = max(1, n - 1);
		while (true) {
			map<ll, vi> scoreTally;
			ll C0 = C;
			rep(i, 0, n)
				scoreTally[(C / score[i]) % n].pb(i);

			irep(tallyPair, scoreTally) {
				if (sz(tallyPair.y) > 1) {
					vl curScore;
					irep(i, tallyPair.y)
						curScore.pb((C / score[i] + 1) * score[i]);

					sort(all(curScore));
					C0 = max(C0, curScore[sz(curScore) - 2]);
				}
			}
			if (C0 == C)
				break;
			else
				C = C0;
		}
	end:;
		printf("%lld\n\n", C);
	}
}
