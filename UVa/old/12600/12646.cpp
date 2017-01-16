#include <bits/stdc++.h>
#include "header.h"

int main() {
	int A, B, C;
	while (cin >> A >> B >> C) {
		if (A != B && A != C)
			printf("A\n");
		else if (A != B && B != C)
			printf("B\n");
		else if (A != C && B != C)
			printf("C\n");
		else
			printf("*\n");
	}
}
