#include <bits/stdc++.h>
#include "header.h"

class Quacking {
public:
	int quack(string s) {
		string q = "quack";
		vb processed(sz(s), false);
		int cur, num = 0, remain = sz(s);

		while (remain > 0) {
			cur = 0;

			rep(i, 0, sz(s)) {
				if (!processed[i] && s[i] == q[cur % 5]) {
					processed[i] = true;
					cur++;
					remain--;
				}
			}

			if (cur == 0 || cur % 5 != 0)
				return -1;

			num++;
		}

		return num;
	}
};
