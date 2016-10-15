#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vi num(n);
		fori(v, num)
			cin >> v;
		sort(all(num));
		int mid = (n - 1) / 2, low = num[mid], high = n % 2 ? num[mid] : num[mid + 1], count = 0;
		rrep(i, mid, 0) {
			if (num[i] != low)
				break;
			count++;
		}
		rep(i, mid + 1, n) {
			if (num[i] != high)
				break;
			count++;
		}
		printf("%d %d %d\n", low, count, high - low + 1);
	}
}
