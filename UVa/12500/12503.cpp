#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, cur, pos;
	string s;
	forX() {
		cin >> n;
		cur = 0;
		vector<int> dir(n, 0);

		for (int i = 0; i < n; i++) {
			cin >> s;
			if (s == "LEFT") {
				cur--;
				dir[i] = -1;
			} else if (s == "RIGHT") {
				cur++;
				dir[i] = 1;
			} else {
				cin >> s >> pos;
				cur += dir[pos - 1];
				dir[i] = dir[pos - 1];
			}
		}
		printf("%d\n", cur);
	}
}
