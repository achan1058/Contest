#include <bits/stdc++.h>
#include "header.h"

int main() {
	int g, l;
	forX() {
		cin >> g >> l;
		if (l % g != 0)
			printf("-1\n");
		else
			printf("%d %d\n", g, l);
	}
}
