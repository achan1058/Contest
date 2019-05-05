#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n)
		print("%c", n % 6 ? 'N' : 'Y');
}
