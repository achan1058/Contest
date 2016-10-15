#include <bits/stdc++.h>
#include "header.h"

class ParenthesesDiv2Easy {
public:
	int getDepth(string s) {
		int depth = 0, maxd = 0;
		irep(c, s) {
			if (c == '(') {
				depth++;
				maxd = max(depth, maxd);
			} else {
				depth--;
			}
		}

		return maxd;
	}
};
