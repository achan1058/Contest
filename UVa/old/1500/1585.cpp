#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
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
