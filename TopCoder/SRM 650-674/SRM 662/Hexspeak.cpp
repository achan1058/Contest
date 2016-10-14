#include <bits/stdc++.h>
#include "header.h"

class Hexspeak {
public:
	string decode(long long ciphertext) {
		string ans;
		bool good = true;
		while (ciphertext > 0) {
			int d = ciphertext % 16;
			if (d == 0)
				ans.pb('O');
			else if (d == 1)
				ans.pb('I');
			else if (d >= 10)
				ans.pb(d - 10 + 'A');
			else
				good = false;
			ciphertext /= 16;
		}
		if (good) {
			reverse(all(ans));
			return ans;
		} else {
			return "Error!";
		}
	}
};
