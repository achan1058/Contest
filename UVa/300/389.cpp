#include <bits/stdc++.h>
#include "bases.h"

int main() {
	string input;
	int b1, b2;
	while (cin >> input >> b1 >> b2) {
		int value = stoi(input, 0, b1);
		string output = intToString(value, b2);
		if (sz(output) > 7)
			printf("  ERROR\n");
		else
			printf("%7s\n", output.c_str());
	}
}
