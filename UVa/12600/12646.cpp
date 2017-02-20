#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c;
	while (cin >> a >> b >> c) {
		if (a == b)
			printf("%c\n", b == c ? '*' : 'C');
		else
			printf("%c\n", b == c ? 'A' : 'B');
	}
}
