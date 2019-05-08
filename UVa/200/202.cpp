#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d;
	while (cin >> n >> d) {
		vi pos(d);
		printf("%d/%d = %d.", n, d, n / d);
		int out = 1;
		n %= d;
		string ans;
		while (!pos[n]) {
			pos[n] = out;
			n *= 10;
			ans.pb(n / d + '0');
			n %= d;
			out++;
		}
		print("%s(%s%s)", ans.substr(0, pos[n] - 1).c_str(), ans.substr(pos[n] - 1, 51 - pos[n]).c_str(), sz(ans) > 50 ? "..." : "");
		print("   %d = number of digits in repeating cycle\n", out - pos[n]);
	}
}
