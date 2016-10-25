#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		string out;
		int sign = 1;
		cin >> n;
		while (n != 0) {
			if (n % 2 == 0)
				out.pb('0');
			else {
				n -= sign;
				out.pb('1');
			}
			n /= 2;
			sign *= -1;
		}
		if (out == "")
			out = "0";
		reverse(all(out));
		printp("%s\n", out.c_str());
	}
}
