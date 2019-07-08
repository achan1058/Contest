#include <bits/stdc++.h>
#include "header.h"

string str(int n) {
	string ans(3, '0');
	rep(i, 0, 3) {
		ans[2 - i] = n % 10 + '0';
		n /= 10;
	}
	return ans;
}

int main() {
	string s;
	forX(true) {
		vi reg(10);
		vs code;
		while (getline(cin, s) && s != "")
			code.pb(s);
		code.resize(1000, "000");

		int ans, cur = 0;
		for (ans = 1; code[cur] != "100"; ans++) {
			cerr << cur << endl;
			int c = code[cur][0] - '0', d = code[cur][1] - '0', n = code[cur][2] - '0';
			switch (c) {
			case 2:
				reg[d] = n;
				break;
			case 3:
				reg[d] = (reg[d] + n) % 1000;
				break;
			case 4:
				reg[d] = (reg[d] * n) % 1000;
				break;
			case 5:
				reg[d] = reg[n];
				break;
			case 6:
				reg[d] = (reg[d] + reg[n]) % 1000;
				break;
			case 7:
				reg[d] = (reg[d] * reg[n]) % 1000;
				break;
			case 8:
				reg[d] = stoi(code[reg[n]]);
				break;
			case 9:
				code[reg[n]] = str(reg[d]);
				break;
			case 0:
				if (reg[n] != 0)
					cur = reg[d] - 1;
			}
			cur = (cur + 1) % 1000;
		}
		printX(ans);
	}
}
