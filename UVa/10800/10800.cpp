#include <bits/stdc++.h>
#include "header.h"

void putchar(map<int, string>& out, char c, int row, int col) {
	if (out.find(row) == out.end())
		out[row] = "|";

	out[row].resize(col + 1, ' ');
	out[row][col] = c;
}

int main() {
	forX() {
		string s;
		cin >> s;
		int cur = 0;
		map<int, string> out;
		for (int i = 0; i < sz(s); i++) {
			if (s[i] == 'R') {
				putchar(out, '/', cur, i + 2);
				cur--;
			} else if (s[i] == 'F') {
				cur++;
				putchar(out, '\\', cur, i + 2);
			} else if (s[i] == 'C') {
				putchar(out, '_', cur, i + 2);
			}
		}

		int maxlen = 0;
		printf("Case #%d:\n", X);
		for (auto& line : out) {
			printf("%s\n", line.second.c_str());
			maxlen = max(maxlen, sz(line.second));
		}
		printf("+%s\n\n", string(maxlen, '-').c_str());
	}
}
