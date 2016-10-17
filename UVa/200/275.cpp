#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d;
	while (cin >> n >> d && (n | d) != 0) {
		vi digits(d, -1);
		string out = ".";
		int cnt = 0;
		n %= d;
		while (n != 0 && digits[n] == -1) {
			digits[n] = cnt;
			n *= 10;
			out += n / d + '0';
			n %= d;
			cnt++;
		}
		for (int i = 0; i < out.size(); i += 50)
			printf("%s\n", out.substr(i, min(50, sz(out) - i)).c_str());
		if (n == 0)
			printf("This expansion terminates.\n\n");
		else
			printf("The last %d digits repeat forever.\n\n", cnt - digits[n]);
	}
}
