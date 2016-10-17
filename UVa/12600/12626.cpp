#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		vector<int> count(26);
		int ans = inf;
		for (char c : s)
			count[c - 'A']++;
		ans = min(ans, count['M' - 'A']);
		ans = min(ans, count['A' - 'A'] / 3);
		ans = min(ans, count['R' - 'A'] / 2);
		ans = min(ans, count['G' - 'A']);
		ans = min(ans, count['I' - 'A']);
		ans = min(ans, count['T' - 'A']);
		printf("%d\n", ans);
	}
}
