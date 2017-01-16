#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n1, n2;
	while (cin >> n1 >> n2 && (n1 & n2) != -1)
		printf("%d\n", abs(n2 - n1) > 50 ? 100 - abs(n2 - n1) : abs(n2 - n1));
}
