#include <bits/stdc++.h>
#include "header.h"

int main() {
	vector<complex<int>> table(31);
	table[0] = 1;
	rep(i, 1, 31)
		table[i] = table[i - 1] * complex<int>(-1, 1);
	int n;
	while (cin >> n) {
		complex<int> ans;
		irep(t, table) {
			ans += n % 2 ? t : 0;
			n /= 2;
		}
		print(ans.real(), ans.imag());
	}
}
