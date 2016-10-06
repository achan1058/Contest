#include <bits/stdc++.h>
#include "header.h"

int main() {
	int h1, m1, h2, m2;
	while (cin >> h1 >> m1 >> h2 >> m2 && (h1 | m1 | h2 | m2) != 0)
		printf("%d\n", ((h2 - h1) * 60 + m2 - m1 + 1440) % 1440);
}
