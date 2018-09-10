#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, p, q, total = 0, ans = 0;
		cin >> n >> p >> q;
		vi eggs(n);
		read(eggs);
		irep(e, eggs) {
			if (total + e > q)
				break;
			total += e;
			ans++;
		}
		printc("%d", min(ans, p));
	}
}
