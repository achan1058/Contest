#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi a(5);
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] && (a[0] | a[1] | a[2] | a[3] | a[4]) != 0) {
		bool poss = false;
		sort(all(a));
		do {
			rep(i1, 0, 3) {
				int b1 = a[0];
				if (i1 == 0)
					b1 += a[1];
				else if (i1 == 1)
					b1 -= a[1];
				else
					b1 *= a[1];
				rep(i2, 0, 3) {
					int c1 = b1;
					if (i2 == 0)
						c1 += a[2];
					else if (i2 == 1)
						c1 -= a[2];
					else
						c1 *= a[2];
					rep(i3, 0, 3) {
						int d1 = c1;
						if (i3 == 0)
							d1 += a[3];
						else if (i3 == 1)
							d1 -= a[3];
						else
							d1 *= a[3];
						rep(i4, 0, 3) {
							int e1 = d1;
							if (i4 == 0)
								e1 += a[4];
							else if (i4 == 1)
								e1 -= a[4];
							else
								e1 *= a[4];
							if (e1 == 23) {
								poss = true;
								goto loopend;
							}
						}
					}
				}
			}
		} while (next_permutation(all(a)));
	loopend:;
		printf("%s\n", poss ? "Possible" : "Impossible");
	}
}
