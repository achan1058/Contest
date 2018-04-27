#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b;
	forX() {
		cin >> a >> b;
		print("%c", a == b ? '=' : a > b ? '>' : '<');
	}
}
