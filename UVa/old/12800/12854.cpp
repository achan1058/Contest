#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi v1(5), v2(5);
	while (read(v1), read(v2), cin) {
		bool good = true;
		rep(i, 0, 5)
			good &= v1[i] + v2[i] == 1;
		printf("%c\n", good ? 'Y' : 'N');
	}
}
