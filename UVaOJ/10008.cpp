#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	vector<pair<int, char>> result(26);
	cin >> n;
	getline(cin, s);
	rep(i, 0, 26)
		result[i] = { 0, i + 'A' };
	rep(i, 0, n) {
		getline(cin, s);
		irep(c, s) {
			if (isalpha(c))
				result[toupper(c) - 'A'].x--;
		}
	}
	sort(all(result));
	irep(v, result) {
		if (v.x == 0)
			break;
		printf("%c %d\n", v.y, -v.x);
	}
}
