#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		queue<int> q;
		printf("Discarded cards:");
		rep(i, 1, n + 1)
			q.push(i);
		while (sz(q) > 1) {
			printf(" %d%s", q.front(), sz(q) > 2 ? "," : "");
			q.pop();
			q.push(q.front());
			q.pop();
		}
		printf("\nRemaining card: %d\n", q.front());
	}
}
