#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	ll c;
	whileX(cin >> n >> m >> c && (n | m | c) != 0) {
		vb on(n);
		vl voltage(n);
		ll mx = 0, cur = 0;
		read(voltage);
		rep(i, 0, m) {
			int d;
			cin >> d;
			d--;
			if (!on[d]) {
				cur += voltage[d];
				mx = max(mx, cur);
			} else {
				cur -= voltage[d];
			}
			on[d] = !on[d];
		}

		print("Sequence %d", X);
		if (mx > c) {
			print("Fuse was blown.\n");
		} else {
			print("Fuse was not blown.");
			print("Maximal power consumption was %d amperes.\n", mx);
		}
	}
}
