#include <bits/stdc++.h>
#include "header.h"

class DevuAndGame {
public:
	string canWin(vector<int> nextLevel) {
		int n = sz(nextLevel), cur = 0;
		vb visited(n);

		while (!visited[cur]) {
			if (nextLevel[cur] == -1)
				return "Win";

			visited[cur] = true;
			cur = nextLevel[cur];
		}
		return "Lose";
	}
};
