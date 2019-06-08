#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<char, pii> matrix;
	char c;
	int a, b;
	forX() {
		cin >> c >> a >> b;
		matrix[c] = { a, b };
	}
	string s;
	while (cin >> s) {
		int ans = 0;
		stack<pii> todo;
		irep(c, s) {
			if (c == '(') {
				continue;
			} else if (c == ')') {
				int y1 = todo.top().first, y2 = todo.top().second;
				todo.pop();
				int x1 = todo.top().first, x2 = todo.top().second;
				todo.pop();
				if (y1 != x2) {
					ans = inf;
					break;
				}
				ans += x1 * x2 * y2;
				todo.push({ x1, y2 });
			} else {
				todo.push({ matrix[c].first, matrix[c].second });
			}
		}
		if (ans == inf)
			print("error");
		else
			printd(ans);
	}
}
