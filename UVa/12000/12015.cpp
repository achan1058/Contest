#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vector<pair<int, string>> ranking(10);
		int rank;
		string s;
		rep(i, 0, 10) {
			cin >> s >> rank;
			ranking[i] = { -rank, char(i + '0') + s };
		}
		sort(all(ranking));
		printf("Case #%d:\n", X);
		rep(i, 0, 10) {
			if (i > 0 && ranking[i].x != ranking[i - 1].x)
				break;
			printf("%s\n", ranking[i].y.substr(1).c_str());
		}
	}
}
