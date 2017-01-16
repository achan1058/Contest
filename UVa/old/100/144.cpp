#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		queue<pii> students;
		int cur_value = 1, cur_dispense = 1;

		rep(i, 1, n + 1)
			students.push({ i, 40 });
		while (!students.empty()) {
			pii t = students.front();
			students.pop();

			if (t.y <= cur_value) {
				cur_value -= t.y;
				printf("%3d", t.x);
			} else {
				t.y -= cur_value;
				cur_value = 0;
				students.push(t);
			}

			if (cur_value == 0) {
				cur_dispense++;

				if (cur_dispense > k)
					cur_dispense = 1;
				cur_value = cur_dispense;
			}
		}

		printf("\n");
	}
}
