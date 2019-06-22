#include <bits/stdc++.h>
#include "header.h"

int n, m;
bool comp(int a, int b) {
	int am = a % m, bm = b % m;
	if (am != bm)
		return am < bm;
	if (abs(a % 2) != abs(b % 2))
		return abs(a % 2);
	if (abs(a % 2))
		return a > b;
	return a < b;
}

int main() {
	while (cin >> n >> m && (n | m) != 0) {
		vi nums(n);
		read(nums);
		sort(all(nums), comp);
		print(n, m);
		print(nums, true);
	}
	print(0, 0);
}
