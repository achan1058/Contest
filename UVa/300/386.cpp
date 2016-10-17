#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi cubes;
	rep(i, 0, 201)
		cubes.pb(i * i * i);
	rep(a, 2, 201) {
		rep(b, 2, a) {
			int d = a;
			rep(c, b, a) {
				while (d >= c && cubes[b] + cubes[c] + cubes[d] > cubes[a])
					d--;
				if (d < c)
					break;
				if (cubes[b] + cubes[c] + cubes[d] == cubes[a])
					printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
			}
		}
	}
}
