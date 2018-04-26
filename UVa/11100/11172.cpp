#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b;
	forX() {
		cin >> a >> b;
		printf("%c\n", a == b ? '=' : a > b ? '>' : '<');
	}
}
