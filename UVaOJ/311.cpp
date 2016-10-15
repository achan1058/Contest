#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi num(6);
	while (true) {
		int total = 0;
		bool zero = true;
		fori(n, num) {
			cin >> n;
			if (n > 0)
				zero = false;
		}
		if (zero)
			break;
		total += num[5];
		total += num[4];
		num[0] = max(0, num[0] - num[4] * 11);

		int t = min(num[3], num[1] / 5);
		total += t;
		num[3] -= t;
		num[1] -= 5 * t;

		if (num[3] > 0) {
			int sub = 20 - 4 * num[1];
			num[3]--;
			num[1] = 0;
			num[0] = max(0, num[0] - sub);
			total++;
		}

		total += num[3];
		num[0] = max(0, num[0] - num[3] * 20);

		t = num[2] / 4;
		total += t;
		num[2] -= 4 * t;

		if (num[2] > 0) {
			t = min(7 - 2 * num[2], num[1]);
			int sub = 36 - 9 * num[2] - 4 * t;
			num[1] = max(0, num[1] - t);
			num[0] = max(0, num[0] - sub);
			total++;
		}

		t = num[1] / 9;
		total += t;
		num[1] -= 9 * t;

		if (num[1] > 0) {
			int sub = 36 - 4 * num[1];
			num[0] = max(0, num[0] - sub);
			total++;
		}

		total += (num[0] + 35) / 36;
		printf("%d\n", total);
	}
}
