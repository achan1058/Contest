#include <bits/stdc++.h>
#include "header.h"

int main() {
	int ans = 0;
	for (unsigned int i = 1; i <= 1 << 30; i++) {
		if ((i ^ (2 * i) ^ (3 * i)) == 0)
			ans++;
	}
	printf("%d\n", ans);
}
