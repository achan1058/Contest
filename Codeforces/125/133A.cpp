#include <bits/stdc++.h>
#include "header.h"

int main() {
	char c;
	bool good = false;
	while (cin >> c) {
		if (c == 'H' || c == 'Q' || c == '9') {
			good = true;
			break;
		}
	}

	printf("%s\n", good ? "YES" : "NO");
}
