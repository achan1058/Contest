#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int X = 1;
	while (cin >> s && s != "*") {
		printf("Case %d: Hajj-e-%s\n", X, s == "Hajj" ? "Akbar" : "Asghar");
		X++;
	}
}
