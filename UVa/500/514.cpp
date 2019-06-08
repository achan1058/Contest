#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi trains(n);

		while (cin >> trains[0] && trains[0] != 0) {
			rep(i, 1, n)
				cin >> trains[i];
			int next = 0;
			stack<int> todo;
			rep(i, 1, n + 1) {
				todo.push(i);
				while (!todo.empty() && todo.top() == trains[next]) {
					todo.pop();
					next++;
				}
			}
			print("%s", next == n ? "Yes" : "No");
		}
		print();
	}
}
