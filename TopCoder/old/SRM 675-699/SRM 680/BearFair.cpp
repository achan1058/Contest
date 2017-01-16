#include <bits/stdc++.h>
#include "header.h"

class BearFair {
public:
	string isFair(int n, int b, vector<int> upTo, vector<int> quantity) {
		int m = upTo.size();
		vector<pair<int, int>> pairs(m + 2);
		for (int i = 0; i < m; i++)
			pairs[i] = { upTo[i], quantity[i] };
		pairs[m] = { 0, 0 };
		pairs[m + 1] = { b, n };
		sort(pairs.begin(), pairs.end());
		int minEven = 0, minOdd = 0;
		for (int i = 0; i <= m; i++) {
			int diff = pairs[i + 1].y - pairs[i].y, range = pairs[i + 1].x - pairs[i].x;
			if (diff < 0 || diff > range)
				return "unfair";
			int numEven = range / 2, numOdd = range / 2;
			if (range % 2 == 1) {
				if (pairs[i + 1].x % 2 == 1)
					numOdd++;
				else
					numEven++;
			}
			minEven += max(0, diff - numOdd);
			minOdd += max(0, diff - numEven);
		}
		if (minEven > n / 2 || minOdd > n / 2)
			return "unfair";
		else
			return "fair";
	}
};
