#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, X = 0, total = 0;
	cin >> N;
	string s;
	getline(cin, s);
	getline(cin, s);
	map<string, int> trees;
	while (getline(cin, s)) {
		if (s != "") {
			trees[s]++;
			total++;
		} else {
			if (X > 0)
				printf("\n");
			irep(t, trees)
				printf("%s %.4f\n", t.x.c_str(), t.y * 100. / total);
			X++;
			total = 0;
			trees.clear();
		}
	}

	if (X > 0)
		printf("\n");
	irep(t, trees)
		printf("%s %.4f\n", t.x.c_str(), t.y * 100. / total);
}
