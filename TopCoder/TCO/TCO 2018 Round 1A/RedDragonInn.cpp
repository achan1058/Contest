#include <bits/stdc++.h>
#include "header.h"

class RedDragonInn {
public:
	int maxGold(int N, int X) {
		return 2 * ((X + 1) * N - 1) + 1;
	}
};
