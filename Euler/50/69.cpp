#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi p = { 2, 3, 5, 7, 11, 13, 17, 19 };
	int ans = 1;
	for (int i = 0; ans * p[i] <= 1000000; i++)
		ans *= p[i];
	printf("%d\n", ans);
}
