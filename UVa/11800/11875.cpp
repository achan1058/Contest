#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vi players(n);
		read(players);
		sort(all(players));
		printc(players[n / 2]);
	}
}
