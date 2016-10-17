#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	rep(X, 0, N) {
		ll num, count = 0;
		cin >> num;

		while (true) {
			string nums = to_string(num), numr = nums;
			reverse(all(numr));
			if (nums == numr) {
				printf("%lld %lld\n", count, num);
				break;
			}
			num += stoll(numr);
			count++;
		}
	}
}
