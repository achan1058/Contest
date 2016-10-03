#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d, X = 0;
	while (cin >> n >> d) {
		printf("%d/%d = %d.", n, d, n / d);
		vi digits(d, -1);
		string out;
		int cnt = 0;
		n %= d;
		while (digits[n] == -1) {
			digits[n] = cnt;
			n *= 10;
			out += n / d + '0';
			n %= d;
			cnt++;
		}
		printf("%s(%s%s)\n", out.substr(0, digits[n]).c_str(), out.substr(digits[n], min(sz(out), 50) - digits[n]).c_str(), (sz(out) > 50 ? "..." : ""));
		printf("   %d = number of digits in repeating cycle\n\n", cnt - digits[n]);
	}
}
