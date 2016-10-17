#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T;
	cin >> T;
	string s;
	for (int X = 0; X < T; X++) {
		int ans = 0, cnt = 0;
		cin >> s;
		for (char c : s) {
			if (c == 'O')
				cnt++;
			else
				cnt = 0;
			ans += cnt;
		}
		printf("%d\n", ans);
	}
}
