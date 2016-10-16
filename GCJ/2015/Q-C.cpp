#include <bits/stdc++.h>
#include "util.h"

// 1 = 1, 2 = i, 3 = j, 4 = k
int mult(int x, int y) {
	if (abs(x) == 1 || abs(y) == 1)
		return x * y;
	if (abs(x) == abs(y))
		return -sgn(x) * sgn(y);
	if (abs(x) == 2 && abs(y) == 3)
		return 4 * sgn(x) * sgn(y);
	if (abs(x) == 3 && abs(y) == 2)
		return -4 * sgn(x) * sgn(y);
	if (abs(x) == 3 && abs(y) == 4)
		return 2 * sgn(x) * sgn(y);
	if (abs(x) == 4 && abs(y) == 3)
		return -2 * sgn(x) * sgn(y);
	if (abs(x) == 4 && abs(y) == 2)
		return 3 * sgn(x) * sgn(y);
	if (abs(x) == 2 && abs(y) == 4)
		return -3 * sgn(x) * sgn(y);
}

int main() {
	int L;
	long long n;
	forX() {
		cin >> L >> n;
		string s, s2;
		int prod = 1;
		cin >> s;

		if (n >= 12)
			n = (n % 4) + 8;
		rep(i, 0, n)
			s2 += s;

		int counter = 0;
		irep(c, s2) {
			prod = mult(prod, c - 'i' + 2);
			if (counter == 0 && prod == 2) {
				counter++;
				prod = 1;
			} else if (counter == 1 && prod == 3) {
				counter++;
				prod = 1;
			}
		}

		printp("%s\n",counter == 2 && prod == 4 ? "YES" : "NO");
	}
}
