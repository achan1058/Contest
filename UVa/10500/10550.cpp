#include <bits/stdc++.h>
#include "header.h"

int turn(int s, int t) { return (t - s + 40) % 40; }
int main() {
	int s, c1, c2, c3;
	while (cin >> s >> c1 >> c2 >> c3 && (s | c1 | c2 | c3) != 0) {
		int num_turn = 120 + turn(c1, s) + turn(c1, c2) + turn(c3, c2);
		printf("%d\n", num_turn * 9);
	}
}
