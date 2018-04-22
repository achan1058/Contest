#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v, total = 0;
		cin >> n;
		vi nums(20001);
		rep(i, 0, n) {
			cin >> v;
			nums[v]++;
		}
		n = 0;
		rrep(i, 20000, 0) {
			while (nums[i] > 0) {
				nums[i]--;
				n++;
				if (n % 3 == 0)
					total += i;
			}
		}
		printf("%d\n", total);
	}
}
