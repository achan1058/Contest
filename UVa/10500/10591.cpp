#include <bits/stdc++.h>
#include "header.h"

int getNext(int n) {
	int ans = 0;
	while (n > 0) {
		int d = n % 10;
		ans += d * d;
		n /= 10;
	}
	return ans;
}

int main() {
	vi is_happy(1000);
	is_happy[1] = 1;
	is_happy[4] = 4;
	rep(i, 1, 1000) {
		int n = i;
		while (is_happy[n] == 0)
			n = getNext(n);
		is_happy[i] = is_happy[n];
	}
	forX() {
		int n;
		cin >> n;
		int t = getNext(n);
		if (is_happy[t] == 1)
			printp("%d is a Happy number.", n);
		else
			printp("%d is an Unhappy number.", n);
	}
}
