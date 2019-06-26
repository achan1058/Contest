#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		vi bytes(100);
		int pt = 0;
		irep(c, s) {
			if (c == '>')
				pt = (pt + 1) % 100;
			else if (c == '<')
				pt = (pt + 99) % 100;
			else if (c == '+')
				bytes[pt] = (bytes[pt] + 1) % 256;
			else if (c == '-')
				bytes[pt] = (bytes[pt] + 255) % 256;
		}
		printf("Case %d:", X);
		irep(b, bytes)
			printf(" %02X", b);
		print();
	}
}
