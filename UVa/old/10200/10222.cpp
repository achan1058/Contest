#include <bits/stdc++.h>
#include "header.h"

vs keyboard = { "`1234567890-=", "\tqwertyuiop[]\\", "asdfghjkl;'", "zxcvbnm,./" };
int main() {
	char c;
	string keys(256, 0);
	iota(all(keys), 0);
	rep(i, 0, 4) {
		rep(j, 2, sz(keyboard[i]))
			keys[keyboard[i][j]] = keyboard[i][j - 2];
	}
	while (cin.get(c))
		printf("%c", keys[tolower(c)]);
}
