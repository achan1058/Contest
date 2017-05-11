#include <bits/stdc++.h>
#include "header.h"

unordered_map<string, int> m;
int search(string& s) {
	auto it = m.find(s);
	if (it != m.end())
		return it->y;
	int best = 0;
	rep(i, 0, 12) {
		if (s[i] == 'o')
			best++;
	}
	rep(i, 1, 11) {
		if (s[i] == '-')
			continue;
		if (s[i - 1] == 'o' && s[i + 1] == '-') {
			s[i - 1] = s[i] = '-';
			s[i + 1] = 'o';
			best = min(best, search(s));
			s[i - 1] = s[i] = 'o';
			s[i + 1] = '-';
		} else if (s[i + 1] == 'o' && s[i - 1] == '-') {
			s[i + 1] = s[i] = '-';
			s[i - 1] = 'o';
			best = min(best, search(s));
			s[i + 1] = s[i] = 'o';
			s[i - 1] = '-';
		}
	}
	return best;
}

int main() {
	forX() {
		string s;
		cin >> s;
		printf("%d\n", search(s));
	}
}
