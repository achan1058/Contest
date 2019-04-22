#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		map<vi, int> count;
		vi courses(5);
		rep(i, 0, n) {
			read(courses);
			sort(all(courses));
			count[courses]++;
		}

		int pop = 0, ans = 0;
		irep(c, count) {
			if (c.y > pop) {
				pop = c.y;
				ans = c.y;
			} else if (c.y == pop) {
				ans += c.y;
			}
		}
		print("%d", ans);
	}
}
