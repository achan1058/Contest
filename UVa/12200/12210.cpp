#include <bits/stdc++.h>
#include "header.h"

int main() {
	int b, s;
	whileX(cin >> b >> s && (b | s) != 0) {
		vi bach(b), spin(s);
		read(bach);
		read(spin);
		sort(all(bach));
		if (b <= s)
			printc("0");
		else
			printc("%d %d", b - s, bach[0]);
	}
}
