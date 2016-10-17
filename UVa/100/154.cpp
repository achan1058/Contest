#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	vvs assign;
	while (getline(cin, s)) {
		if (s[0] == '#')
			break;
		else if (s[0] == 'e') {
			int mn = 0, best = -1;
			for (int i = 0; i < assign.size(); i++) {
				int common = 0;
				for (int j = 0; j < assign.size(); j++) {
					for (int k = 0; k < 5; k++) {
						if (find(assign[j].begin(), assign[j].end(), assign[i][k]) != assign[j].end())
							common++;
					}
				}
				if (common > mn) {
					mn = common;
					best = i;
				}
			}
			printf("%d\n", best + 1);
			assign.clear();
		} else {
			vs as(5, string(2, ' '));
			for (int i = 0; i < 5; i++) {
				as[i][0] = s[4 * i];
				as[i][1] = s[4 * i + 2];
			}
			assign.push_back(as);
		}
	}
}
