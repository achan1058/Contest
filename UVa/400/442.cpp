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
				int y1 = todo.top().f, y2 = todo.top().s;
				todo.pop();
				int x1 = todo.top().f, x2 = todo.top().s;
				todo.pop();
				if (y1 != x2) {
					ans = inf;
					break;
				}
				ans += x1 * x2 * y2;
				todo.push({ x1, y2 });
			} else {
				todo.push({ matrix[c].f, matrix[c].s });
			}
		}
		if (ans == inf)
			print("error");
		else
			print("%d", ans);
	}
}
