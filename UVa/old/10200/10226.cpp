#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		int total = 0;
		map<string, int> trees;
		lineX();
		while (getline(cin, s) && s != "") {
			trees[s]++;
			total++;
		}

		printX("");
		irep(t, trees)
			printf("%s %.4f\n", t.x.c_str(), t.y * 100. / total);
	}
}
