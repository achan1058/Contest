#include <bits/stdc++.h>
#include "header.h"

int main() {
	char c;
	bool isOpen = false;
	while (cin.get(c)) {
		if (c == '\"') {
			printf("%s", isOpen ? "\'\'" : "``");
			isOpen = !isOpen;
		} else
			printf("%c", c);
	}
}
