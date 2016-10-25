#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b;
	forX() {
		cin >> a >> b;
		if (a < b)
			printf("<\n");
		else if (a > b)
			printf(">\n");
		else
			printf("=\n");
	}
}
