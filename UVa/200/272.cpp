#include <bits/stdc++.h>
#include "header.h"

int main() {
	char c;
	bool opened = false;
	while (cin.get(c)) {
		if (c == '\"') {
			printf("%s", opened ? "\'\'" : "``");
			opened = !opened;
		} else {
			printf("%c", c);
		}
	}
}
