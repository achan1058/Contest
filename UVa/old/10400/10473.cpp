#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s.find('-') == string::npos) {
		if (s.find('x') != string::npos)
			printf("%d\n", stoi(s, nullptr, 0));
		else
			printf("0x%X\n", stoi(s, nullptr, 10));
	}
}
