#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int h, m;
		char c;
		cin >> h >> c>> m;
		if (m != 0) {
			m = 60 - m;
			h = 11 - h;
		} else {
			h = 12 - h;
		}
		if (h <= 0)
			h += 12;
		print("%02d:%02d", h, m);
	}
}
