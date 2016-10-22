#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int X = 1;
	while (cin >> s && s != "*") {
		printc("Hajj-e-%s\n", s == "Hajj" ? "Akbar" : "Asghar");
		X++;
	}
}
