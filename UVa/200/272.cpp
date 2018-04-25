#include <bits/stdc++.h>
#include "header.h"

int main() {
	char c;
	bool opened = false;
	while (cin.get(c)) {
		if (c == '\"') {
			if (opened)
				printf("\'\'");
			else
				printf("``");
			opened = !opened;
		} else {
			printf("%c", c);
		}
	}
}
