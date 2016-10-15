#include <bits/stdc++.h>
#include "header.h"

class SimilarUserDetection {
public:
	string haveSimilar(vector<string> handles) {
		fori(handle, handles) {
			fori(c, handle) {
				if (c == '0')
					c = 'O';
				else if (c == 'I' || c == '1')
					c = 'l';
			}
		}

		sort(all(handles));

		rep(i, 1, sz(handles)) {
			if (handles[i] == handles[i - 1])
				return "Similar handles found";
		}
		return "Similar handles not found";
	}
};
