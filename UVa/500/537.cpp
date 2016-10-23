#include <bits/stdc++.h>
#include "util.h"

void readValue(const string& s, double& d) {
	stringstream ss(s);
	char c;
	ss >> c >> c >> d >> c;
	if (c == 'M')
		d *= 1000000;
	else if (c == 'k')
		d *= 1000;
	else if (c == 'm')
		d *= 0.001;
}

int main() {
	string s;
	forX() {
		getline(cin, s);
		vs tokens = tokenizer(s);
		double u, p, i;
		int type = 0;

		irep(v, tokens) {
			if (v[1] == '=') {
				if (v[0] == 'U') {
					readValue(v, u);
					type += 1;
				} else if (v[0] == 'P') {
					readValue(v, p);
					type += 2;
				} else if (v[0] == 'I') {
					readValue(v, i);
					type += 4;
				}
			}
		}

		printf("Problem #%d\n", X);
		if (type == 3)
			printf("I=%.2fA\n\n", p / u);
		else if (type == 5)
			printf("P=%.2fW\n\n", u * i);
		else if (type == 6)
			printf("U=%.2fV\n\n", p / i);
	}
}
