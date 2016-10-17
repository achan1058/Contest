#include <bits/stdc++.h>
#include "header.h"

vs keyboard = { "`1234567890-=", "\tqwertyuiop[]\\", "asdfghjkl;'", "zxcvbnm,./" };
int main() {
	string keys(256, 0);
	char c;
	rep(i, 0, 256)
		keys[i] = i;
	rep(i, 0, 4) {
		rep(j, 2, sz(keyboard[i]))
			keys[keyboard[i][j]] = keyboard[i][j - 2];
	}
	while (cin.get(c))
		printf("%c", keys[tolower(c)]);
}
