#include <bits/stdc++.h>
#include "header.h"

int pmod(int n, int m) {
	return (n % m + m) % m;
}

int main() {
	forX() {
		int n, m, t;
		cin >> n >> m;
		vb hit(m);
		cin >> t;
		hit[pmod(t, m)] = true;
		rep(i, 1, n) {
			vb hit2(m);
			cin >> t;
			rep(j, 0, m) {
				if (hit[j]) {
					hit2[pmod(j + t, m)] = true;
					hit2[pmod(j - t, m)] = true;
				}
			}
			hit = hit2;
		}
		print(hit[0] ? "Divisible" : "Not divisible");
	}
}
