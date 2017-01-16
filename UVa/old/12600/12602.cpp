#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		cin >> s;
		if (abs((26 * 26 * (s[0] - 'A') + 26 * (s[1] - 'A') + (s[2] - 'A')) -
			(10 * 10 * 10 * (s[4] - '0') + 10 * 10 * (s[5] - '0') + 10 * (s[6] - '0') + (s[7] - '0'))) <= 100)
			printf("nice\n");
		else
			printf("not nice\n");
	}
}
