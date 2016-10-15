#include <bits/stdc++.h>
#include "misc.h"

string pos = "IVXLC";
int main() {
	int n;
	vvi arr = mi(5, 101, 0);
	rep(i, 1, 101) {
		int n = i;
		rep(k, 0, 5)
			arr[k][i] = arr[k][i - 1];
		rep(j, 0, 3) {
			fori(c, roman[j][n % 10]) {
				rep(k, 0, 5) {
					if (c == pos[k]) {
						arr[k][i]++;
						break;
					}
				}
			}

			n /= 10;
		}
	}

	while (cin >> n && n != 0)
		printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, arr[0][n], arr[1][n], arr[2][n], arr[3][n], arr[4][n]);
}
