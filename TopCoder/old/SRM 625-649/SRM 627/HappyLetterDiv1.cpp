#include <bits/stdc++.h>
#include "header.h"

class HappyLetterDiv1 {
public:
	string getHappyLetters(string letters) {
		vi freq(26, 0);
		string result;
		irep(c, letters)
			freq[c - 'a']++;
		rep(i, 0, 26) {
			int rem = sz(letters) - freq[i], f = freq[i], badind = -1;
			rep(j, 0, 26) {
				if (j == i)
					continue;
				if (2 * freq[j] > rem) {
					badind = j;
					break;
				}
			}

			if (badind >= 0)
				f = sz(letters) - 2 * freq[badind];
			if ((sz(letters) - f) % 2 == 1)
				f--;
			if (f > 0)
				result.pb(i + 'a');
		}

		return string(all(result));
	}
};
