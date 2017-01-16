#include <bits/stdc++.h>
#include "header.h"

class PairGame {
public:
	int maxSum(int a, int b, int c, int d) {
		while (true) {
			if (a + b >= c + d) {
				if (a == c && b == d)
					return a + b;
				if (a == 0 || b == 0)
					return -1;
				if (a > b)
					a -= b;
				else
					b -= a;
			} else {
				if (c == 0 || d == 0)
					return -1;
				if (c > d)
					c -= d;
				else
					d -= c;
			}
		}
	}
};
