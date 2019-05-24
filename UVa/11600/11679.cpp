#include <bits/stdc++.h>
#include "header.h"

int main() {
	int b, l;
	while (cin >> b >> l && (b | l) != 0) {
		vi banks(b);
		int b1, b2, c;
		read(banks);
		rep(i, 0, l) {
			cin >> b1 >> b2 >> c;
			banks[b1 - 1] -= c;
			banks[b2 - 1] += c;
		}
		bool good = true;
		irep(k, banks) {
			if (k < 0) {
				good = false;
				break;
			}
		}
		print("%c", good ? 'S' : 'N');
	}
}
