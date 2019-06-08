#include <bits/stdc++.h>
#include "header.h"

int getNext(int n) {
	int ans = n;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}

int main() {
	vb gen(1000001);
	rep(i, 0, 1000001) {
		int g = getNext(i);
		if (g <= 1000000)
			gen[g] = true;
	}
	rep(i, 0, 1000001) {
		if (!gen[i])
			printd(i);
	}
}
