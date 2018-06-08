#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(cin >> s && s != "*") {
		printc("%s", s == "Hajj" ? "Hajj-e-Akbar" : "Hajj-e-Asghar");
	}
}
