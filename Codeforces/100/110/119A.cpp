#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi num(2);
	int n, turn = 0;
	read(num);
	cin >> n;
	while (n > 0) {
		n -= gcd(n, num[turn]);
		turn = 1 - turn;
	}
	printd(1 - turn);
}
