#include <bits/stdc++.h>
#include "header.h"

int main() {
	int h, m;
	char c;
	forX() {
		cin >> h >> c >> m;
		h = 12 - h;
		if (m != 0) {
			m = 60 - m;
			h--;
		}
		if (h <= 0)
			h += 12;
		printf("%02d:%02d\n", h, m);
	}
}
