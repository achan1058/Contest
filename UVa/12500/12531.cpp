#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n)
		printf("%c\n", n % 6 == 0 ? 'Y' : 'N');
}
