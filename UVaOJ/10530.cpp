#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, high = inf, low = -inf;
	string s;
	while (cin >> n && n != 0) {
		getline(cin, s);
		getline(cin, s);
		if (s == "too high")
			high = min(high, n - 1);
		else if (s == "too low")
			low = max(low, n + 1);
		else {
			if (n > high || n < low)
				printf("Stan is dishonest\n");
			else
				printf("Stan may be honest\n");
			high = inf;
			low = -inf;
		}
	}
}
