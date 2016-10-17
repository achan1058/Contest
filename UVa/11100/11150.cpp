#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int drink = 0, bot = 0;
		while (n > 0) {
			drink += n;
			bot += n;
			n = bot / 3;
			bot %= 3;
		}
		if (bot == 2)
			drink++;
		printf("%d\n", drink);
	}
}
