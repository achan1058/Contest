#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX (cin >> s && s != "*")
		printc("Hajj-e-%s\n", s == "Hajj" ? "Akbar" : "Asghar");
}
