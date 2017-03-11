#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int a, b;
		cin >> a >> b;
		if ((a + b) % 2 == 1 || b > a)
			printf("impossible\n");
		else
			printf("%d %d\n", (a + b) / 2, (a - b) / 2);
	}
}
