#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n >= 0) {
		int mx = 1;
		rep(i, 0, 100) {
			if (mx >= n) {
				printc("%d", i);
				break;
			}
			mx *= 2;
		}
	}
}
