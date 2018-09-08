#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<char, int> weight = { {'C', 12010}, {'H', 1008}, {'O', 16000}, {'N', 14010} };
	forX() {
		string s;
		cin >> s;
		char last = ' ';
		int count = 0, ans = 0;
		irep(c, s) {
			if (c >= '0' && c <= '9') {
				count *= 10;
				count += c - '0';
			} else {
				if (count == 0)
					count++;
				ans += weight[last] * count;
				last = c;
				count = 0;
			}
		}

		if (count == 0)
			count++;
		ans += weight[last] * count;
		print("%.3f", ans / 1000.);
	}
}
