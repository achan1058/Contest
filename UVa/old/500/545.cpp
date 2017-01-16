#include <bits/stdc++.h>
#include "header.h"

vd num(25);
vi expo(25);
int main() {
	num[0] = 5;
	expo[0] = 1;

	rep(i, 1, 25) {
		num[i] = num[i - 1] * num[i - 1];
		expo[i] = 2 * expo[i - 1];

		if (num[i] >= 10) {
			num[i] /= 10;
			expo[i]--;
		}
	}

	int n0;
	forX() {
		cin >> n0;
		int cur_expo = 0, e = 0, n = n0;
		double cur_num = 1;

		while (n > 0) {
			if (n % 2 == 1) {
				cur_num *= num[e];
				cur_expo += expo[e];

				if (cur_num >= 10) {
					cur_num /= 10;
					cur_expo--;
				}
			}
			n /= 2;
			e++;
		}

		printf("2^-%d = %.3fE-%d\n", n0, cur_num + eps, cur_expo);
	}
}
