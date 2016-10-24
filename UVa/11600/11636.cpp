#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n >= 0) {
		n--;
		int result = 0;
		while (n > 0) {
			result++;
			n /= 2;
		}
		printc("%d\n", result);
	}
}
