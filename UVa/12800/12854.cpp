#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi a(5), b(5);
	while (read(a)) {
		read(b);
		bool good = true;
		rep(i, 0, 5)
			good = good && (a[i] + b[i] == 1);
		print("%c", good ? 'Y' : 'N');
	}
}
