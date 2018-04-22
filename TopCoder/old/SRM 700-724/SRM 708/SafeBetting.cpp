#include <bits/stdc++.h>
#include "header.h"

class SafeBetting {
public:
	int minRounds(int a, int b, int c) {
		int r = 0;
		while (b < c) {
			b += b - a;
			r++;
		}
		return r;
	}
};
