#include <bits/stdc++.h>
#include "header.h"

class Plusonegame {
public:
    string getorder(string s) {
		string rest, ans;
		sort(all(s));
		int cur = 0, score = 0;
		while (cur < sz(s) && s[cur] == '+')
			cur++;

		int plus = cur;
		while (cur < sz(s)) {
			while (s[cur] - '0' > score && score < plus) {
				ans += "+";
				score++;
			}

			if (s[cur] - '0' != score)
				break;

			ans += s[cur];
			cur++;
		}
		rep(i, score, plus)
			ans += "+";

		ans += s.substr(cur);
		return ans;
    }
};
