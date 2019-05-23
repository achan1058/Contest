#include <bits/stdc++.h>
#include "header.h"

void printnum(ll n) {
	if (n >= 10000000) {
		printnum(n / 10000000);
		printf(" kuti");
		n %= 10000000;
	}
	int d = n % 100;
	n /= 100;
	int s = n % 10;
	n /= 10;
	int h = n % 100;
	n /= 100;

	if (n != 0)
		printf(" %d lakh", n);
	if (h != 0)
		printf(" %d hajar", h);
	if (s != 0)
		printf(" %d shata", s);
	if (d != 0)
		printf(" %d", d);
}

int main() {
	ll n;
	whileX(cin >> n) {
		printf("%4d.", X);
		if (n == 0) {
			print(" 0");
			continue;
		}
		printnum(n);
		print("");
	}
}
