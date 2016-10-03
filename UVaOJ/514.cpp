#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	while (cin >> N && N != 0) {
		vi a(N);
		while (cin >> a[0] && a[0] != 0) {
			rep(i, 1, N)
				cin >> a[i];

			stack<int> s;
			int next = 0;
			rep(i, 1, N + 1) {
				s.push(i);
				while (!s.empty() && s.top() == a[next]) {
					s.pop();
					next++;
				}
			}
			printf("%s\n", s.empty() ? "Yes" : "No");
		}
		printf("\n");
	}
}
