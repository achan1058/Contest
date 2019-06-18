#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, r;
	cin >> n >> r;
	rep(i, 1, 10) {
		if ((n * i) % 10 == r || (n * i) % 10 == 0) {
			print(i);
			break;
		}
	}
}
