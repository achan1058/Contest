#include <bits/stdc++.h>
#include "header.h"

int main() {
	int total = 0, v;
	string s;
	forX() {
		cin >> s;
		if (s == "donate") {
			cin >> v;
			total += v;
		} else
			printf("%d\n", total);
	}
}
