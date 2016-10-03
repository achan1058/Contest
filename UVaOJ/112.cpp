#include <bits/stdc++.h>
#include "header.h"

int n;
bool good;
bool recurse(int cur = 0) {
	int t = 0;
	char c;
	bool neg = false;
	cin >> c;
	if (c == ')')
		return true;
	else if (c == '-')
		neg = true;
	else
		t = c - '0';
	while (cin >> c && c != '(') {
		t *= 10;
		t += c - '0';
	}
	if (neg)
		t *= -1;

	cur += t;
	bool leaf = recurse(cur);
	cin >> c;
	if (recurse(cur) && leaf && cur == n)
		good = true;
	cin >> c;
	return false;
}

int main() {
	char c;
	while (cin >> c) {
		bool neg = false;
		good = false;
		n = 0;

		if (c == '-')
			neg = true;
		else
			n = c - '0';
		while (cin >> c && c != '(') {
			n *= 10;
			n += c - '0';
		}
		if (neg)
			n *= -1;

		recurse();
		printf("%s\n", good ? "yes" : "no");
	}
}
