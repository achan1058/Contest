#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans = { 0 };
	for (int i = 1; ans.back() <= 10000; i++)
		ans.pb(ans.back() + i * (i + 1) / 2);

	int n;
	cin >> n;
	print(upper_bound(all(ans), n) - ans.begin() - 1);
}
