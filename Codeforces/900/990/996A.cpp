#include <bits/stdc++.h>
#include "header.h"

vi nums = { 100, 20, 10, 5, 1 };
int main() {
	int n, ans = 0;
	cin >> n;
	irep(v, nums) {
		ans += n / v;
		n %= v;
	}
	printv(ans);
}
