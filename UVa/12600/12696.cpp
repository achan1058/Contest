#include <bits/stdc++.h>
#include "header.h"

int main() {
	double l, w, d, t;
	int allowed = 0;
	forX() {
		cin >> l >> w >> d >> t;
		if (((l > 56 || w > 45 || d > 25) && l + w + d > 125 + eps) || t > 7) {
			print(0);
		} else {
			print(1);
			allowed++;
		}
	}
	print(allowed);
}
