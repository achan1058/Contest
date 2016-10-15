#include <bits/stdc++.h>
#include "header.h"

class DNASequence {
public:
	int longestDNASequence(string sequence) {
		int ans = 0, cur = 0;
		fori(v, sequence) {
			if (v == 'A' || v == 'C' || v == 'T' || v == 'G') {
				cur++;
				ans = max(ans, cur);
			} else {
				cur = 0;
			}
		}
		return ans;
	}
};
