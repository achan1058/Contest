#include <bits/stdc++.h>
#include "header.h"

class SumFullSet {
public:
	string isSumFullSet(vector<int> elements) {
		set<int> s;
		bool good = true;
		irep(e, elements)
			s.insert(e);
		drep(i, j, sz(elements), i) {
			if (s.find(elements[i] + elements[j]) == s.end()) {
				good = false;
				break;
			}
		}
		return good ? "closed" : "not closed";
	}
};
