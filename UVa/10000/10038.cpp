#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		bool good = true;
		int cur, last;
		cin >> last;
		vb diff(n);
		rep(i, 1, n) {
			cin >> cur;
			int d = abs(cur - last);
			if (d <= 0 || d >= n || diff[d])
				good = false;
			if (d > 0 && d < n)
				diff[d] = true;
			last = cur;
		}
		printf("%s\n", good ? "Jolly" : "Not jolly");
	}
}
