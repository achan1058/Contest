#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, total = 0;
	cin >> N;
	string s;
	getline(cin, s);
	getline(cin, s);
	map<string, int> trees;
	rep(X, 0, N) {
		while (getline(cin, s) && s != "") {
			trees[s]++;
			total++;
		}

		if (X > 0)
			printf("\n");
		fori(t, trees)
			printf("%s %.4f\n", t.x.c_str(), t.y * 100. / total);

		total = 0;
		trees.clear();
	}
}
