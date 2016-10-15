#include <bits/stdc++.h>
#include "header.h"

class SquareScoresDiv2 {
public:
	int getscore(string s) {
		char last = 0;
		int total = 0, count = 0;
		fori(c, s) {
			if (c == last) {
				count++;
			} else {
				total += count * (count + 1) / 2;
				last = c;
				count = 1;
			}
		}
		total += count * (count + 1) / 2;
		return total;
	}
};
