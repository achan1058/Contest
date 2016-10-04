#include <bits/stdc++.h>
#include "header.h"

bool match(char c, bool lighter, string& left, string& right, string& ans) {
	if (left.find(c) != string::npos)
		return (lighter && ans == "down") || (!lighter && ans == "up");
	else if (right.find(c) != string::npos)
		return (!lighter && ans == "down") || (lighter && ans == "up");
	else
		return ans == "even";
}

int main() {
	vs left(3), right(3), ans(3);
	int T;
	cin >> T;
	for (int X = 0; X < T; X++) {
		for (int i = 0; i < 3; i++)
			cin >> left[i] >> right[i] >> ans[i];
		for (char c = 'A'; c <= 'L'; c++) {
			if (match(c, true, left[0], right[0], ans[0]) &&
				match(c, true, left[1], right[1], ans[1]) &&
				match(c, true, left[2], right[2], ans[2])) {
				printf("%c is the counterfeit coin and it is light.\n", c);
				break;
			}
			if (match(c, false, left[0], right[0], ans[0]) &&
				match(c, false, left[1], right[1], ans[1]) &&
				match(c, false, left[2], right[2], ans[2])) {
				printf("%c is the counterfeit coin and it is heavy.\n", c);
				break;
			}
		}
	}
}
