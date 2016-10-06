#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k;
	while (cin >> k) {
		int num_3 = 0, num_0 = 0;

		while (k % 10 == 0) {
			k /= 10;
			num_0++;
		}
		while (k % 2 == 0) {
			k /= 2;
			num_0++;
		}
		while (k % 5 == 0) {
			k /= 5;
			num_0++;
		}
		int t = k;
		while (t > 0) {
			if (t % 10 == 3) {
				t /= 10;
				num_3++;
			}
			else {
				t += k;
			}
		}
		printf("%d %d %d\n", num_3 + num_0, num_3, num_0);
	}
}
