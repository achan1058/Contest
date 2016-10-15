#include <bits/stdc++.h>
#include "header.h"

class SpamChecker {
public:
	string spamCheck(string judgeLog, int good, int bad) {
		int score = 0;
		fori(c, judgeLog) {
			score += c == 'o' ? good : -bad;
			if (score < 0)
				return "SPAM";
		}
		return "NOT SPAM";
	}
};
