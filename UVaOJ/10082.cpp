#include <bits/stdc++.h>
#include "header.h"

int main() {
	vs keyboard = { "`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;\'", "ZXCVBNM,./" };
	string board(300, 0);
	char c;

	irep(s, keyboard) {
		rep(j, 0, sz(s))
			board[s[j]] = s[j - 1];
	}
	while (cin.get(c))
		printf("%c", board[c] == 0 ? c : board[c]);
}
