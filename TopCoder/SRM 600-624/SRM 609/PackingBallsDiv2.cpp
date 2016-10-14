#include <bits/stdc++.h>
#include "header.h"

class PackingBallsDiv2 {
public:
	int minPacks(int R, int G, int B) {
		int total = R / 3 + G / 3 + B / 3;
		vi a = { R % 3, G % 3, B % 3 };
		sort(all(a));

		if (a[1] == 0 && a[2] != 0)
			total += 1;
		else
			total += a[2];
		return total;
	}
};
