#include <bits/stdc++.h>
#include "header.h"

class GoodString {
public:
	string isGood(string s) {
		bool good = true;
		int n = 0;
		fori(c, s) {
			if (c == 'a')
				n++;
			else
				n--;
			if (n < 0)
				good = false;
		}

		if (good && n == 0)
			return "Good";
		else
			return "Bad";
	}
};
