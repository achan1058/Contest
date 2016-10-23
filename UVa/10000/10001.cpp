#include <bits/stdc++.h>
#include "header.h"

int state, n;
bool good;
unsigned int cur, target;

bool check(int pos) {
	int flag;
	if (pos == 0)
		flag = ((cur & 3) << 1) + ((cur >> n - 1) & 1);
	else if (pos == n - 1)
		flag = ((cur & 1) << 2) + ((cur >> n - 2) & 3);
	else
		flag = (cur >> (pos - 1)) & 7;

	return ((state >> flag) & 1) == ((target >> pos) & 1);
}

void backtrack(int pos = 2) {
	if (good)
		return;
	if (pos == n) {
		good = check(n - 1) && check(0);
		return;
	}
	cur &= ~(1 << pos);
	if (check(pos - 1))
		backtrack(pos + 1);
	cur |= (1 << pos);
	if (check(pos - 1))
		backtrack(pos + 1);
}

int main() {
	string s;
	while (cin >> state >> n >> s) {
		target = stoul(s, 0, 2);
		good = false;

		rep(i, 0, 4) {
			cur = i;
			backtrack();
			if (good)
				break;
		}
		printf("%s\n", good ? "REACHABLE" : "GARDEN OF EDEN");
	}
}
