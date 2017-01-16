#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		int total = 0;
		cin >> n;
		while (n > 0) {
			n /= 5;
			total += n;
		}
		printf("%d\n", total);
	}
}
